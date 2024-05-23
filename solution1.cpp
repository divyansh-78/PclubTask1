#include <iostream>

int cube_root(int n)
{
    if(n==1)
    {
        return 1;
    }
    int i= 1;
    while(i*i*i<=n)
    {
        i++;
    }
    return i-1;
}

int minimum(int a, int b)
{
    if(a<=b)
    {
        return a;
    }
    return b;
}

int main() {
    // Write C++ code here
    int n;
    std::cin>>n;
    int memo[n+1];
    int i= 0;
    int j= 0;
    for(i=0;i<=n;i++)
    {
        memo[i]= 1000000;
    }
    memo[0]= 0;
    memo[1]= 1;
    for(i=2;i<=n;i++)
    {
        if(cube_root(i)*cube_root(i)*cube_root(i)==n)
        {
            memo[i]= 1;
        }
        else
        {
            for(j=1;j<=cube_root(i);j++)
            {
                memo[i]= minimum(memo[i], 1+memo[i-j*j*j]);
            }
        }
    }
    std::cout<<memo[n];
}