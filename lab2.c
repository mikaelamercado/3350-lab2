#include <stdio.h>
#include <string.h>
#define KBLU    "\x1B[34m"

int k;
double sin(),cos();

void printdonut() // relocated function to print donut and modified to color blue.
{
    printf("%s\x1b[H",KBLU);
}

int main(){
    float A=0,spinspeed=0,i,j,z[1760];   
    char b[1760];
    printf("\x1b[2J");
    for(;;){
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0;6.28>j;j+=0.07)   
            for(i=0;6.28>i;i+=0.02){
                float c=sin(i),d=cos(j),e=sin(A),f=sin(j),g=cos(A),width=d+2,size=1/(c*width*e+f*g+5),l=cos(i),m=cos(spinspeed),n=sin(spinspeed),t=c*width*g-f*e;  
                // width used to be h = d+2; 2 can be changed to any number to change the thickness of the donut. size used to be D=1/(c*h*e+f*g+5) is used to zoom in or make the donut appear larger in size. 1 can be changed to zoom in. 
                int x=40+30*size*(l*width*m-t*n),y=12+15*size*(l*width*n+t*m),o=x+80*y,N=8*((f*e-c*d*g)*m-c*d*e-f*g-l*d*n); 
                // x shifts the coordinates of the donut in the x axis, y shifts the coordinates of the donut in the y axis,  
                if(22>y&&y>0&&x>0&&80>x&&size>z[o]){
                    z[o]=size;;;b[o]=".,-~:;=!*#$@"[N>0?N:0];
                }
            }/*#****!!-*/
    printdonut();// used to be printf("\x1b[H"), then relocated above main() as it's own function in printdonut(), then modified to color blue;
    for(k=0;1761>k;k++)
        putchar(k%80?b[k]:10);
    A+=0.04;
    spinspeed+=0.02; // used to be B+=0.2; spinspeed makes the donut rotate faster. 0.02 can be changed to increase or decrease in speed. 
    }
}/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/

