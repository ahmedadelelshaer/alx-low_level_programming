#include<stdio.h>
int main(void)
{
        char alph[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;
        for( i=0;i<52;i++)
	{
                putchar(alph[i]);
        }
        putchar('\n');
        return(0);
}
