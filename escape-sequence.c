/*
Eascapre sequence is a sequence of characters that starts with a backslash (\) and ends with a character that is not a backslash. The backslash is not included in the escape sequence. The following are the escape sequences supported by C language.
 Certain non printing characters as well as the backslash () and the apostrophe('), can be expressed in terms of escape sequence.
\a - Bell
\n - New line
\r - Carriage return
\b - Backspace
\f - Formfeed
\t - Horizontal tab
\" - Quotation mark
\v - Vertical tab
\' - Apostrophe
\\ - Backslash
\? - Question mark
\0 - Null
 */

#include <stdio.h>
int main(){
    printf("Shopno dekhar khola chokhe\n\tHoyna sahos aar mone\n\tkorina kichu paowar asha\n\tbertho amar parthonara\n\t\t\t-Bangladeshi Popeye\n");
return 0;
}