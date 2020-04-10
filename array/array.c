
#include <stdio.h>

/**** Search operation is performed in O(Log n)**********/

search(int arr[],int low, int high,int value)
{
if (high<low)
{
 return -1;
}
int mid = (low+high)/2;
if(arr[mid]==value)
return mid;
if(arr[mid]>value)
return search(arr,low,mid-1,value);
return search(arr,mid+1,high,value);
}

int main()
{

    int arr[] = {5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value = 5;
    int low = 0;
    //Return the index
    int n = search(arr,low,size,value);

    printf("%d",n);
}



