// repeated character strings. 

#include<bits/stdc++.h>
using namespace std; 

class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        
        int x;
        
        for(int i=0; i<s.length(); i++) {
            x = count(s.begin(), s.end(),s[i]);
            
            if(x>1)
                return s[i];
        }
        
        return '#';
    }
};

// time complexity:- O(n)