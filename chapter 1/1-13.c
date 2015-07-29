#include <stdio.h>
int main(){
    int c,i=0,j=0,is_word=0,max_length=0,nword=0;
    int d[10][20],word_length[10];
    for(i=0;i<10;i++){
        word_length[i]=0;
    }
    i=0;
    while((c=getchar())!=EOF){
        if(c<='z' && c>='a'){
            if(word_length[i]==0){
                nword++;
            }
            if(j>=20){
                printf("not support such length word \n");
                return 1;
            }
            d[i][j++]=c;
            word_length[i]++;
            is_word=1;
        }else if(i<9 && is_word){
            if(max_length<word_length[i]){
                max_length=word_length[i];
            }
            i++;
            j=0;
            is_word=0;
        }
    }
    for(;max_length>0;max_length--){
        for(i=0;i<nword;i++){
            printf("          ");
            if(word_length[i]>=max_length){
                printf("#");
            }else{
                putchar(' ');
            }
            printf("          ");
        }
        putchar('\n');
    }
    for(i=0;i<nword;i++){
        printf("%21s",d[i]);
    }
    return 0;
}
