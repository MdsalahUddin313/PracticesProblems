#include <iostream>
using namespace std;

int main(){

int n,i,j,pair_temp,sum=0,m_pair;
cin>>n;
int ar[n];

for(i=0;i<n;i++){
    cin>>ar[i];
}
for(i=0;i<n;i++){

   sum+=ar[i]/2;
}
cout<<sum<<endl;

return 0;
}
