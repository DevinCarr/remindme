#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	/* wait time is in minutes */
	double wait_time = 1.0;
	char* link = "https://www.youtube.com/watch?v=6GggY4TEYbk";
	for (int i = 1; i < argc; i += 2) {
		if (strncmp(argv[i], "in", 2) == 0)
			wait_time = atof(argv[i+1]);
		else if (strncmp(argv[i], "with", 4) == 0)
			link = argv[i+1];
		else if (strncmp(argv[i], "help", 4) == 0) {
			printf("remindme help:\nA simple script to open a http link after a designated time limit.\n\nin <minutes>\tsets the time limit to wait in minutes(can be a float value).\nwith <ink>\tsets the link to open after the sleep.\n");
			return 0;
		}
	}

	/* Setup before the sleep */
	char buf[256];
	char* open = "open ";
        strcpy(buf,open);
        strcat(buf,link);

	printf("I will remind you in %f minutes.\n", wait_time);
	printf("Link: %s\n",buf);

	/* Sleep the desired time (note: sleep() takes seconds) */
	sleep(wait_time*60.0);
	system(buf);
	return 1;
}
