#include "map.h"
#include "character.h"
#include "item.h"
#include <stdio.h>
#include <string.h>
#include "actions.h"

void action(map* location, character mc, char* decision) {
	char dir = decision[0];

	if ((decision[1] == '\0') && (dir == 'n' || dir == 's' || dir == 'e' || dir == 'w')) {
		move(location, mc, dir);
	}
	else if (decision == "look") {
		look(location, mc);
	}
	else if (decision == "q" || decision == "quit") {
		//finish
	}
	else if (decision == "help"){
		help();
	}
}

void look(map* location, character mc) {
	int aux, counter;

	for (counter = 0; location[counter].id != mc.position; counter++);

	for (aux = 0; aux < strlen(location[counter].name); aux++) {
		printf("%c", location[counter].name[aux]);
	}
	printf("\n");

	for (aux = 0; aux < strlen(location[counter].description); aux++) {
		printf("%c", location[counter].description[aux]);
	}

	printf("\n");
}

void move(map* location, character mc, char direction, door* doors) {
	int previous = mc.position;
	bool door;

	switch (direction) {
	case 'n':
		if (location[previous].north != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 0) && doors[aux].status == 0){
					door = 1;
				}
			}
			if (door != 1){
				mc.position = location[previous].north;
			}
			else {
				printf("A door is blocking your path\n");
			}
		}
		else {
			//blocade();
		}
		break;
	case 's':
		if (location[previous].south != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 1) && doors[aux].status == 0){
					door = 1;
				}
			}
			if (door != 1){
				mc.position = location[previous].south;
			}
			else {
				printf("A door is blocking your path\n");
			}
		}
		else {
			//blocade();
		}
		break;
	case 'e':
		if (location[previous].east != 33) {
			mc.position = location[previous].east;
		}
		else {
			//blocade();
		}
		break;
	default:
		if (location[previous].west != 33) {
			mc.position = location[previous].west;
		}
		else {
			//blocade();
		}
	}
	look(location, mc);
}

void help(){
	printf("To move write n/s/e/w\n");
	printf("To look write look\n");
	printf("To quit write q or quit\n");
}