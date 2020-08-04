#include <stdio.h>
#define pie 3.1415926
int main()
{float r,h,c,s1,s2,v1,v2;
scanf("r=%f,h=%f",&r,&h );
	c=2*pie*r;
	s1=pie*r*r;
	s2=4*pie*r*r;
	v1=(4/3)*pie*r*r*r;
       v2=s1*h;
	printf("c=%f\n",c);
		printf("s1=%f\n",s1);
		printf("s2=%f\n",s2);
		printf("v1=%f\n",v1);
		printf("v2=%f\n",v2);
		return 0;


}
