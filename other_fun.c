
/**
 * put_p - Prints address
 * @pf: Argument
 * @params: struct of parameters
 *
 * Return: printed bytes
 */

int put_p(va_list pf, params_t *params)
{
	unsigned long int n = va_arg(pf, *unsigned long int);
	char *str;

	if (!n)
		return (puts("(nil)"));

	else
	{
		str = convert(n, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
		*--str = 'x';
		*--str = '0';
	}
	return (print_num(str, params);
}

/**
 * isitadigit - Checks if its a digit
 * @c: The int to be checked
 * Return: 0 when false, 1 when true
 */

int isitadigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * strlen - Calculates length of a string
 * @s: The string
 * Return: The length
 */

int strlen(char *s)
{
	int i = 0;
	
	do
	{
		i++;
		s++;
	} while (*s != '\0');
	
	return (i);
}

/**
 * print_num - Prints numbers with options
 * @str: The number string
 * @params: Struct of parameters
 * Return: Chars printed
 */

int print_num(char *str, params_t *params)
{
	unsigned int i = strlen(str);
	int neg = (!params->unsign && *str == '-');

	if (!params->perci && *str == '0' && !str[1])
		str = "";
	if (neg)
	{
		str++;
		i--;
	}
	if (params->perci != UNIT_MAX)
	{
		while (i++ < params->perci)
			*--str = '0';
	}
	if (neg)
		*--str = '-';
	if (!params->minus_f)
		return (print_number_right_shift(str, params));
	else
		return (print_number_left_shift(str, params));
}

/**
 * p_n_r_sh - Print number right shift
 * @str: String
 * @params: Struct params
 * Return: int
 */

int p_n_r_sh(char *str, params_t *params)
{
	unsigned int n = 0, neg, neg2, i = strlen(str);
	char pad_char = ' ';

	if (params->zero_f && !params->minus_f)
		pad_char = '0';
	neg = neg2 = (!params->unsign && *str == '-');
	if (neg && i < params->width && pad_char == '0' && !params->minus_f)
		str++;
	else
		neg = 0;
	if ((params->plus_f && !neg2) || (!params->plus_f && params->space_f && !neg2))
			i++;
	if (neg && pad_char == '0')
		n += putbuf('-');
	if (params->plus_f && !neg2 && pad_char == '0' &&!params->unsign)
		n += putbuf('+');
	else if (!params->plus_f && !neg2 && params->space_f && !params->unsing && params->zero_f)
		n += putbuf(' ');
	while (i++ < params->width)
		n += putbuf(pad_char);
	if (neg && pad_char == ' ')
		n += putbuf('-');
	if (params->plus_f && !neg2 && pad_char == ' ' && !params->unsign)
		n += putbuf('+');
	else if (!params->plus_f && params->space_f && !neg2 && !params->unsign && !params->zero_f)
		n += putbuf(' ');
	n += puts(str);
	return (n);
}

/**
 * p_n_l_sh - Print with options
 * @str: The base
 * @params: Struct of params
 * Return: Chars printed
 */

int p_n_l_sh(char *str, params_t *params)
{
	unsigned int n = 0, neg, neg2, i = strlen(str);
	char pad_char = ' ';

	if (params->zero_f && !params->minus_f)
		pad_char = '0';
	neg = neg2 = (!params->unsign && *str == '-');
	if (neg && i < params->width && pad_char == '0' && !params->minus_f)
		str++;
	else
		neg = 0;
	if (params->plus_f && !neg2 && !params->unsign)
		n += putbuf('+'), i++;
	else if (params->space_f && !neg2 && !params->unsign)
		n += putbuf(' '), i++;
	n += puts(str);
	while (i++ < params->width)
		n += putbuf(pad_char);
	return (n);
}

/**
 * put_b - print binary
 * @pf: list
 * @params: struct
 * Return: bytes printed
 */

int put_b(va_list pf, params_t *params)
{
	unsigned int n = va_arg(pf, unsigned int);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hash_f && n)
		*--str = '0';
	params->unsign = 1;
	return (c += print_num(str, params));
}

/**
 *
 *
 */

int put_X(va_list pf, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_mod)
		l = (unsigned long)va_arg(pf, unsigned long);
	else if (params->h_mod)
		l = (unsigned short int)va_arg(pf, unsigned int);
	else
		l = (unsigned int)va_arg(pf, unsigned int);

	str = convert(l, 16, CONVERT_UNSIGNED, params);
	if (params->hash_f && l)
	{
		*--str = 'X';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_num(str, params));
}

