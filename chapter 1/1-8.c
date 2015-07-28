#include <stdio.h>
int main(){
    int c,line=0,tc=0,sc=0;
    while((c=getchar())!=EOF){
        if(c=='\n'){
            line++;
        }else if(c=='\t'){
            tc++;
        }else if(c==' '){
            sc++;
        }
    }
    printf("line %d; table %d; space %d\n",line,tc,sc);
    return 0;
}
