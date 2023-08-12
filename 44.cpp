#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
        return (n>>k&1)==1;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
