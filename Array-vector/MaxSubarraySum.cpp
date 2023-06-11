#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
    /*
    int maxi = INT_MIN;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int sum =0;

            for(int k=i; k<=j; k++) {
                sum += arr[k];
            }
            maxi = max(maxi, sum);
        }
    }

    return maxi;
    */

    long maxSum = 0;
    long sum = 0;
    int i =0;
    while(i<n){
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        
        maxSum = max(sum, maxSum);
        i++;
    }
    return maxSum;
}
