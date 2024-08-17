#include <stdio.h>
struct poly{
	int coeff;
	int ex;
	};


int main()
{
	struct poly p1[3];
	p1[0].coeff=5; p1[0].ex=2;
	p1[1].coeff=2; p1[1].ex=1;
	p1[2].coeff=4; p1[2].ex=0;
	for(int i=0;i<3;i++)
		printf("%dx^%d+",p1[i].coeff,p1[i].ex);
		printf("\n");
	
	struct poly p2[3];
	p2[0].coeff=2; p2[0].ex=2;
	p2[1].coeff=5; p2[1].ex=1;
	p2[2].coeff=1; p2[2].ex=0;
	for(int i=0;i<3;i++)
		printf("%dx^%d+",p2[i].coeff,p2[i].ex);
		printf("\n");
	
	struct poly ps[3];
	ps[0].coeff=p1[0].coeff + p2[0].coeff ; ps[0].ex=2;
	ps[1].coeff=p1[1].coeff + p2[1].coeff ; ps[1].ex=1;
	ps[2].coeff=p1[2].coeff + p2[2].coeff ; ps[2].ex=0;
	for(int i=0;i<3;i++)
		printf("%dx^%d+",ps[i].coeff,ps[i].ex);
}
