
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char name[64];

	printf("Please enter your name: ");

	// TODO: Check result of fgets
	fgets(name, sizeof(name), stdin);

	size_t len = strlen(name);
	name[len - 1] = '\0';

	printf("%s is smelly\n", name);

	// -k, 0, k
	// -k name < "Stephen"
	//  0 name == "Stephen"
	//  k name > "Stephen"
	if(0 == strncmp(name, "Stephen", sizeof(name))) {
		puts("Learn to phucking spell");
	}

	// TODO: Check return value
	strncat(name, "head", sizeof(name) - len);

	printf("%s, %s, is a stupid %s\n", name, name, name);

	// TODO: Check return value
	snprintf(name, sizeof(name), "PFC %s", name);

	printf("Ha, ha, %s is so dumb\n", name);
}

