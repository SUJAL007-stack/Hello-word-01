#include<iostream>
using namespace std;
int main()
{
    int i,n1=0,n2=1;
    cout<<n1<<endl;
    cout<<n2<<endl;
    
    for(i=2;i<=10;i++)
    {
    int n3=n1+n2;
    n1=n2;
    n2=n3;
    cout << n3<<endl;
    
    
    
    }
    return 0;

}