//code is done and correctly work
#include<iostream>
using namespace std;


int main()
{
     long int minimum,maximum,sum=0,i,ar[5];
    for (i=0;i<5;i++){
        cin>>ar[i];
        sum=sum+ar[i];
    }

   minimum=ar[0];
    for(i=1;i<5;i++){
        if(minimum>=ar[i]){
            minimum = ar[i];
        }
    }
    maximum = ar[0];
    for(i=1;i<5;i++){
        if(ar[i]>maximum){
            maximum = ar[i];
        }
    }
    cout<<sum-maximum<<" "<<sum-minimum<<endl;


    return 0;
}
