#include <iostream>
using namespace std;
int sum_arr_elements(int arr[],int n){
int sum=0,i;
for(i=0;i<n;i++){
sum = sum + arr[i];
}
cout<<"The sum of array elements = "<<sum;
}
int main(){
int n;
cout<<"Enter the size of the array : ";
cin>>n;
int arr[n],i;
for(i=0;i<n;i++){
cout<<"Enter the element : ";
cin>>arr[i];
}
return sum_arr_elements(arr,n);
}

