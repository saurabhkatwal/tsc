#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is"<<sum(a,b)<<endl;
    cout<<"sub of "<<a<<" and "<<b<<" is"<<sub(a,b)<<endl;
}