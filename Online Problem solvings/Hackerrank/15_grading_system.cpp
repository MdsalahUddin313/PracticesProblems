//https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
//all test cases are running
#include<iostream>
using namespace std;

int main(){

int j,Grade,diff,fmul,i,n;
cin>>n;
for(j=1;j<=n;j++){

cin>>Grade;
i=Grade/5;
fmul=(i+1)*5;
diff=abs(Grade-fmul);
if(diff<3 && Grade>37){
    cout<<fmul<<endl;
}
else{
    cout<<Grade<<endl;
}
}
return 0;
}
