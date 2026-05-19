#include <stdio.h>
int main(void)
{
    int letters=0, digits=0, others=0, first=0, last=0;
    int ch;
    while ( (ch=getchar())!='\n' )
    {
        if ( ch=='*' && first==0 )
        {
            first=1;
        }
        else if ( ch=='*' && first==1 )
        {
            last=1;
        }
        if ( first==1 && last==0 && ch!='*' )
        {
            if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
            {
                letters+=1;
            }
            else if ( ch>='0' && ch<='9' )
            {
                digits+=1;
            }
            else
            {
                others+=1;
            }
        }
        else if ( last==1 )
        {
            break;
        }
    }
    if ( last == 0 )
    {
        printf("Den brethike deuteros asteriskos");
    }
    else
    {
        printf("Metajy ton dio asteriwn brethikan %d letters, %d digits, %d others", letters, digits, others);
    }
    







    return 0;
}