// reverse words in a given string. 

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        
        for(int i=0; i<s.length(); ){
            int j=i;
            while(j<s.length() && s[j]!='.'){
                j++;
            }
            reverse(s.begin()+i, s.begin()+j);
            i=j+1;
        }
        
        reverse(s.begin(), s.end());
        return s;
    } 
};
