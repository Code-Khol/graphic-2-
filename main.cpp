//Code Khol
#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

main()
{
	initwindow(1210,610);
	
	for(int i=0 ; i<=600 ; i+=10)
	{
		setcolor(3);
		line(0,0+i,0+i,600-i);
		line(0+i,600-i,600-i,600);
		setcolor(12);
		line(1200,0+i,1200-i,600-i);
		line(1200-i,600-i,600+i,600);
		delay(25);
	}
	
	
	
	
	
	
	
	getch();
}
