#include<iostream>
using namespace std;

/*
Why we use pointers in this code????
for 3 reason
    -Same Memory allocation for multiple variable
    -Less Time cost
    -Memory limit lessen
*/

/*
ascending order sort
*/
void swaping(int *x,int *y){
   int temp;
   temp = *x;
   *x= *y;
   *y=temp;
}

/*
    In bubble sort algorithm u think there are 2 steps;;;
     -iteration for n-1 times ;;;;;;
     -compare array elements as n-i-1 times
*/

void bubble_sort(int ar[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                swaping(&ar[j],&ar[j+1]);
            }
        }
    }

}
void print_Array(int ar[],int n){
   int i,j;
   for(i=0;i<n;i++){
    cout<<ar[i]<<" ";
   }cout<<endl;
}

int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        //cout<<arr[i]<<endl;

    }
    bubble_sort(arr,n);
    cout<<endl;
    print_Array(arr,n);
cout<<endl;


return 0;
}
