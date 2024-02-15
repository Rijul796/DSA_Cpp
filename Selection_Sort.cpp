#include<iostream>
using namespace std;

void select(int *arr, int l){
    for(int i=0;i<l;i++){
        int min = i;
        for(int j=i+1;j<l;j++){

            if(arr[i]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);

    }
        for(int i=0;i<l;i++){
            cout<<arr[i]<< " ";
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l = sizeof(arr)/sizeof(int);
    select(arr,l);
}
