//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int n= S.length();
        string new_str;
        new_str=S[0];
        if(n<2){
            return S;
        }
        
        for(int i=1;i<=n-1;i++){
            if(S[i]!=S[i-1]){
                
                new_str=new_str+S[i];
            }
        
        }
         return new_str;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends