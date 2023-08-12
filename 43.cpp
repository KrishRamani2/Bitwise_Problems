#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        return log2(n & ~(n-1)) + 1;
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
        printf("%u\n", ob.getFirstSetBit(n)); 
    }
	return 0;
}