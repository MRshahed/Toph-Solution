#include<bits/stdc++.h>
using namespace std;
int main()
{
char a[100];
cin.getline(a,100);
bool flag=0;
int n=strlen(a);

for(int j=0; j<n; j++)
{
if(a[j]!=a[n-j-1])
{
    flag=1;
}
}
if(flag)
{
    cout<<"No";
}
else
{
    cout<<"Yes";
}

 return 0;
}
