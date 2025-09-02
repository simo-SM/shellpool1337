#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

     
    j = 1;
    while (j < argc) // 1 < 4
    {
        i = 0;
        while(argv[j][i])
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\0", 1);
        j++;
    }
    return (0);
}