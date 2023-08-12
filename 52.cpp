#include<iostream>
using namespace std;
class Solution
{
    public:
    bool isSparse(int n)
    {
        int ans = 0;
        while(n>0)
        {
            n=n&(n>>1);
            ans++;
        }
       return ans>1?0:1;
    }
};
int main()
{
    cout<<"Enter your number"<<endl;
    int n;
    cin>>n;
    Solution ob;
    if(ob.isSparse(n))
    {
        cout << "1" << endl;
    }
    else cout << "0" << endl;  
    return 0;
}