#include<stdio.h>
main()
{

	int n;
	printf("enter the array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	printf("enter the array element:\n");
	
	for(i=0;i<=n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}


	printf("negative elements from an array is:");
  for(i=0;i<=n;i++)
  if(a[i]<0)
  {
      printf("%d",a[i]);
  }
	
}
