#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxAND (int arr[], int N)
    {
        int ans=0;
        for(int i=31;i>=0;i--)
        {
            int k=0;
            for(int j=0;j<N;j++)
            {
                if((arr[j]&(1<<i))!=0)
                {
                    if((arr[j]&ans)==ans)
                    k++;
                }
            }
            if(k>=2)
            {
                ans+= (1<<i);
            }
        }
    return ans;
    }
};
int main()
{
    cout<<"Enter number of elements to be in an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" elements in an array "<<endl;
    int arr[n+5],i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    Solution obj;
    cout << obj.maxAND(arr,n)<<endl;
    return 0;
}