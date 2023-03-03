//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long countElements(long long arr[], long long n) 
    {
        // Your code goes here
        int a = arr[0];
        int count = 1;
        for(int i=1;i<n;i++){
            if(arr[i]>a){
                count = count + 1;
                a = arr[i];
            }
        }
        return count ;
    }
};


//{ Driver Code Starts.
int main()
 {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++)
	        cin>>a[i];
	    Solution ob;
	    cout<<ob.countElements(a, n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends