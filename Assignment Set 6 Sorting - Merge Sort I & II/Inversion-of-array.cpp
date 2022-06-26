#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
   long long int count = 0;
    long long int inversionCount(long long arr[], long long N)
    {
        mergesort(arr, 0, N-1);
        return count;
    }
    
    long long int* mergesort(long long arr[], long long low, long long high) {
        if(low == high){
            long long int *ans = new long long int [1];
            ans[0] = arr[low];
            return ans;
        }
        long long mid = low + (high - low)/2;
        long long int* left = mergesort(arr, low, mid);
        long long int* right = mergesort(arr, mid + 1, high);
        return mergearrays(left, right, mid - low + 1, high - mid);
    }

    long long int* mergearrays(long long int* left, long long int* right, int n, int m){
        int i = 0, j = 0;
        long long int* ans = new long long int [n + m + 1];
        int k = 0;
        while(i < n && j < m)
        {
            if(left[i] <= right[j]){
                ans[k++] = left[i++];
            }
            else {
                ans[k++] = right[j++];
                count += n - i;
            }
        }
        while(i < n) ans[k++] = left[i++];
        while(j < n) ans[k++] = right[j++];
        
        return ans;
    }

};


int main() {
    
    long long T=1;
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}