#include <iostream>

int main()
{
	//Porovnávání čísel
	int x = 5, y = 6;
	printf("Ktere cislo je vetsi? %d nebo %d?\n", x, y);
	if (x > y) {
		printf("  Cislo %d je vetsi nez %d\n", x, y);
	}
	else {
		printf("  Cislo %d je vetsi nez %d\n", y, x);
	} printf("\n");
	int z = 4;
	printf("Ktere cislo je vetsi? %d nebo %d?\n", x, z);
	if (x > z) {
		printf("  Cislo %d je vetsi nez %d\n", x, z);
	}
	else {
		printf("  Cislo %d je vetsi nez %d\n", z, x);
	} printf("\n");
}
