#include <stdio.h>

//shows all the Armstrong no. between 0 and INT_MAX

int main() {
	int a, b, c, i, r, x, n;
	for(int k=1;k<=2147483647;k++) {
	   a=k;
  	 b=a;
	   c=a;
   	i=0;
   	x=1;
   	n=0;
   	while(b!=0) {
			i++;
			b=b/10;
		}
		while(c!=0) {
			r=c%10;
			for(int j=0;j<i;j++) {
				x=x*r;
			}
			n=n+x;
			x=1;
			r=0;
			c=c/10;
		}
		if(n==a) {
			printf("%d", a);
			printf(" is a armstrong no.");
			printf("\n");
		}
	}
}
