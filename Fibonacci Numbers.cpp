#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

   int fib,first=0,second=1,third=0;
   cin>>fib;

   for(int i=0; i<fib; i++)
   {
       third=first+second;
       first=second;
       second=third;
   }
   cout<<first<<endl;

    return 0;
}
