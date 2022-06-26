#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
     int a[n],sum=0,length=0,max;
    int flag=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];


      if(flag==0)
      {
          max=a[i];
          flag=1;
      }
      if(max<a[i])
       max=a[i];

      if(a[i]>=0)
      {
          sum=sum+a[i];
          length++;
      }
    }
    cout<<sum;
     
    return 0;
}