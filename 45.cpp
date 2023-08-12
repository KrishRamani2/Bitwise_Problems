#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int largestpow(int n){
        int x=0;
        while(1<<x<=n){
            x++;
        }
        return x-1;
    }
    int countSetBits(int n)
    {
     if(n==0) return 0;
        int x=largestpow(n);
        int first=x*(1<<(x-1));
        int second=n-(1<<x)+1;
        int ans=first+second+countSetBits(n-(1<<x));
        return ans;
    }
};
int main()
{
	 int t;
	 cin>>t;
	 while(t--) 
     {
	       int n;
	       cin>>n; 
	       Solution ob;
	       cout << ob.countSetBits(n) << endl; 
	  }
	  return 0;
}