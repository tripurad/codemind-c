#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int inputArray[size];
    int oddArray[size],evenArray[size];
    int oddCount=0,evenCount=0;
    for(int i=0;i<size;++i)
    {
        scanf("%d",&inputArray[i]);
        if(inputArray[i]%2==0)
        {
            evenArray[evenCount++]=inputArray[i];
        }
        else
        {
            oddArray[oddCount++]=inputArray[i];
        }
    }
    for(int i=0;i<oddCount;++i)
    {
        printf("%d ",oddArray[i]);
    }
    for(int i=0;i<evenCount;++i)
    {
        printf("%d ",evenArray[i]);
    }
    return 0;
}