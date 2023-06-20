#include<stdio.h>
main()
{
	int i,j;
	int a[3][3];
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int x;
	int sum=0;
	printf("enter row number:");
	scanf("%d",&x);
	printf("elements of row:");
   	for(j=0;j<=2;j++){
	printf("%d ",a[x][j]);
	sum+=a[x][j];	
		}
	printf("\nthe sum of a row is:%d",sum);
	
	
	int y;
	int add=0;
	printf("\n enter column number:");
	scanf("%d",&y);
	printf("elements of column:");
   	for(i=0;i<=2;i++){
	printf("%d ",a[i][y]);
	add+=a[i][y];	
		}
	printf("\nthe sum of a column is:%d",add);
	
}
	
	
	
	

	
