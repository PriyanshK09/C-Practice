// Binary Search

#include<stdio.h>
int bin(int [],int,int);
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n],i,v;
printf("Enter a sorted array :\n");
for(i=0;i<n;i++)scanf("%d", &a[i]);
printf("Enter the element : ");
scanf("%d",&v);
if(bin(a,n,v)==-1)printf("Not in the entered array");
else printf("%d is found at index %d",v,bin(a,n,v));
return 0;
}
int bin(int arry[],int size,int value){
int low=0;
while(low<=size){
int mid = (low+size)/2;
if(arry[mid] == value)return mid;
else if(arry[mid] > value) low = mid+1;
else if(arry[mid] < value) size = mid-1;
}
return -1;
}