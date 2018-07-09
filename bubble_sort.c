#include<stdio.h>

//bubble sort
int main()
{
  int input[100],n;

  printf("enter number of elements\n");
  scanf("%d",&n);

  printf("enter elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&input[i]);

  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
      int temp=input[i];
      if(input[i]>input[j])
      {
        input[i]=input[j];
        input[j]=temp;
      }
    }
    printf("sorted array is\n");
    for(int i=0;i<n;i++)
      printf("%d\t",input[i]);
}
