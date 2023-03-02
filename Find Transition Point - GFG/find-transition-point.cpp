//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    int ans= -1;
    
    for(int i=0;i<n;i++){
        if(n==1){
            if(arr[i]==0){
                ans= -1;
            }
            else 
            ans = 0;
        
        }
        
            
        
        else if(arr[i]!=arr[i- 1]){
            ans = i;
            break;
        }
    }
    return ans;
}