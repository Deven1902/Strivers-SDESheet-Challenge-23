#include<bits/stdc++.h>
using namespace std;

// Rank The Permutations 
class Solution{
  public:
    
    long long fact(long long n) {
        if(n==1 || n==0) return 1;
        else return n * fact(n-1);
    }
  
    long long findRank(string str) {
        
        //code here
        string str1 = str;
        sort(str1.begin(), str1.end());
        
        long long n = str.size();
        long long sum = 0;
        while(str1.size()) {
            int i = 0;
            while(str1[i]!=str[0]) {
                sum += fact(str1.size()-1);
                i++;
            }
            
            reverse(str.begin(), str.end());
            str.pop_back();
            
            reverse(str.begin(), str.end());
            str1=str;
            
            sort(str1.begin(), str1.end());   
        }
        return sum+1;
    }
};

// time complexity:- O(str.length()); 