#include "stdio.h"                                                                          |     }
#include "stdlib.h"                                                                         |     return (str);
#include "ft_strupcase.c"                                                                   | }
                                                                                            |~
int main()                                                                                  |~
{                                                                                           |~
        char ad[] = "met dASFD  dfasdfSDAFLS WE fsdaD FSA 15093428750988()*&%&^%+)#@*_@!)e l|~
a merde";                                                                                   |~
                                                                                            |~
        printf("%s \n", ad);                                                                |~
        ft_strupcase(ad);                                                                   |~
        printf("%s \n", ad);                                                               |~
}
