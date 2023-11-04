#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *dec2bin(unsigned short);
  char *dec2hex(unsigned short);
  for(unsigned short num=1;num<=65535;num++)
    printf("%s=%s\n",dec2bin(num),dec2hex(num));
  return 0;
}
char *dec2bin(unsigned short num){
  char *binary=(char *)malloc(17*sizeof(char));
  for(int i=0;i<16;i++)
     binary[i]='0';
  
  char *p=binary;
  p+=15;
  while(num!=0){
   *p=(num%2)+'0';
    p--;
    num/=2;
  }
 return binary;
}
//----------------------
char *dec2hex(unsigned short num){
  char *hex=(char *)malloc(5*sizeof(char));
  for(int i=0;i<4;i++)
     hex[i]='0';

  char *p=hex;
  p+=3;
  while(num!=0){
    int b=num%16;
    if(b<10)
       *p=b+'0';
    else
       *p=b-10+'A';
    p--;
    num/=16;
    }
 return hex;
}

  
