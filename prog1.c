#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	srand(time(NULL));
	int myrand = (rand() % 11) + 0; //syntax is (rand() % max-min+1)+min
	

	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats \n");
	} 
	else if (myrand >=5 && myrand <= 9) {
		printf("FRODO LIVES \n");
	}
	else {
		printf("larn is the best rouguelike \n");
	}
	
	printf("the random number was %d\n", myrand);

}
