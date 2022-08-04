//#HackerRank
//Abs
//This code passes all test cases in hacker rank..
//https://www.hackerrank.com/challenges/strong-password/problem?isFullScreen=true
#include<iostream>
using namespace std;
int main()
{
    int i,error=0,len,n;
    cin>>n;
    char password[n];
    for(i=0; i<n; i++)
    {
        cin>>password[i];
    }
    int up,lo,num,sp;
    up=lo=num=sp=1;

    for(i=0; i<n; i++)
    {

        if(password[i]>='A' && password[i]<='Z')
        {
            up=0;
        }
        else if(password[i]>='a' && password[i]<='z')
        {
            lo=0;
        }
        else if(password[i]>='0' && password[i]<='9')
        {
            num=0;
        }
        else if(password[i]>='!' && password[i]<='-')
        {
            sp=0;
        }
    }

    if(n>=6)
    {
        cout<<up<<lo<<num<<sp<<endl;
        cout<<up+lo+num+sp<<endl;
    }
    else
    {
       // cout<<up<<lo<<num<<sp<<endl;
        int total=up+lo+num+sp;
     if(n<=3 || total<=1 )
        {
            cout<<abs(n-6)<<endl;
        }
        else
        {
            cout<<total<<endl;
        }
    }
    return 0;
}
