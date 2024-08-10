#include <stdio.h>
#include <conio.h>
void main(){
int arr[] ={1,2,3,4,5,6,7,8,9,10};
int i,len,mid,key,index=-1,ub,lb;
printf("Enter key:");
scanf("%d",&key);
len=sizeof(arr)/sizeof(arr[0]);
lb=0;
ub=len;
mid;
for(i=0;i<len;i++){
    mid=(lb+ub)/2;
    if(key==arr[mid]){
     index=mid;
	}
    else if(key>arr[mid]){
       lb=mid+1;
      }
    else if(key<arr[mid]){
       ub=mid-1;
      }
}
    if(index==-1){
       printf("Not found");
    }
     else{
     printf("Element %d found at index %d and at position=%d",key,index,index+1);
}
getch();
clrscr();
}