#include<iostream>
using namespace std;


void inc(int arr[],int input){
     int c=0;int d=0;
     for(int i=0;i<input;i++){
        for(int j=i+1;j<input;j++){
         if(arr[i]>arr[j]){
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;

            }
}}
}

int high(int arr[],int input){
    int k;
    cout<<"\nEnter the nth position of Smallest element : ";
    cin>>k;
    cout<<k<<"th Smallest element is : "<<arr[k-1];
}
int low(int arr[],int input){
    int k;
    cout<<"\nEnter the nth position of Largest element : ";
    cin>>k;
    cout<<k<<"th Largest element is : "<<arr[input-k];
}

int main(){
int input;
cout<<"Enter  the size of the array : ";
cin>>input;
int arr[input];
for (int i=0;i<input ; i++){
    cout<<"Enter element : ";
    cin>>arr[i];
}
inc(arr,input);
high(arr,input);
low(arr,input);

}