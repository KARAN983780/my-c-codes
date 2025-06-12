#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<<"enter the grade=";
    cin>>grade;
    if(grade<=100 && grade>=90){
        cout<<"grade A";
    }else if (grade<=89 && grade>=70){
        cout<<"grade b";
    }else if (grade<=79 && grade>=60){
        cout<<"grade c";
    }else{
        cout<<"you loss the game but not the war";
    }
    return 0;
}