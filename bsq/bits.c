unsigned char swap8( unsigned char byte )
{
	return (byte >> 4) | (byte << 4);
}

void print_byte( unsigned char byte )
{
	if (byte != 0)
		print_byte(byte >> 1);
	ft_putchar('0' + byte & 1);
}

unsigned char reverse8( unsigned char byte )
{
	unsigned char ret = 0;
	unsigned char i = 0;

	while (i < 8)
	{
		ret |= (((byte >> (7 - i)) & 1) << i);
		i++;
	}

	return ret;
}

10010110

1 << 0 => 1
0 << 1 => 0 | 1 => 1
0 << 2 => 0 | 1 => 1
1 << 3 => 1000 | 1 => 1001
0 << 4 => 0 | 1001 => 1001
1 << 5 => 100000 | 1001 => 101001
