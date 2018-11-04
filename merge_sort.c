#include<stdio.h>

void merge_sort(int input[])
{
  int k;

  //k=sizeof(input);

  for (int i=0;i<4;i++)
    printf("%d",input[i]);
 k= sizeof(input)/sizeof(input[0]);
printf("\t%d\n",k);

}

int main()
{
  int input[100],n;

  printf("enter number of elements\n");
  scanf("%d",&n);

  printf("enter elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&input[i]);

  merge_sort(input);

  return 0;
}
