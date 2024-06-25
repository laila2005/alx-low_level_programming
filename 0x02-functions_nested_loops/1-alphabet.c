#include <stdio.h>

void print_alphabet(void)
{
int i;
for (i=0; i<26; i++)
{
putchar("abcdefghijklmnopqrstuvwxyz"[i]);
}
}

int main(void)
{
print_alphabet();
return (0); }
