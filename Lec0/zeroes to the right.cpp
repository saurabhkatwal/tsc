#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    int arr2[n]={0};
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr2[k++]=arr[i];
        }
        else if(k>=j){
            break;
        }
        else{
            arr2[j--]=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}