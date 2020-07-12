#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    cin>>l;
    cin>>r;
    int max=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            int a=i^j;
            if(max<a)
            max=a;
        }
    }
    cout<<max<<endl;
    return 0;
}
