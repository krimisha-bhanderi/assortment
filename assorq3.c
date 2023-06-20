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
		printf("the even numbers are:");	
		for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		if(a[i][j]%2==0)  printf("%d ",a[i][j]);
	
	}
	
}
printf("\n");

        printf("the odd numbers are:");	
		for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		if (a[i][j]%2==1) printf("%d ",a[i][j]);
	} 
}
}
