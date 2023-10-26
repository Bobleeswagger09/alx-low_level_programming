#include "main.h"


/**
 * _pow -A function that cal base expo power
 * @b: b of d index
 * @p: poWer of d index 
 * Return: result from base and power
*/

unsigned long int _pow(unsigned int b, unsigned int p)
{
        unsigned long int nUM;

        unsigned int Kount;

        nUM = 1;
        for (Kount = 1; Kount <= p; Kount++)
                nUM *= b;
        return (nUM);
}
