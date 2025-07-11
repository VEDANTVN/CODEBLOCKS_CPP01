#include<iostream>
using namespace std;
int main()
{
    try
    {
        int age=15;
        if(age>=18)
            cout<<"Access granted-you are old enough";
        else
            throw 505;

    }
    catch(...)    //this is a catch all-handler. The ... means it `
    {
        cout<<"Access denied-You must be at least 18 years old.\n";
    }
    return 0;
}
