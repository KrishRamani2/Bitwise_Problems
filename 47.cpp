//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
    int z = m^n;
        if(m==n){
         return -1;
        }
        else
        {
           int count = 1;
           while(z!=0)
           {
              if(z&1!=0 && z!=0){
               return count;
              }
              count++;
               z= z>>1;
           }
        }
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
   
     int m,n;
     cout<<"Enter two numbers"<<endl;
    cin>>m>>n; //input m and n
     Solution ob;
    cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    return 0;     
} 
// } Driver Code Ends