//https://www.hackerrank.com/challenges/mars-exploration/problem?isFullScreen=true
//this approches worked properly
#include<iostream>
using namespace std;
int main()
{
    string mg;
    char ar[2];
    int first=0,second=1,third=2,i,j=0;
    cin>>mg;
    int len=mg.length();
    for(i=0;third<len;i++){
       if(mg[first]!='S') j++;
       if(mg[second]!='O') j++;
       if(mg[third]!='S') j++;

       first+=3;
       second+=3;
       third+=3;
    }

    cout<<j<<endl;
    return 0;
}


/*This approch run for 60% of test case successfully

#include<iostream>
using namespace std;
int main()
{
    string mg;
    int i,j=0;
    cin>>mg;
    int len=mg.length();
    for(i=0;i<=len;i++){
        if((mg[i]=='S'||mg[i]=='O')){
            j=j+1;
        }else{
        continue;
        }
    }
    cout<<len-j<<endl;
    return 0;
}

*/
