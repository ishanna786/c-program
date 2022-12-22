#include<stdio.h>
#include<string.h>
int main()
{
int arr[5] = {1,2,3,4,5};
int i;
int p=3;

for(i=0;i<5;i++){
        if (i == p)
        {
            i= i+1;
        }
         printf("%d ",arr[i]);
}

}
