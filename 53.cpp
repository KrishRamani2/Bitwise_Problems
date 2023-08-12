//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
      return n^(n>>1);
    }
};

//{ Driver Code Starts.

int main()
{
    cout<<"Enter your number"<<endl;
    int n;
    cin >> n;//input n
    Solution ob;
    cout << ob.greyConverter(n) << endl;
    
}

// } Driver Code Ends