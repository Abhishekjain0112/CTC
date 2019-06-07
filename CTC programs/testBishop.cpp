#include <iostream>
#include<string.h>
using namespace std;


int main(){

char ch='3';

cout<<" Char :"<<ch-'0'+1<<endl;
cout<<" Char :"<<ch+1<<endl;


if(ch>64 && ch<91)
  cout<<" it is Big alphabet";
else
     cout<<" it is integer";
return 0;
}
