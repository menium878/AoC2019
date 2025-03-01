#include <iostream>
#include <fstream>
int mass(int b){
    int m = (b/3-2);
    if(m<0) return 0;
    std::cout<<m<<"\n";
   return m+ mass(m);
}
int main(){
std::cout << "JESTEM";
std::ifstream infile("file.txt");
int a;
int sum =0;
while (infile >> a)
{
    std::cout<< a<<"\n";
   sum+= mass(a);
}
std::cout <<"Wynik: " << sum;
return 0;
}
