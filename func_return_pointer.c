#include <stdio.h>

main()
{
    char *ch(char *, char *);
    char str1[]="I am glad to meet you!";
    char str2[]="Welcom to study C!    ";  //�����str1һ�������߸����������*** stack smashing detected ***
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
