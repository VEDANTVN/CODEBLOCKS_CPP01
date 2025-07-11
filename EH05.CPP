#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"\nInput x value:";
    cin>>x;
    try
    {
        if(x==0)
            throw 0;
        else if(x<0)
            throw 0.5f;
        else
            cout<<"\nx="<<x;
    }
    catch(int a)
    {

        cout<<"\nvalue is zero";
    }
    catch(float b)
    {
        cout<<"\nvalue is negative";
    }
    return 0;
}
