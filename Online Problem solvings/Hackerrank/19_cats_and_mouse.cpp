//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?isFullScreen=true
//running all test cases successfully
#include <iostream>
using namespace std;

int main(){

    int x,y,z,n;


     int i,a_distance,b_distance;
     cin>>n;

     for(i=0;i<n;i++){
        cin>>x>>y>>z;
        a_distance=abs(x-z);
       b_distance=abs(y-z);

      // cout<<a_distance<<b_distance<<endl;
       if((a_distance)==(b_distance)){
           cout<< "Mouse C"<<endl;
       }
       else if(a_distance<b_distance){
           cout<< "Cat A"<<endl;
       }else if(a_distance>b_distance){
           cout<< "Cat B"<<endl;
       }
     }

       return 0;
}
