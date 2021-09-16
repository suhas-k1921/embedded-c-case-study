/*
 */SUHAS K MAIN FILE

#include <avr/io.h>
#include"act1.h"
#include"act2.h"
#include"act3.h"

int main(void)
{

    // Insert code

    while(1)
    {
        act1();
        act2();
        act3();
    }

    return 0;
}
