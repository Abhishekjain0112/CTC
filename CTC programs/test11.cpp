#include <iostream>
#include<cstdio>
using namespace std;
int strleng(char []);

int main()
{

int i,j,k,c=0,l,m;

cout<<"Enter number ";
cin>>k;
for(m=0;m<k;m++){

  cout<<"Enter String :";

 char name1[100], name2[100];

   cin>>name1;
   cin>>name2;


l=strleng(name1);

  char ch,ch1,ch2;
   for(i=0;i<l;i++){
    ch=name1[i];
    for(j=0;j<l;j++)
    {
        if(ch==name2[j])
         {

           c++;
         break;
         }

    }


   }
  if(c==l)
        cout<<" yes\n";
  else
         cout<<" no\n";


}

   return 0;
}


int strleng(char str[])
{
    int i,j,c=0;

    for(i=0;str[i]!='\0';i++)
      {
          c++;
      }
      return c;
}

