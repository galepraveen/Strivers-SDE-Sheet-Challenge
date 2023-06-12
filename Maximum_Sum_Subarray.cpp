#include <bits/stdc++.h> 
#define ll long long
long long maxSubarraySum(int arr[], int n)
{
   ll maxiSum = 0, currSum = 0;
   for(int i = 0; i < n; ++i){
       currSum += arr[i];
       maxiSum = max(maxiSum, currSum);
       if(currSum < 0) currSum = 0;
   }

   return maxiSum;
}