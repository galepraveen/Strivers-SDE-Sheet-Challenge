#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zeros, ones, twos;
   zeros = ones = 0;
   twos = n-1;

   while(ones <= twos){
      if(arr[ones] == 1) ones++;
      else if(arr[ones] == 0) swap(arr[zeros++], arr[ones++]);
      else swap(arr[twos--], arr[ones]);
   }
}