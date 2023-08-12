#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    unsigned int swapBits(unsigned int n)
    {
        unsigned int even = n & 0XAAAAAAAA;
        unsigned int odd = n & 0X55555555;
        even >>= 1;
        odd <<= 1;
        return even|odd;
    }
};
int main()
{
	cout<<"Enter your number"<<endl;
	unsigned int n;
	cin>>n;
	Solution ob;
	cout << ob.swapBits(n) << endl;
	return 0;
}
