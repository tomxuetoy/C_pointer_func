#include <stdio.h>

main()
{
        int f();
        int i, a, b;
        int (*p)();    /*  定义函数指针 */

        scanf("%d", &a);
        p=f;            /*  给函数指针p赋值，使它指向函数f */

        for(i=1;i<9;i++)
        {
                scanf("%d", &b);
                a=(*p)(a, b);    /*  通过指针p调用函数f */
        }

        printf("The Max Number is:%d", a);
}


f(int x, int y)
{
    int z;
    z=(x>=y)?x:y;
    return(z);
}
