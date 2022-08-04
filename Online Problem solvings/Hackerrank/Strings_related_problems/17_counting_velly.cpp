//https://www.hackerrank.com/challenges/counting-valleys/problem?isFullScreen=true

/*

*/
#include<iostream>
using namespace std;
int main()
{
    int i,s_level=0,count_v=0,steps;
    cin>>steps;
    char path[steps];
    for(i=0; i<steps; i++)
    {
        cin>>path[i];
    }
    for(i=0; i<steps; i++)
    {
        if(path[i]=='U')
        {
            if(s_level==-1)
            {
                count_v++;
            }
            s_level++;
        }
        else if(path[i]=='D')
        {
            s_level--;
        }

    }
    cout<<count_v<<endl;

    return 0;
}

