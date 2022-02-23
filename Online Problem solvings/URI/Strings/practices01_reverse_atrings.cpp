//1.
#include<iostream>
using namespace std;

void palindrome_test(string given_str,string reverse_str,int size_array){
     int i=0;
     if(given_str!=reverse_str){
        cout<<"Palindrome not detected"<<endl;
     }else{
        cout<<"Palindrome Detected"<<endl;
     }

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
      palindrome_test(str,reverse_str,j);
      return reverse_str;
}



int main(){
  string str;
  cin>>str;
  reverse_string(str);

return 0;
}
