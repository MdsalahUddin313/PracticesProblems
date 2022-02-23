#include<iostream>
#include<array>
using namespace std;

int main(){
  int n,b;
  float c=0,d=0,e=0;
  cin>>n;
  float ar[n+1];
  for(b=0;b<n;b++){
    cin>>ar[b];
    if(ar[b]<0){
        c++;
    }
    else if(ar[b]>0){
        d++;

    }
    else if(ar[b]==0){
        e++;
    }

  }
    float q,w,r;
    q=(c/n);
    w=(d/n);
    r=(e/n);
    printf("%0.6f\n%0.6f\n%0.6f\n",w,q,r);
return 0;
}

