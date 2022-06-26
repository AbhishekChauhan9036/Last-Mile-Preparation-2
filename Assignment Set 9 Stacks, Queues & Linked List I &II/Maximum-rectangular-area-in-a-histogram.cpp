#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:

    long long getMaxArea(long long arr[], int n)
    {
        
        vector<int> left(n),right(n);
        stack<int> s,s1;
        
        left[0]=0;
        
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                
                s.pop();
            }
            left[i] = (s.empty()) ? 0 : s.top()+1 ;
            s.push(i);
        }
        
        s=s1;
        
        right[n-1]=n-1;
        s.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            right[i] = (s.empty()) ? n-1 : s.top()-1 ;
            s.push(i);
        }
        
        long long int Max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            Max=max(Max,(right[i]-left[i]+1)*arr[i]);
        }
        return Max;
        
        
        
    }
};


int main()
 {
    long long t;

    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}