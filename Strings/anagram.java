// Anagram gfg practise

#include <bits/stdc++.h> 
using namespace std; 
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        // simple solution. 
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        if(a==b) 
            return true;
            
        else 
            return false;
            
        // optimized solution to be updated. 

        const int CHAR=256;
        int n1 = a.length();
        int n2 = b.length();
        
        if(n1 != n2)
            return false;
            
        int count[CHAR]={0};
        
        for(int i=0; i<n1; i++) {
            count[a[i]]++;
            count[b[i]]--;
        }
        
        for(int i=0;i<CHAR;i++){
            if(count[i]!=0)
                return false;
        }
        
        return true;
        
        // time complexity for optimised solution:- O(n).
    }

};