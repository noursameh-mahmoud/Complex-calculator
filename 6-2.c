#include <stdio.h>
typedef struct 
{
	float x;
	float y;
}complex;
int main()
{
	complex c[2]; float real=0.0; float img=0.0;
	for(int i=0;i<2;i++)
	{
		printf("For %d complex number\n",i+1);
		printf("Enter real and imaginary part respectively:\n");
		scanf("%f",&c[i].x); printf("\n"); scanf("%f",&c[i].y);
		real=real+c[i].x; img=img+c[i].y;
	}
	printf("Sum = %f + %f i",real,img); printf("\n");
	return 0;
} /* wna kman mdaye2ni awi bs kan  momkyn qyi5 
wb3den kol ma akhod kharwa aeg3 etnin el 3omr bygri 
sabe2 el senin ana shab laken mn gowa 3agoyz 3ndi gena7at bs mgrou7 

3la bab el cimaa tazkarti adema w ma3aya hekaya nfsy aghyrha w mana men yedenyni forsa tekhlyni askit lw mara w a3esha b tafaselha

eidy fi edeihaaa w 3naya 3leha sam3 dehktaha w hya bntfrg khelst hekaytnaaaa w donia khadtna kana  3arf arab waa 

eze mama rembo deh marimbo deb morary rembo deh moaribo deh morelely  ah heya zimbo lala leh maribma */