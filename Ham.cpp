struct Point {
	int x,y,x0,y0;
};
struct HighScore {
	int score;
	char name[30];
};

void initGame ();
bool checkPoint ();
void drawPoint (int x,int y,int r);
void moveSnake ();
void drawSnake ();
void drawFood ();
void drawGame ();
void classic();
void modern();
void mainLoop (void (*gloop)());
void run ();
void changeDirecton (int x);
void showHighScore();
void getHighScore();
void checkHighScore(int score);
void initScore();
bool isEmpty();
void showText(int x,int y,char *str);
void showTextBackground(int x,int y,char *str,int color);
