#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	char *pc;//1Ä­ÀÌ 1 
	int *pi;//1Ä­ÀÌ 4 
	double *pd;//1Ä­ÀÌ 8 
	
	pc=(char*)10000;
	pi=(int*)10000;
	pd=(double*)10000;
	
	printf("Áõ°¡ Àü: pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
	
	pc++;
	pi++;
	pd++;
	printf("Áõ°¡ ÈÄ: pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
	
	
	
	
	return 0;
}
