#include<stdio.h>
int main(){
    int n;
   long int i,max,k,c=0;
   scanf("%d",&n);
   long int arr[n+1];
   for(i=0;i<n;i++){
    scanf("%ld",&arr[i]);
    if(arr[i]>arr[i+1] ||arr[i+1]>arr[i]){
        max = arr[i];
    }
   }
   for(k=0;k<n;k++){
    if(arr[k]==max){
        c++;
    }
   }
   printf("%ld\n",c);

return 0;
}
