//1.i need to improve my coding ..don't get any expected output yet..

#include<iostream>
using namespace std;


void shift_ascii(string str,int n){
      int i=0,arra[n];
      char ch[n];
      for(i=0;i<=n;i++){
        arra[i]=str[i];
        arra[i]=arra[i]+3;
        cout<<arra[i]<<endl;
      }
    for(i=0;i<=n;i++){
        ch[i]=arra[i];
      }
      cout<<ch;

}

string reverse_string(string str){

      int i,j;
      j=str.length()-1;
      char reverse_str[j];
      for(i=0;i<=j;i++){
        if(str[i]!='\0'){
            reverse_str[j-i]=str[i];
        }
      }

      cout<<"Reverse Array is::"<<reverse_str<<endl;
      shift_ascii(reverse_str,j);
      return reverse_str;
}



int main(){
  string str;
  cin>>str;
  reverse_string(str);

return 0;
}
