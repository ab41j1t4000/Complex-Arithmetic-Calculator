#include<stdio.h>
struct complex{
float r[2],i[2];
};
void complexprint(float a,float b);
int main()
{
struct complex comp;
float radd[2],rsub[2],rmult[2];
printf("Enter for first complex number\n");
printf("Enter the real part\n");
scanf("  %f",&comp.r[0]);
printf("Enter for first complex number\n");
printf("Enter the imaginary part\n");
scanf("  %f",&comp.i[0]);
printf("Enter for second complex number\n");
printf("Enter the real part\n");
scanf("  %f",&comp.r[1]);
printf("Enter for second complex number\n");
printf("Enter the imaginary part\n");
scanf("  %f",&comp.i[1]);
complexprint(comp.r[0],comp.i[0]);
complexprint(comp.r[1],comp.i[1]);
radd[0]=comp.r[0]+comp.r[1];
radd[1]=comp.i[0]+comp.i[1];
printf("Addition\n");
complexprint(radd[0],radd[1]);
rsub[0]=comp.r[0]-comp.r[1];
rsub[1]=comp.i[0]-comp.i[1];
printf("Subtraction\n");
complexprint(rsub[0],rsub[1]);
rmult[0]=comp.r[0]*comp.r[1]-comp.i[0]*comp.i[1];
rmult[1]=comp.r[0]*comp.i[1]+comp.i[0]*comp.r[1];
printf("Multiplication\n");
complexprint(rmult[0],rmult[1]);
return 0;
}
void complexprint(float a,float b){
if(b<0) printf("%.2f%.2f\n",a,b);
else printf("%.2f+%.2f\n",a,b);
}
