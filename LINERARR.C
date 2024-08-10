#include <stdio.h>
void main(){
int arr[]={10,1,8,7,90,60};
int key,len,i, index=-1;
printf("Enter the key value:");
scanf("%d",&key);
len= sizeof(arr)/sizeof(arr[0]);
 for(i=0;i<len;i++)
  { if(arr[i]==key)
    { index=i;
      break;
    }
  }
   if(index==-1)
   {printf("Not Found");}
   else
   {printf("The index of the number: %d\n",index);
    printf("The position of the number: %d",index+1);
   }
getch();
}
