#include <stdio.h>
int main(){
    int c,is_print_word=0;
    while((c=getchar())!=EOF){
        if((is_print_word==1 && c<='z' && c>='a')|| (is_print_word==0 && c<='Z'&& c>='A')){
            putchar(c);
            is_print_word=1;
        }else if(is_print_word==1){
            putchar('\n');
            is_print_word=0;
        }
    }
}

