#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "character.h"
#include "item.h"

void look(map* location, character mc);
void action(map* location, character mc, char* decision);
void move(map* location, character mc, char direction);

// TO DO
// Data of creation map																						
// Change according to character position																			[done]	
// Finish movement functions																						[doesn't save new position]

// TO START
// Introduce objects
// Introduce NPCs (need to create CLASS)
// Actions
// Blocades

int main(void) {
	int lose = 0;
	char decision[20];
	map* location = new map[20];
	character mc;
	char dir;
	mc.position = 0;
	mc.death = 0;

	for (int n = 0; n < 20; n++){
		location[n].createmap(n);
	}

	look(location, mc);

	do {
		scanf_s("%s", decision, 20);

		action(location, mc, decision);
	} while (mc.death != 1);

	delete[] location;
	system("pause");
	return 0;
}