#include<stdio.h>

//insertion sort
int main()
{
  int input[100],n;

  printf("enter number of elements\n");
  scanf("%d",&n);

  printf("enter elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&input[i]);

    for(int i=1;i<n;i++)
    {
      int key=input[i];
      int j=i-1;
      while(j>=0 && input[j]>key)
      {
        input[j+1]=input[j];
        j=j-1;
      }
      input[j+1]=key;
    }

    printf("sorted array is\n");
    for(int i=0;i<n;i++)
      printf("%d\t",input[i]);

    return 0;
}
