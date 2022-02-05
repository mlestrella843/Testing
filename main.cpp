#include <iostream>
using namespace std;

int main() {

int i,j=0;
char letter;
char array_vowel[5]={'a','e','i','o','u'};
char array_conso[22]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};

cout<<"Favor introducir la letra minuscula: \n";
cin>>letter;

for (i=0; i<=5; i++){
  if(array_vowel[i]== letter){
    cout<<"la letra introducida es la vocal: " <<array_vowel[i];break;
  }
}

for (j=0; j<=22; j++){
  if(array_conso[j]== letter){
    cout<<"la letra introducida es la consonante: " <<array_conso[j];break;
  }
       else if('y'== letter){
       cout<<"la letra introducida es la 'y' que puede ser vista como vocal o como consonante: "; break;
       }     
       //cout<<"la letra introducida es invalida: \n"; break;
    }
   return 0;
}


