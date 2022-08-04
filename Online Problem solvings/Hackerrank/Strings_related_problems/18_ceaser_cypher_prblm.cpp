//https://www.hackerrank.com/challenges/caesar-cipher-1/problem?isFullScreen=true
//7 out of 12 test cases are run properly
#include<iostream>
using namespace std;

int main(){

int i,j,error=0,len,n,ro_tate;
    cin>>n;
    char message[n],msg2[n];

    for(i=0; i<n; i++)
    {
        cin>>message[i];
    }
    cin>>ro_tate;
    for(i=0;i<n;i++){
        if((message[i]>='a'&&message[i]<='z')||(message[i]>='A'&&message[i]<='Z')){
             msg2[i]=message[i]+ro_tate;
             for(j=ro_tate;j>=0;j--){
                if (message[i]==('z'-j+1))
                {
                    message[i]=('a'-j+ro_tate);
                    msg2[i]=message[i];

                }if (message[i]==('Z'-j+1))
                {
                    message[i]=('A'-j+ro_tate);
                    msg2[i]=message[i];

                }
             }
        }else{
             msg2[i]=message[i];
        }
        cout<<msg2[i];
    }
return 0;
}
