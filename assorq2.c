#include<stdio.h>
main()
{

	int i,j;
	
	int a[3][3];
	int large;

	printf("enter the array elements:");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			large=a[i][j];		
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			large>a[i][j];
		}
	}
	printf("the largest element is:%d",large);

}

