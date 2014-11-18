/*
 find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
 Kadane’s Algorithm
 NOTE:Algorithm doesn't work for all negative numbers. It simply returns 0 if all numbers are negative.
*/


int maxSubArraySum(int a[],int n)
{
    int i,tmax=0,max=0;
    for(i=0;i<n;i++)
    {
        tmax=tmax+a[i];
        if(tmax<0)
            tmax=0;
        else if(tmax>max)
            max=tmax;
    }
    return max;
}
