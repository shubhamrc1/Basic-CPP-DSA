#include<iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max (x, max (y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=y;
    }
    else{
        b=y;
        c=x;
    }
    if(a*a == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;
    if (check(x,y,z))
    {
        cout<<"Pythagorean Triplet";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet";
    }

       
}