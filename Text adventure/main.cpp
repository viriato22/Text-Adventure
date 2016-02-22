#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"

void createmap(map* location);
void look(map* location, character mc);
void action(map* location, character mc, char* decision);
void move(map* location, character mc, char direction);

// Por acabar
// Datos inicio creacion mapa																						
// Se tiene que cambiar la n por la posicion del personaje															[hecho]
// Preguntar a Pillosu si vale la pena poner un ID o forma de tener en cuenta como hacer bloqueo de camino			
// Acabar funcion de movimiento																						[no se guarda la nueva posicion]

// Por empezar
// Introducir objetos
// Introducir NPCs (hace falta crear struct)
// Acciones
// Bloqueos

int main(void) {
	int lose = 0; 
	char decision[20];
	map location[20];
	character mc;
	char dir;
	mc.position = 0;
	mc.death = 0;

	createmap(location);

	look(location, mc);
	
	do {
		scanf_s("%s", decision, 20);
		
		action(location, mc, decision);
	} while (mc.death != 1);

	system("pause");
	return 0;
}

void createmap(map* location) {
	location[0].id = 0;
	location[0].name = "Clearing";
	location[0].description = "You are in a clearing, you see smoke rising from the north\nand hear a river in the west.";
	location[0].north = 1;
	location[0].south = 2;
	location[0].east = 3;
	location[0].west = 4;

	location[1].id = 1;
	location[1].name = "North of the clearing";
	location[1].description = "You see smoke rising from the north, and see a river.";
	location[1].north = 5;
	location[1].south = 0;
	location[1].east = 3;
	location[1].west = 4;

	location[2].id = 2;
	location[2].name = "South of the clearing";
	location[2].description = "You see some leaves in the ground put in a well organized fashion.";
	/*location[2].north = ;
	location[2].south = ;
	location[2].east = ;
	location[2].west = ;*/

	location[3].id = 3;
	location[3].name = "East of the clearing";
	location[3].description = "You see a road that heads east.";
	/*location[3].north = ;
	location[3].south = ;
	location[3].east = ;
	location[3].west = ;*/

	location[4].id = 4;
	location[4].name = "River";
	location[4].description = "You see a great river flowing from north to south.\nIt seems there is a hut on the other side.";
	/*location[4].north = ;
	location[4].south = ;
	location[4].east = ;
	location[4].west = ;*/

	location[5].id = 5;
	location[5].name = "Destroyed village";
	location[5].description = "There is a destroyed village in front of you.\n You see small footprints leading west.";
	/*location[5].north = ;
	location[5].south = ;
	location[5].east = ;
	location[5].west = ;*/

	location[6].id = 6;
	location[6].name = "Goblin nest";
	location[6].description = "You enter a nest where you find some goblins feasting.";

	location[7].id = 7;
	location[7].name = "Hut";
	location[7].description = "There is a hut made of mud and straw, the air around here smells magical.";

	location[8].id = 8;
	location[8].name = "Hole";
	location[8].description = "It seems that inside that hole was a maze.";

	/*
	location[].id = ;
	location[].name = "";
	location[].description = "";
	location[].north = ;
	location[].south = ;
	location[].east = ;
	location[].west = ;
	*/
}

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
	int previous=mc.position;

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