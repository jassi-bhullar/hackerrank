/*
You have 4 integers n, d, c1, c2. Consider a hypothetical computer which can perform only two types of operations: (on a given integer x)
O1: Subtract 1 from x. This operation costs c1 CPU cycles.
O2: Divide x by d. Can be performed only if x is divisible by d. This operation costs c2 CPU cycles.
What is the minimum no. of CPU cycles in which the computer can reduce the input integer n to 1.
*/

#include <bits/stdc++.h>
using namespace std;

int numCPUCycles(int n, int d, int c1, int c2)
{
    vector<int> dp(n+1, 0);

    dp[1] = 0;
    
    
    for(int i = 2; i < n+1; i++)
    {
        if(i%d == 0)
        {
            dp[i] = min(dp[i-1] + c1, dp[i/d] + c2);
        } else
        {
            dp[i] = dp[i-1] + c1;
        }
    }

    return dp[n];
    
}

int main(int argc, char const *argv[])
{
    cout << numCPUCycles(9,2,3,1) << endl;
    int x = round(3/log(2));
    // cout << x << endl;
    return 0;
}
