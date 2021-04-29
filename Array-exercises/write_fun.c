#include<unistd.h>
int	ft_putchar(char c)
{
	
	
	write(1,  &c, 1);
	return 0;
}
int	ft_nputchar(char c,int n)
{
	int i=1;
	while(i<=n)
	{
		ft_putchar(c);
		i++;
	}
	return 0;
}
int	main()
{
	ft_nputchar('#',112);
	
	return 0;
}
