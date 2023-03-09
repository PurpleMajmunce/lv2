#include <stdio.h>
int main(void){
float real1,img1,real2,img2,zbroj1r,zbroj1i,raz1r,raz1i;
printf("Unesi realni i imaginarni dio 1. kompleksnog broja: ");
scanf("%f" " %f",&real1,&img1);
printf("Unesi realni i imaginarni dio 2. kompleksnog broja: ");
scanf("%f" " %f",&real2,&img2);
zbroj1r=real1+real2;
zbroj1i=img1+img2;
raz1r=real1-real2;
raz1i=img1-img2;
printf("REZULTATI:\n");
printf("%.3f, %.3f*i\n",zbroj1r,zbroj1i);
printf("%.3f, %.3f*i",raz1r,raz1i);
return 0;
}
