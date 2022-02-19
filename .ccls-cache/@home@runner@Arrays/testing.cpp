
#include<iostream>
using namespace std;
int main()
{

int ascii_Value = 0;
char digit;
bool value=true;

cout<<"Please introduce a Character \n"; cin>>digit;

ascii_Value = digit;

if ( (ascii_Value >=65) && (ascii_Value <=90) ){
  cout<<"The Character is an Uppercase: "<<digit;
  value=false;
}
else if ( (ascii_Value >=97) && (ascii_Value <=122) ){
  cout<<"The Character is an Lowercase: "<<digit;
  value=false;
} 
 
 if (value) {
   cout<<"The Character is an digit: " <<digit;
 }


	return 0;
}





