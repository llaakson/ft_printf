#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
        char *str = "kuhmoinen";
        char *str1 = "kuhmoinen1";
        int a = 4222;
        char c = 'B';
        int hex = -2147483648;
        int hex1 = -234566;
        unsigned int unsignedint = 4294967295;
        puts("--------PRINTF--------");
        int aa = printf("R %K Unsigned int: %u hex1: %x hex: %X int &a: %p %% char c: %c str: %s int a: %d str1: %s\n", unsignedint, hex1, hex, &a, c, str, a, str1);
        printf("Return value: %d\n", aa);
        puts("--------FT_PRINTF--------");
        int bb = ft_printf("F %K Unsigned int: %u hex1: %x hex: %X int &a: %p %% char c: %c str: %s int a: %d str1: %s\n", unsignedint, hex1, hex, &a, c, str, a, str1);
        printf("Return value: %d\n", bb);
		puts("-----Random tests-----");
		ft_printf("%c", '0');
		puts("");
		ft_printf(" %c", '0' - 256);
		puts("");
		printf("%c", '0');
		puts("");
		printf(" %c", '0' - 256);
		puts("");
		printf(" NULL %s NULL ", NULL);
		puts("");
		ft_printf(" NULL %s NULL ", NULL);
		puts("");
		int aaa = printf(" %d ", -99);
		printf("%d\n", aaa);
		puts("");
		int bbb = ft_printf(" %d ", -99);
		printf("%d\n", bbb);
		ft_printf(" %%%% ");
		puts("");
		int xx = printf("\001\002\007\v\010\f\r\n");
		printf("P: %d\n", xx);
		int cc = ft_printf("\001\002\007\v\010\f\r\n");
		printf("F: %d\n", cc);
		void* voidptr;
		ft_printf("%p : %p \n", NULL, voidptr);
		printf("%p : %p \n", NULL, voidptr);

}

