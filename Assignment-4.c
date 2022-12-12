#include "stdio.h"

int main(){

    int i = 0;
    int j = 0;
    int k = 0;
    int b = 0;
    int flen = 7;
    int slen = 17;
    int countf=0;
    int counts=0;

    char firstword[7]="winhtut";
    char secoundword[17]="NationalCyberCity";
    char txt[5000];

    FILE *fptr;
    fptr = fopen("Assignment-4.txt", "r");

    for(i=0;i<5000;i++){
        fscanf(fptr," %c",&txt[i]);
    }
    for(j=0;j<5000;j++){
        if(txt[j]==firstword[k]){
            k++;
            if(k==flen){
                countf++;
                k = 0;
            }
        }else{
            k=0;
        }
    }
    for(int a=0;a<5000;a++){
        if(txt[a]== secoundword[b]){
            b++;
            if(b==slen){
                counts++;
                b = 0;
            }
        }else{
            b = 0;
        }
    }
    printf("Numbers of winhtut: %d\nNumber of NationalCyberCity: %d", countf, counts);

}