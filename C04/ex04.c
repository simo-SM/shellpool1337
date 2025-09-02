#include <unistd.h> 

int ft_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


int ft_is_valid_base(char *base) {
    int i;

    i = 0;
    int len = ft_strlen(base);

    if (len < 2 || !base) 
        return 0;

    while(i < len) {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        int j = i + 1;
        while(j < len) {
            if (base[i] == base[j]) 
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base) {
    if (!ft_is_valid_base(base)) {
        return; 
    }

    long long lnbr = nbr; 
    int base_len = ft_strlen(base);

    if (lnbr < 0) {
        write(1, "-", 1);
        lnbr = -lnbr;
    }

    if (lnbr >= base_len) {
        ft_putnbr_base(lnbr / base_len, base); 
    }
    
    write(1, &base[lnbr % base_len], 1); 
}
int main()
{
    ft_putnbr_base(-42, "01");

}