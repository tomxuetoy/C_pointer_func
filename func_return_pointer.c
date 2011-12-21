#include <stdio.h>

main()
{
    char *ch(char *, char *);
    char str1[]="I am glad to meet you!";
    char str2[]="Welcom to study C!    ";  //必须和str1一样长或者更长，否则会*** stack smashing detected ***
    printf("%s\n", ch(str1, str2));
}



char *ch(char *str1, char *str2)
{
    int i;
    char *p;
    p=str2;
    if(*str2==NULL) 
    	exit(-1);

    do
    {
        *str2=*str1;
        str1++;
        str2++;
    }while(*str1!=NULL);

    return(p);
}