/**
 *
 *
 */

int put_x(va_list pf, params_t *params)
{
	unsigned long l;
        int c = 0;
        char *str;

        if (params->l_mod)
                l = (unsigned long)va_arg(pf, unsigned long);
        else if (params->h_mod)
                l = (unsigned short int)va_arg(pf, unsigned int);
        else
                l = (unsigned int)va_arg(pf, unsigned int);

        str = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
        if (params->hash_f && l)
        {
                *--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_num(str, params));
}

/**
 *
 *
 *
 */

int put_o(va_list pf, params_t *params)
{
	unsigned long l;
        int c = 0;
        char *str;

        if (params->l_mod)
                l = (unsigned long)va_arg(pf, unsigned long);
        else if (params->h_mod)
                l = (unsigned short int)va_arg(pf, unsigned int);
        else
                l = (unsigned int)va_arg(pf, unsigned int);

        str = convert(l, 8, CONVERT_UNSIGNED, params);
        if (params->hash_f && l)
                *--str = '0';
        params->unsign = 1;
        return (c += print_num(str, params));
}

/**
 *
 *
 *
 */

int put_percent(va_list pf, params_t *params)
{
	(void)pf;
	(void)params;
	return (putbuf('%'));
}

/**
 *
 *
 *
 *
 */

int put_int(va_list pf, params_t *params)
{
	long l;

	if (params->l_mod)
		l = va_arg(pf, long);
	else if (params->h_mod)
		l = (short int)va_arg(pf, int);
	else
		l = (int)va_arg(pf, int);
	return (print_num(convert(l, 10, 0, params), params));
}

/**
 *
 *
 *
 */

int put_c(va_list pf, params_t *params)
{
	char pad_char = ' ';
	unsigned int pad = 1, sum = 0, ch = va_arg(pf, int);

	if (params->minus_f)
		sum += putbuf(ch);
	while (pad++ < params->width)
		sum += putbuf(pad_char);
	if(!params->minus_f)
		sum += putbuf(ch);
	return (sum);
}

/**
 *
 *
 *
 *
 */

int put_s(va_list pf, params_t *params)
{
	char *str = va_arg(pf, char *), pad_char = ' ';
	unsigned int pad = 0, sum = 0, i = 0, j;

	(void)params;
	switch ((int)(!str))
		case 1;
		str = NULL_STRING;

	j = pad = strlen(str);
	if (params->perci < pad)
		j = pad = params->perci;

	if (params->minus_f)
	{
		if (params->perci != UNIT_MAX)
			for (i = 0; i < pad; i++)
				sum += putbuf(*str);
		else
			sum += puts(str);
	}
	return (sum);
}

/**
 *
 *
 *
 */

int put_S(va_list pf, params_t *params)
{
	char *str = va_arg(pf, char *);
	char *hex;
	int sum = 0;

	if ((int)(!str))
		return (puts(NULL_STRING));
	for (; *str; str+)
	{
		if ((*str > 0 && str < 32) || str >= 127)
		{
			sum += putbuf('\\');
			sum += putbuf('x');
			hex = convert(*str, 16, 0, params);
			if (!hex[1])
				sum += putbuf('0');
			sum += puts(hex);
		}
		else
		{
			sum += putbuf(*str);
		}
	}
	return (sum);
}






