#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[n];
    int i=0;
    while(n!=0){
        int r=n%10;
        arr[i++]=r;
        n=n/10;
    }
    int j=0;
    while(j<i){
        cout<<arr[j];
        j++;
    }
}