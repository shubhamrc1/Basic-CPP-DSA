#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the number of Rows : ";
    cin>>a;
    cout<<"Enter the number of columns : ";
    cin>>b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}