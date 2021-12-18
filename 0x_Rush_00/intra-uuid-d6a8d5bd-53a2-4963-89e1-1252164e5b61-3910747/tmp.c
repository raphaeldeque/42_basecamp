void ft_putchar(char c);

void build_line(int x, char first_char, char middle_char, char last_char) 
{
    if(x>0)
    {
        ft_putchar(first_char);
        int i = 1;
        while( i < x-1 )
        {
            ft_putchar(middle_char);
            i++;
        } 
        if ( x > 1)
        {
            ft_putchar(last_char);
        }
    }
}

void rush(int x, int y)
{
    if(x > 0 && y > 0)
    {
        build_line( x, 'A', 'B', 'C');
        ft_putchar('\n');
        int j = 1;
        while ( j < y-1 )
        {
            build_line( x, 'B', ' ', 'B');
            ft_putchar('\n');
            j++;
        }
        if ( y > 1 )
        {
            build_line( x, 'C', 'B', 'A');
            ft_putchar('\n');
        }
    }
}
