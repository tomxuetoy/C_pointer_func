#include <stdio.h>

main()
{
        int f();
        int i, a, b;
        int (*p)();    /*  ���庯��ָ�� */

        scanf("%d", &a);
        p=f;            /*  ������ָ��p��ֵ��ʹ��ָ����f */

        for(i=1;i<9;i++)
        {
                scanf("%d", &b);
                a=(*p)(a, b);    /*  ͨ��ָ��p���ú���f */
        }

        printf("The Max Number is:%d", a);
}


f(int x, int y)
{
    int z;
    z=(x>=y)?x:y;
    return(z);
}
