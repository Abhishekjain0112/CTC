#include <iostream>
#include<cstdio>
using namespace std;

main(){

int i,n,sk,ya,j;

cout<<"n:";
cin>>n;
cout<<"\n";
for(j=0;j<=n;j++)
{

   int kk=0;
while(kk<2){
    for(i=0;i<5;i++)
    {
        if(i==0 || i==4)
            cout<<"*";
        else cout<<" ";

    }
    cout<<"\n";  kk++;
}

if(j==n) break;
    for(i=0;i<5;i++)
        cout<<"*";
    cout<<"\n";
    i=0;




}


}
324
