# 42_ft_printf
Create a function that reproduces the behavior of the stdio library function "printf".
1) read istruction from gitbook 
2) pic the fts you would need from libft
3) putnbr_base needed for the base conversion requested in the subject, and from the functionality of the real printf
4) write the Makefile and the printf.h to create the libftprintf.a
5) try and test with the real one. 

# plus
-> one usufull thing is to test the real printf wuth the following formatting conversion to see how it behave.("%"  +  "cspdiuxX%")
-> (it) va_list è una struttura e quindi un tipo di dato; il suo contenuto è variabile. definita in stdarg.h. va_list INIZIALIZZA.
-> in stdarg.h ci sono delle macro (== funzioni) che permettono di gestire. 
    - va_start passa ad una struttura va_list gli argomenti viariabili.va_start(nome_valist, argomento_defnitoinft) 
    - va_arg questa è la principale, con cui si riesce a passare un argomento CONSECUTIVO della lista. int i = va_arg(nome_valist, int).
    - va_end: libera memoria allocata.

##testing personale 
Per testare la libreria libftprintf.a ed il funzionamento della ft_printf a confronto con printf della stdio.h,
un modo efficace è di utilizzare un file con il main all'interno della repository, il quale verrà compilato 
con un comando a parte nel Makefile.

l' header (ft_printf.h) non verrà cambiato, poichè destinato a libftprintf.a 
lo includiamo in main.c per avere le funzioni di libftprintf.a
------------------------------------------------------------------------------------------------------------

nel makefile basta scrivere questo:

programma : $(NAME)
	gcc mytest.c -o $@ $(OBJS) -L. -lftprintf
------------------------------------------------------------------------------------------------------------

il file main.c conterrà il seguente codice:

//per cambiare basta cambiare lo specificatore ed il parametro passato 
//nelle prime due chiamate di funzione

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	int j;

	j = printf("std:  Il mio nome è %s\n", Gabriele);
	i = ft_printf("mine: il mio nome è %s\n", Gabriele);

	printf("std:  %d\n", j);
	ft_printf("mine: %d\n", i);
	return (0);
}
