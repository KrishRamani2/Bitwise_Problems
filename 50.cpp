#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int ans = 0;
        while(N>0)
        {
            N=N&(N>>1);
            ans++;
        }
        return ans;
    }
};
int main() 
{
	cout<<"Enter your number"<<endl;
	int n;
	cin>>n;
	Solution obj;
	cout<<obj.maxConsecutiveOnes(n)<<endl;
	
	return 0;
}