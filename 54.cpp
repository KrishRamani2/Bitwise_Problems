#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:

    int grayToBinary(int n)
    {
        int res = 0;
        while(n)
        {
         res^=n;
         n>>=1;
     }
     return res;
    }
};
int main()
{
    cout<<"Enter your number"<<endl;
    int n;
    cin>>n;
    Solution ob;
    cout<< ob.grayToBinary(n)<<endl;
    return 0;
}