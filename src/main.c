/// main.c
#include "startup.h"
#include  "md407/types.h"
#include  "md407/gpio.h"

int main(void) {
	uint32_t z = 2;
	uint32_t x = 1;

	// Enable GPIOA clock
	GPIO_A->moder = 0x55555555;

	return 0;
}


