// length of longest substring. 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestUniqueSubsttr(string S){
        // code here
        
        int n = S.length(), res = 0;
        
        vector<int> prev(256, -1);
        
        for(int j=0; j<n; j++) {
            int i = max(i, prev[S[j]] + 1);
            
            int maxend = j - i + 1;
            
            res = max(res, maxend);
            prev[S[j]] = j;
        }
        
        return res;
    }
};

// time complexity:- O(n). 