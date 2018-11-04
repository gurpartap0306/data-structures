#include<stdio.h>

//selection sort
int main()
{
  int input[100],n;

  printf("enter number of elements\n");
  scanf("%d",&n);

  printf("enter elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&input[i]);

    for(int i=0;i<n;i++)
    {
      int pos=i;
      for(int j=i+1;j<n;j++)
        if(input[i]>input[j])
          pos=j;

      if(pos!=i)
      {
        int temp=input[i];
        input[i]=input[pos];
        input[pos]=temp;
      }
    }
    printf("sorted array is\n");
    for(int i=0;i<n;i++)
      printf("%d\t",input[i]);

    return 0;
}
