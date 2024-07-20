#include<iostream>
using namespace std;
//code for finding highest among three numbers

int main(){
    int a,b,c;
    cout<<"Enter the numbers \n";
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
        cout<<"a is the largest number"<<endl;
        }
    }
    else if (b>a){
        if (b>c){
        cout<<"b is the largest number"<<endl;
        }
    }
    else{
        cout<<"c is the largest number"<<endl;
    }
return 0;
}