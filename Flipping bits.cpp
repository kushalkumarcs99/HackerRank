#include<bits/stdc++.h>
using namespace std;
unsigned int flipping2(unsigned int a)
{
    long long num = (1 << 32) - 1;
    a = num - a;
    return a;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        unsigned int a;
        cin>>a;
        cout<<flipping2(a)<<endl;
    }
}
