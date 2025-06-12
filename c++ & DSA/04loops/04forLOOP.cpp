#include<iostream>
using namespace std;
int main (){
    int n;
    int sum =0;
    cout<<"enter the number =";
    cin>>n;
    for(int i = 1; i<=n;i++){
        
        cout<<i<<" ";
        
        sum = sum+i;
      cout<<endl;  
    }
    
    cout<<"the sum of the numbers ="<<sum ;
    return 0;
}