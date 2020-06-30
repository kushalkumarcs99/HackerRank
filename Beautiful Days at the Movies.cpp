#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    for(int i=a;i<=b;i++)
    {
        int rem=0;
        int reverse=0;
        int n=i;
         while(n!=0)    
        {    
            rem=n%10;      
            reverse=reverse*10+rem;    
            n/=10;    
        }    
        if(abs(i-reverse)%c==0)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
