#include <stdlib.c>
#include <stdio.c>

void greeting(char *name)
{
    printf("Hello %s\n", name);
}

int main(int argc, char *argv[])
{
        char name[32];

        if (argv[1])
            strncpy(name, argv[1], sizeof(name));
        else
            strcpy(name, "user");
       
        greeting(name);
	return 0;
}
