#include <stdio.h>
#include <stdlib.h>

#include "rabbitmq_handler.h"
#include "mongodb_handler.h"

#define BOOLEAN_TRUE 1
#define BOOLEAN_FALSE 0
#define DEFAULT_RABBITMQ_PORT 5672
#define DEFAULT_MONGODB_PORT 27017


void assert(const char* errormsg, int returncode);

int main(void) {


	printf("Initializing server...");
	
	assert("Unable to connect to RabbitMQ Server", start_rabbitserver("localhost", DEFAULT_RABBITMQ_PORT));
	assert("Unable to connect to Mongo Database", start_mongodb("localhost", DEFAULT_MONGODB_PORT));



	exit(0);
}



void assert(const char* errormsg, int returncode) {
	if (returncode == BOOLEAN_FALSE) {
		printf(errormsg);
		exit(-1);
	}
}