#include<iostream>
using namespace std;

float average(int arr[],int input){
int s=0;
for(int i=0;i<input;i++){
 s=s+arr[i];
}
float avg=(float)s/input;
cout<<"The mean of the given inputs is : "<<avg;
}

float lar(int arr[],int input){
int maximum=0;
for(int i=0;i<input;i++){
if(maximum<arr[i]){
    maximum=arr[i];
}}
cout<<"\nLargest element in the array is : "<<maximum;
}

float sml(int arr[],int input){
int minimum=arr[1];
for(int i=0;i<input;i++){
    if(minimum>arr[i]){
    minimum=arr[i];
}}
cout<<"\nSmallest element in the array is : "<<minimum;
}

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

float median(int arr[],int input){
    if(input%2!=0){
        cout<<"\nMedian of the given input is : "<<arr[(input/2)];
    }
    if(input%2==0)
    {
            int x=arr[input/2];
            int y=arr[(input/2)-1];
           float a=(float)(x+y)/2;
        cout<<"\nMedian of the given input is : "<<a;
    }


}

float mode(int arr[], int input) {
	int x = 0;
	int y = 0;
	int pos = 0;
	for (int i = 0; i <= input - 2; i++) {
		if (arr[i] == arr[i+1]) {
			x++;
		}
		else {
			if (x > y) {
				y = x;
				pos = i;
			}
			x = 0;
		}
	}
	cout<<"\nMode of the given inputs is : "<<arr[pos];
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
average(arr,input);
lar(arr,input);
sml(arr,input);
inc(arr,input);
median(arr,input);
mode(arr,input);
}