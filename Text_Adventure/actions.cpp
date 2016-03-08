#include "map.h"
#include "character.h"
#include "item.h"
#include <stdio.h>
#include <string.h>

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

void move(map* location, character mc, char direction) {
	int previous = mc.position;

	switch (direction) {
	case 'n':
		if (location[previous].north != 33) {
			mc.position = location[previous].north;
		}
		else {
			//blocade();
		}
		break;
	case 's':
		if (location[previous].south != 33) {
			mc.position = location[previous].south;
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