//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int a1 = a.length();
        int b1 = b.length();
        if(a1!=b1){
            return 0;
        }
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends