/*
Given an array A[] and a number x, check for pair in A[] with sum as x
NOTE:The array should be sorted
*/


bool checkPair(int a[],int n,int x)
{
    int l,r;
    l=0;
    r=n-1;
    while(r>l)
    {
        if(a[l]+a[r]==x)
            return true;
        else if(a[l]+a[r]<x)
            l++;
        else 
            r--;
    }
    return false;
}
