#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool flag = 0;

    for(int i = 2;i<= sqrt(n) ;i++)
    {
        if(n%i == 0)
        {
            cout<<n<<" is not a Prime Number.";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        {
            cout<<n<<" is a Prime Number.";
        }
    }
    return 0;
} //for optimal solution we are running the loop until the square root og "n"