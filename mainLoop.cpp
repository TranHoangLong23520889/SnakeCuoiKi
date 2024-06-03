void mainLoop (void (*xxx)()){
	int x = getcolor();
	if (!kbhit()){
		xxx();
	}
	else{
		char ch;
        ch = getch();
		if (ch == -32) ch = getch();
		if ( ch == 32){
			setcolor(0);outtextxy (100,100,"Game Pause");setcolor(x);
			ch = getch();
			while (ch != 32){
				ch = getch();
				delay(0);
			}
			setcolor (BACKGROUND);
			outtextxy (100,100,"Game Pause");
			setcolor (x);
			delay(1000);
		}
        changeDirecton(ch);
        mainLoop (xxx);
    }
}
