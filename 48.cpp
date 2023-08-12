#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countBitsFlip(int a, int b)
    {
      int flipCnt = 0;
        while(a||b){
           if((a&1)^(b&1))
                ++flipCnt;
            a = a>>1;
            b = b>>1;
        }
        return flipCnt;
    }
};
int main()
{
	cout<<"Enter two numbers"<<endl;
	int a,b;
	cin>>a>>b;
    Solution ob;
	cout<<ob.countBitsFlip(a, b)<<endl;
	return 0;
}
