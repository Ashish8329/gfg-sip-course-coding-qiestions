//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int count_r = 0;
           int count_g = 0;
           char R = S[0];
           for(int i=0;i<N;i++){
               
               if(S[i]==R){
                   count_r += 1;
               }
               else
                 count_g += 1;
           }
           if(count_g>count_r){
               return count_r;
           }
           else
           return count_g;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends