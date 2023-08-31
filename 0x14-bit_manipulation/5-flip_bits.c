/**
* flip_bits - A function that returns the number of bits you
* would need to flip, to get from one number to another.
* @n: number of bit flips needed m for n
* @m: number to set other bit equal
* Return: number of fliped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max_num = 0x01;

	while (max_num <= xor)
	{
		if (max_num & xor)
			bit_flips++;
		max_num <<= 1;
	}
	return (bit_flips);
}
