//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

#include<unordered_set>
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
           unordered_set<int>h ;
        
        int pre_sum=0;
        for(int i=0;i<n;i++){
            pre_sum += arr[i];
            
            if(h.find(pre_sum)!=h.end()){
                return true;
            }
            if(pre_sum==0){
                return true;
            }
            h.insert(pre_sum);
        }
        return false;
        //Your code here
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends