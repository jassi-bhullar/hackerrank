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
    double f = c2 / (c1 * log((double)d));

    int x = round((n - f)*c1 + c2 * log(f) / log((double)d));

    return x;
}

int main(int argc, char const *argv[])
{
    cout << numCPUCycles(9,2,3,1);
    return 0;
}
