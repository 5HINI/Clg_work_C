#include <stdio.h>
int main() {
	int n;
	int ar[100];
	printf("Enter number of characters --> ");
	scanf("%d", &n);
	printf("Enter your Binary code --> ");
	for(int x=0; x<n; x++) {
		scanf("%d", &ar[x]);
	}
	printf("Ascii text is --> ");
	for(int y=0; y<n; y++) {
		int a, m=0, s=0, l=0, p=1;
		a=ar[y];
		while(a!=0) {
			m=a%10;
			//printf("%d", m);
			for(int i=0; i<l ; i++) {
				p=p*2;
				//printf("%d", p);
			}
			s=s+m*p;
			//printf("%d", s);
			l++;
			p=1;
			a=a/10;
		}
		printf("%c", s);
	}
}
		
