/*
Majority Element: A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element)

Moore’s Voting Algorithm
majorityElement(int a[],int n) returns the majority element
isMajority(int a[],int n,int ele) verifices weather the element is majority
printMajority(int a[],int n) prints the majority element

*/

int majorityElement(int a[],int n)
{
    int i,maj_index=0,count=1;
    for(i=0;i<n;i++)
    {
        if(a[maj_index]==a[i])
            count++;
        else
            count--;
        if(count==0)
        {
            maj_index=i;
            count=1;
        }
    }
    return a[maj_index];
}

bool isMajority(int a[],int n,int ele)
{
    int i,count;
    for(i=0;i<n;i++)
        if(a[i]==ele)
            count++;
    if(count>n/2)
        return true;
    else
        return false;
}

void printMajority(int a[],int n)
{
    int ele;
    ele=majorityElement(a,n);
    if(isMajority(a,n,ele))
        printf("%d",ele);
    else
        printf("NO MAJORITY ELEMENT");
}
