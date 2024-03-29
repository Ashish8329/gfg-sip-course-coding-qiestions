//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int res = arr[0];
	    int temp =-1;
	    
	    for(int i=0;i<n;i++){
	        res = max(res,arr[i]);
	    }
	    for(int j=0;j<n;j++){
	        if(arr[j]==res){
	            continue;
	        }
	        else{
	            temp = max(temp,arr[j]);
	        }
	    }
	    return temp;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends