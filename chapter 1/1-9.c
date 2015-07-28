#include    <stdio.h>
main(){
    int c,last_space=-2,char_num=0;
    while((c=getchar())!=EOF){
        if(c !=' ' &&  (last_space==(char_num-1))){
            printf("%c",' ');
        }else if(c ==' '){
            last_space = char_num;
        }else if(c != ' '){
            putchar(c);
        }
        char_num++;
    }

}
