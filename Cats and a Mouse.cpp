#include <bits/stdc++.h>
using namespace std;

 int main()
 {
     int q;
     cin>>q;
     while(q--)
     {
         int x,y,z;
         cin>>x>>y>>z;
         if(abs(x-z)==abs(y-z))
         cout<<"Mouse C"<<endl;
         else if(abs(x-z)>abs(y-z))
         cout<<"Cat B"<<endl;
         else
         cout<<"Cat A"<<endl;
     }
     return 0;
 }
