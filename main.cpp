//How to know wich integer is the greater

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;  // 
	
  cout<< "Introduce 3 integers to calcula which is largest \n";
  cin>>a;
  cin>>b;
  cin>>c;
  

if (a>b && a>c){
    cout<<"a is the integer greater\n" <<a;
}
else if (b>a && b>c){
    cout<<"b is the integer greater\n" <<b;
}
else if(c>a && c>b){
  cout<<"c is the integer greater\n" <<c;
}
  
 return 0;
}























