// Check if a String is Subsequence of Other


#include <bits/stdc++.h>
using namespace std;

// iterative solution 
bool isSubSeq(string s1, string s2, int n, int m){
    int j = 0;
    
    for(int i = 0; i < n && j < m; i++){
        if(s1[i] == s2[j])
        j++;
    }
    
    return j == m;
}

// time complexity O(n + m). 
// space complexity O(n)

// recursive solution:- 

bool isSubSeq(string s1, string s2, int n, int m){
    if ( m == 0 )
        return true;
        
    if ( n == 0 )
        return false;
    
    if ( s1[n-1] == s2[m-1] )
        return isSubSeq(s1, s2, n-1, m-1);
    
    else
        return isSubSeq(s1, s2, n-1, m);
}

// time complexity O(n)