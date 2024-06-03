void drawPoint (int x,int y,int r){
	circle (x,y,r);
	floodfill (x,y,getcolor());
}

