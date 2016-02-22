typedef struct {
	int id;
	char* name;
	char* description;
	int north, south, east, west;
	int items[10];
	char* obstacle;
}map;

typedef struct {
	int position;
	int weight;
	int inventory[10];
	int death;
}character;

typedef struct {
	int id;
	char* lookaction;
	int weight;
	char* actions;
}item;