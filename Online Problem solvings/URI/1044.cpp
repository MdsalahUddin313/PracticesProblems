#include<iostream>
using namespace std;

int main(){

int i,a,b,c=2;
cin>>a>>b;
int ar[b];

for(i=0;i<=b &&c<=b;i++,c++){
    if(b%c==0){
        ar[i]=c;
    }
    if(ar[i]==a){
            cout<<"Sao Multiplos"<<endl;
            //break;
        }else{
            cout<<"Nao sao Multiplos"<<endl;
           // break;
        }
    cout<<ar[i]<<endl;
    }


return 0;

}
