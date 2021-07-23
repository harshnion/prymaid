#include <iostream>
using namespace std;
int main()
{
    int a,b,c,i,j,k,l,m,n,o;
    cin>>a;
    for(i=1;i<=a;i++){
        o=0;n=0;
        for(j=a;j>=i;j--){
            o++;
            cout<<o;
        }
        for(k=i-1;k>0;k--){
            if(k==0 and i==1){
                cout<<a;
            }
            else{
                 cout<<"*";
            }
        }  
        for(k=i-2;k>0;k--){
            if(k==0 and i==1){
                cout<<a;
            }
            else{
                 cout<<"*";
            }
        }
        n=a+1;
        for(j=a;j>=i;j--){
            n--;
            if(n-i+1==a){
                continue;
            }
            cout<<n-i+1;
        }
        cout<<"\n";
    }
    return 0;
}
