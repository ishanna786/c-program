
#include <stdio.h>

int main()
{
  int i, array[100];
int v;
int p;
int n;
  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

printf("Enter the value ");
scanf("%d", &v);
printf("Enter the position ");
scanf("%d", &p);

for (i = 0; i < n; i++)
{

    if(i == p)
    {

        array[i]= v;


    }

}

 for (i = 0; i < n; i++)
    printf("%d \n", array[i]);

return 0;
}
