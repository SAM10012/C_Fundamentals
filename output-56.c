#include<stdio.h>
int main()
{
	struct ship
	{
		char color[10];
	}boat1,boat2;
	strcpy(boat1.color,"RED");
	printf("%s",boat1.color);
	boat2=boat1;
	strcpy(boat2.color,"YELLOW");
	printf("%s",boat1.color);
	return 0;
}
	
