
#include <iostream>
using namespace std;

int main() {

int n, number_day;
cout<<"Introduce a number and you will know which day of the week it is\n";
cin>>number_day;

if(number_day>0 && number_day<=7)
 {   

  switch(number_day){
  case 1: cout<<"Sunday\n"; break;
  case 2: cout<<"Monday\n";break;
  case 3: cout<<"Tuesday\n";break;
  case 4: cout<<"Wednesday\n";break;
  case 5: cout<<"Thursday\n";break;
  case 6: cout<<"Friday\n";break;
  case 7: cout<<"Saturday\n";break;
  }

 }

else 
cout<<"The week only have 7 days\n";

return 0;

}
