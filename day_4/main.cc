#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> intToVec(int num){
    std::vector<int> digits;
    while(num>0){
        digits.emplace_back(num%10);
        num /=10;
    }
    std::reverse(digits.begin(), digits.end());
    return digits;
}
    
bool hasDuplicateNotDecrese(int num){
    std::vector<int> vec = intToVec(num);
      if( !(std::adjacent_find(vec.begin(),vec.end(),[](int a,int b){
            return a >b;
            }) !=vec.end())){
            if((std::adjacent_find(vec.begin(),vec.end(),[&](int a,int b){
                return (a==b && std::count(vec.begin(),vec.end(),a)<3);})!=vec.end())) return true;
      }
      return false;
}
int main(){
    int c=0;
    for(int a =171309;a<643603;++a){
    c+= hasDuplicateNotDecrese(a); 
    }
    std::cout<< c;
    return 0;
}
