#include<iostream>
using namespace std;
int main()
{int x;
cout<<"Enter number to check number is prime or not :";
cout<<"true"<<endl;
cout<<"false"<<endl;

return 0;
}
bool prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        else
        return true;
    }
}