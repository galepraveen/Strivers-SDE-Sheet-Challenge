#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i1, i2;
    i1 = i2 = -1;

    for(int i = n-2; i >= 0; --i){
        if(permutation[i] < permutation[i+1]){
            i1 = i;
            break;
        }
    }

    if(i1 == -1){
        reverse(begin(permutation), end(permutation));
        return permutation;
    }

    for(int i = n-1; i >= i1; --i){
        if(permutation[i] > permutation[i1]){
            i2 = i;
            break;
        }
    }

    swap(permutation[i1], permutation[i2]);
    reverse(begin(permutation) + i1 + 1, end(permutation));

    return permutation;
}