void drawGame (){
	drawSnake();
	drawFood();
	int x = getcolor ();
	setcolor (2);
	sprintf(score_str,"%d",snakeLength*level*10-level*30);    //show score
    settextstyle(4,0,3);
    outtextxy(450,20,"SCORE:");
    setcolor(12);
    outtextxy(600,20,score_str);
	setcolor (x);
}