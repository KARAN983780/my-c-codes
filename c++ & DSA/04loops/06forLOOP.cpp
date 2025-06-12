#include<iostream>
using namespace std;
int main(){
    // sum of even number 1 to n
    int n;
    int sum =0;
    cout<<"enter the n =";
    cin>>n;
    for(int i =0;i<=n;i=i+2){
        sum= sum+i;
    }
    cout<<sum;
    return 0;
}
