#include <bits/stdc++.h>
using namespace std;

//User function template for C++

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    
	    /*
	    string str = S;
	    reverse(str.begin(), str.end());
	    
	    if(str == S) 
	        return true; 
	        
	    else 
	        return false; 
        */
        
        // alternate solution
        
        int left = 0;
        int right = S.length() - 1;
        
        while(left < right) {
            if(S[left] != S[right])
                return false;
                
            left ++;
            right --;
        }
        
        return true; 
	}

};

// time complexity :- O(n). -> we will traverse and compare both elements in the apporach and hencce the whole element list of the strings will be traversed. 
