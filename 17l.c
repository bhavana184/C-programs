/*Given the x and y coordinates of the center of circle and radius of circle, 
write a c program that takes the x and y coordinates of a point as input and outputs whether point lies inside, outside or on the circle.*/
#include<stdio.h>
#include<math.h>
void main()
{
	int xp,yp,xc,yc,r,d;
	printf("x-coordinate of circle : ");
	scanf("%d",&xc);
	printf("\ny-coordinate of circle : ");
	scanf("%d",&yc);
	printf("\nradius of circle : ");
	scanf("%d",&r);
	printf("\nx-coordinate of point : ");
	scanf("%d",&xp);
	printf("\ny-coordinate of point : ");
	scanf("%d",&yp);
	d=sqrt(((xp-xc)*(xp-xc))+((yp-yc)*(yp-yc)));
	printf("distance between (%d,%d) and (%d,%d) is %d",xc,yc,xp,yp,d);
	if(d==r)printf("\n(%d,%d) lies on the circle",xp,yp);
	else if(d<r)printf("\n(%d,%d) lies inside the circle",xp,yp);
	else if(d>r)printf("\n(%d,%d) lies outside the circle",xp,yp);
	
	
}
