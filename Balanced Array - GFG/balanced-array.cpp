//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int a1=0,a2=0;
       for(int i=0;i<n/2;i++){
           a1=a1 + a[i];

       }
       for(int j=n/2;j<n;j++){
           a2 = a2 + a[j];
       }
       
       if(a1<a2){
           return a2 - a1;
       }
       else
       return a1 - a2;
        
       
       
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends