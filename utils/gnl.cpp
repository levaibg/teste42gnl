extern "C"
{
#define new tripouille
#include "get_next_line.h"
#undef new
}

#include "gnl.hpp"
#include "color.hpp"
#include "check.hpp"

#include <string.h>

extern int iTest;

using namespace std;

void gnl(int fd, char const * expectedReturn)
{
	char *  gnlReturn = get_next_line(fd);
	if (expectedReturn == NULL) {
				std::cout << "Expected is NULL!!!" << std::endl;
				std::cout << "But you return: " << gnlReturn << std::endl;
		check(gnlReturn == NULL);
	}
	else {
		std::cout << "{" << gnlReturn << "}" << "{"<< expectedReturn << "}" << std::endl;
		check(!strcmp(gnlReturn, expectedReturn));
	}
	free(gnlReturn);
	iTest++;
}