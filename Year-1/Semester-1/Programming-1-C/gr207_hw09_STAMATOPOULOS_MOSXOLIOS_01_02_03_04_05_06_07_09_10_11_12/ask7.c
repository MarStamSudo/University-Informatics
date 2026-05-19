    #include <stdio.h>
    float mpla(float a, float b)
    {
        if ( a>b )
        {
            printf("O a einai megalyteros apo ton b");
        }
        else if ( a<b )
        {
            printf("O b einai megalyteros apo ton a");
        }
        else
            printf("Einai isa metajy tous");
    }
    int main(void)
    {
        float x, y;
        scanf("%f%f", &x, &y);
        mpla(x,y);






        return 0;
    }