//Hollow Star Pattern 
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number of rows : ";
    cin>>a;
    cout<<"Enter nnumber of Columns : ";
    cin>>b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==1 || i==a || j==1 || j==b)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
