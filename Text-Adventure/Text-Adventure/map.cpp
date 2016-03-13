#include "map.h"
#include <string.h>

void map::createmap(int n) {
	switch (n){
	case 0:

		id = 0;
		strcpy(name, "Clearing");
		strcpy(description, "You are in a clearing, you see smoke rising from the north\nand hear a river in the west.");
		north = 1;
		south = 2;
		east = 3;
		west = 4;

		break;
	case 1:

		id = 1;
		strcpy(name, "North of the clearing");
		strcpy(description, "You see smoke rising from the north, and see a river.");
		north = 5;
		south = 0;
		east = 3;
		west = 4;

		break;
	case 2:

		id = 2;
		strcpy(name, "South of the clearing");
		strcpy(description, "You see some leaves in the ground put in a well organized fashion.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 3:

		id = 3;
		strcpy(name, "East of the clearing");
		strcpy(description, "You see a road that heads east.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 4:

		id = 4;
		strcpy(name, "River");
		strcpy(description, "You see a great river flowing from north to south.\nIt seems there is a hut on the other side.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 5:

		id = 5;
		strcpy(name, "Destroyed village");
		strcpy(description, "There is a destroyed village in front of you.\n You see small footprints leading west.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 6:

		id = 6;
		strcpy(name, "Goblin nest");
		strcpy(description, "You enter a nest where you find some goblins feasting.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 7:

		id = 7;
		strcpy(name, "Hut");
		strcpy(description, "There is a hut made of mud and straw, the air around here smells magical.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		items[0] = 100;

		break;
	case 8:

		id = 8;
		strcpy(name, "Hole");
		strcpy(description, "It seems that inside that hole was a maze.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 9:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 10:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 11:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 12:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 13:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 14:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 15:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 16:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 17:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 18:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 19:

		/*
		id = ;
		strcpy(name, "");
		strcpy(description, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	}

	/*
	id = ;
	strcpy(name, "");
	strcpy(description, "");
	north = ;
	south = ;
	east = ;
	west = ;
	*/
}