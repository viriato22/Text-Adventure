#include "item.h"
#include <string.h>

void door::createdoors(int n){
	switch (n){
	case 0:
		data.id = 100;
		data.onground = 1;
		data.pickable = 0;
		strcpy_s(data.lookaction_onground, 100, "Sturdy door\n");
		door = 1;
		status = 0;
		room = 7;
	}
}