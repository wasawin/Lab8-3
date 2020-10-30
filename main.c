#include <stdio.h>
#include <string.h>
int main() {
    char spass[15],kpass[15];
    int i=1;
    do{
      if(i==1){
        printf("Enter new password (max 10) :");
        gets(spass);
        while(strlen(spass)>10 && i==1){
          printf("Enter new password (max 10) :");
          gets(spass);
        }
      }
      printf("%d Enter password :",i);
      gets(kpass);
      if(strcmp(spass, kpass)==0){
      printf("Password correct !!!");
      printf("\nPlease setup new password\n");
      i=1;
      }
      else if(strcmp(spass, kpass)!=0){
      printf("Password Not correct !!!\n");
      if(i==3)
      printf("Close Program");
      i++;
      }
    }while(i<=3);
    return 0;
}