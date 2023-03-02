//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int a1=0,a2=0,ans;
    for(int i=0;i<n/ 2;i++){
        a1 = a1 + arr[i];
    }
    for(int j=n/2;j<n;j++){
        a2 = a2 + arr[j];
    }
    ans = a1 * a2;
    return ans;
}