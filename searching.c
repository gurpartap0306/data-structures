#include<stdio.h>

//linear search
void linear_search(int input[],int a,int n)
{
  int k=0;
  for(int i=0;i<n;i++)
    if(input[i]==a)
    {
      printf("number is present\n");
      k=1;
    }
  if(k!=1)
  printf("number is not present\n");
}

//binary search
void binary_search(int input[],int a,int n)
{
  int k=0,first,last,mid;

  //sorting
  for(int i=0;i<n;i++)
    for (int j=i+1;j<n;j++)
      if(input[i]>input[j])
      {
        int temp=input[j];
        input[j]=input[i];
        input[i]=temp;
      }

  first=0;
  last=n-1;

  while(first<=last)
  {
    mid=(first+last)/2;
    if(a<input[mid])
      last=mid-1;
    else if(a==input[mid])
    {
      printf("number is present\n");
      k=1;
      break;
    }
    else
      first=mid+1;
  }
  if(k!=1)
  printf("number is not present\n");
 }

int main()
{
  int input[100],n,a,opt;

  printf("enter number of elements\n");
  scanf("%d",&n);

  printf("enter elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&input[i]);

  printf("enter you want to search\n");
  scanf("%d",&a);

  printf("select your option\n");
  printf("1: linear search \n2:binary search\n");
  scanf("%d",&opt);

  switch(opt)
  {
    case 1:{
              linear_search(input,a,n);
              break;
            }
    case 2:{
              binary_search(input,a,n);
              break;
            }
  }
  return 0;
}
