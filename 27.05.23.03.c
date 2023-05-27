//Ve hinh chu nhat

#include<stdio.h>

void main() {
	int h=0, c=0; //h:chieu cao c:chieu rong
	printf ("Nhap chieu cao va chieu rong hinh chu nhat: ");
	scanf ("%d%d", &h, &c);
	cn (h, c);
return;	
}

void cn(int, int);
void cn(int x, int y) {
	int k, l;
	for (k = 1; k<=x; k++) {
		for (l=1; l<=y; l++) {
			printf (" * ");
		}
		printf ("\n");
	}
	return;
}

