#include <iostream>
#include<cstdio>
using namespace std;

void check(char[],char[]);
int strleng(char []);
int main()
{

  cout<<"Enter String :";

 char name1[100], name2[100];

   cin>>name1;
   cin>>name2;



//cout<<"\n\t Names are :\n"<<name1<<"   \n"<<name2;

check(name1,name2);




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


void check(char name1[],char name2[]){
int l=0;
cout<<"\n\t Names are :\n"<<name1<<"   \n"<<name2;

  cout<<"\nLength :"<<strleng(name1);
  l=strleng(name1);

int i=0,j=0,k=0;
char ch;


  for(i=0;i<l;i++)
  {
      for(j=i;j<l;j++)
      {
         if(name1[i]>name1[i+1])
         {
           ch=name1[i+1];
           name1[i+1]=name1[i];
           name1[i]=ch;

         }
  cout<<"\n11";
      }
  }
cout<<"\n After the sort : 1 : "<<name1;








}


/*

char[] sorts(char str[],int l){
int i=0,j=0,k=0;
char ch;


  for(i=0;i<l;i++)
  {
      for(j=0;j<l;j++)
      {
         if(str[i+1]<str[i])
         {
          ch=str[i+1];
           str[i+1]=str[i];
           str[i]=ch;

         }

      }
  }

cout<<"\n After the sort : 1 : "<<str;
return str;
}*/
