//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    string new_s = "";
    int n=str.length()-1;
    while(n>=0){
        new_s = new_s + str[n];
        n--;
    }
    cout<<new_s;
}

