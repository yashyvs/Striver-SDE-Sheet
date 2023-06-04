#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long mx = INT_MIN;
    long long sum = 0;
        
    for(int i=0; i<n; i++){
            
        sum+=arr[i];
        mx = max(sum,mx);
        if(sum<0) sum = 0;
    }
    if(mx<0) return 0;  
    return mx;
}
