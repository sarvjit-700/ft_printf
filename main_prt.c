#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    unsigned int ui;
    void *addr;
    int len;
    int	len2;
    int	result;
    int	result2;
    int	num;
        
    ui = (unsigned int)INT_MAX +1024;
    addr = (void *)0x7ffe637541f0;

    printf("\n\n");
    result = printf("Let's try to printf a simple sentence.\n");
    len = result;
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Let's try to printf a simple sentence.\n");
    len2 = result2;
    printf("%d characters using FT_PRINTF\n\n", result2);
    
    printf("\n********num tests************\n");
    result = printf("Length using specifiers [d, i]: [%d, %i]\n", len, len);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Length using specifiers [d, i]: [%d, %i]\n", len2, len2);
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("Negative:[%d]\n", -762534);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Negative:[%d]\n", -762534);
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("Unsigned:[%u]\n", ui);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Unsigned:[%u]\n", ui);
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("Print Percent:[%%]\n");
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Print Percent:[%%]\n");
    printf("%d characters using FT_PRINTF\n\n", result2);

    printf("\n********************\n");


    printf("\n********char/string tests************\n");
    result = printf("Character using specifier c :[%c]\n", 'H');
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Character using specifier c :[%c]\n", 'H');
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("String using specifier s :[%s]\n", "My Test string");
    printf("%d characters using printf\n", result);
    result2 = ft_printf("String using specifier s :[%s]\n", "My Test string");
    printf("%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");

    printf("\n********pointer tests************\n");
    result = printf("Address if NULL:[%p]\n", NULL);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Address if NULL:[%p]\n", NULL);
    printf("%d characters using FT_PRINTF\n\n", result2);
    
    result = printf("pointer test : %p", "slim");
	printf("\n%d characters using printf\n", result);
	result2 = ft_printf("pointer test : %p", "slim");
	printf("\n%d characters using FT_PRINTF\n\n", result2);

    result = printf("Address:[%p]\n", addr);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Address:[%p]\n", addr);
    printf("%d characters using FT_PRINTF\n\n", result2);
    
    result = printf("Address of the sentence in len is :[%p]\n", &len);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Address of the sentence in len is :[%p]\n", &len);
    printf("%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");    

    printf("\n********hex tests************\n");
    num = -42;
	result = printf("%x", num);
	printf("\n%d characters using printf\n", result);
	result2 = ft_printf("%x", num);
	printf("\n%d characters using FT_PRINTF\n\n", result2);

    result = printf("Unsigned hex:[%x, %X]\n", ui, ui);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Unsigned hex:[%x, %X]\n", ui, ui);
    printf("%d characters using FT_PRINTF\n", result2);

	printf("\n********************\n");

    printf("\n********mixed test************\n");
	result = printf("Test all specifiers [cspdiuxX percent] :\n %c\n, %s\n, %p\n, %d\n, %i\n, %u\n, %x\n, %X\n, %%\n]", 'D', "StRiNg", "A", num, num, num, num, num); 
    printf("%d characters using printf\n\n", result);
		
	result2 = ft_printf("Test all specifiers [cspdiuxX percent] :\n %c\n, %s\n, %p\n, %d\n, %i\n, %u\n, %x\n, %X\n, %%\n]", 'D', "StRiNg", "A", num, num, num, num, num); 
    printf("%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");

}
