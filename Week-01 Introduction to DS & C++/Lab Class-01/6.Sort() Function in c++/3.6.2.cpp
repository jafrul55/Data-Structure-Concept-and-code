#include<bits/stdc++.h>
using namespace std;
//sort()Function in c++
//it is included with STL->Standard Template Library
int main()
{
int a[5]={5,4,3,2,1};
int n=5;
sort(a,a+n); //here all value will sort
//sort(a,a+3); //3,4,5 will be sort
for(int i=0;i<5;i++)
{
    cout<<a[i]<<" "; //3,4,5 will be sort
}


    return 0;
}

