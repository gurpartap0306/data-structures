#include<stdio.h>

void linear_search(int input[],int a,int n)
{
  int k=0;
  for(int i=0;i<n;i++)
    if(input[i]==a)
    {
      printf("number is present");
      k=1;
    }
  if(k!=1)
  printf("number is not present");
}

//void binary_search(int input[])

int main()
{
  int input[100],n,a,opt;

  printf("enter number of elements\n");
  scanf("%d",&n);

  printf("enter elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&input[i]);

  printf("enter you want to search");
  scanf("%d",&a);

  printf("select your option\n");
  printf("1: linear search \n2:binary search\n");
  scanf("%d",&opt);

  switch(opt)
  {
    case 1:linear_search(input,a,n);
    //case 2:binary_search(input,a,n);
  }
  return 0;
}
