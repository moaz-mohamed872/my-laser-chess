#include <iostream>
#include<utility>
#include<string>
#include<vector>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>


using namespace std;
using namespace sf;

struct piece {
	//Destructor
	~piece() {}

	//default Constructor
	piece() = default;

	// Constructor
	piece(string t, int orie, int pl, pair<int, int>pos) {
		this->type = t;
		this->orientation = orie;
		this->player = pl;

		//blue player sprites
		if (this->player == 1) {
			//Sprite for the Deflectors
			if (this->type == "deflector") {
				if (this->orientation == 0) {
					this->tx.loadFromFile("pieces pics/deflector blue.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 1) {

					this->tx.loadFromFile("pieces pics/deflector blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(-90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 2) {

					this->tx.loadFromFile("pieces pics/deflector blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(180);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 3) {

					this->tx.loadFromFile("pieces pics/deflector blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}
			}

			//Sprite for the Defenders
			else if (this->type == "defender") {

				if (this->orientation == 0) {
					this->tx.loadFromFile("pieces pics/defender blue.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 1) {

					this->tx.loadFromFile("pieces pics/defender blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(-90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);

				}

				else if (this->orientation == 2) {

					this->tx.loadFromFile("pieces pics/defender blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(180);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);

				}
				else if (this->orientation == 3) {

					this->tx.loadFromFile("pieces pics/defender blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}
			}
			//Sprite for the Switches

			else if (this->type == "switch") {


				if (this->orientation == 0) {
					this->tx.loadFromFile("pieces pics/switch blue.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 1) {
					this->tx.loadFromFile("pieces pics/switch blue.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

			}

			//Sprite fot the Kings

			else if (this->type == "king") {

				this->tx.loadFromFile("pieces pics/the king blue.jpg");
				this->p.setTexture(tx);
				this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
			}

			else if (this->type == "laser") {
				this->tx.loadFromFile("pieces pics/blue laser.jpg");
				this->p.setTexture(tx);
				this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);

			}



		}

		//the Red player sprites
		else if (this->player == 2) {

			//Sprite for the Deflectors
			if (this->type == "deflector") {

				if (this->orientation == 0) {

					this->tx.loadFromFile("pieces pics/deflector red.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 1) {

					this->tx.loadFromFile("pieces pics/deflector red.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(-90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 2) {

					this->tx.loadFromFile("pieces pics/deflector red.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
					this->p.setRotation(180);
				}

				else if (this->orientation == 3) {

					this->tx.loadFromFile("pieces pics/deflector red.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

			}

			//Sprite for the Defenders

			else if (this->type == "defender") {


				if (this->orientation == 0) {

					this->tx.loadFromFile("pieces pics/defender red.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);

				}

				else if (this->orientation == 1) {

					this->tx.loadFromFile("pieces pics/defender red.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(-90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);

				}

				else if (this->orientation == 2) {

					this->tx.loadFromFile("pieces pics/defender red.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
					this->p.setRotation(180);
				}

				else if (this->orientation == 3) {

					this->tx.loadFromFile("pieces pics/defender red.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

			}
			//Sprite for the Switches

			else if (this->type == "switch") {


				if (this->orientation == 0) {

					this->tx.loadFromFile("pieces pics/switch red.jpg");
					this->p.setTexture(tx);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

				else if (this->orientation == 1) {

					this->tx.loadFromFile("pieces pics/switch red.jpg");
					this->p.setTexture(tx);
					this->p.setRotation(90);
					this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				}

			}

			//Sprite fot the Kings

			else if (this->type == "king") {

				this->tx.loadFromFile("pieces pics/the king red.jpg");
				this->p.setTexture(tx);
				this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
			}

			else if (this->type == "laser") {

				this->tx.loadFromFile("pieces pics/Red laser.jpg");
				this->p.setTexture(tx);
				this->p.setOrigin(this->p.getLocalBounds().width / 2, this->p.getLocalBounds().height / 2);
				this->p.setRotation(180);
			}




		}
	}

	//Sprite for the pieces
	Sprite p;

	//Texture for the pieces
	Texture tx;

	//Chose the type for the pieces
	string type;

	//the first player declared as 1 and the secound player declared as 2
	int player;

	//
	int orientation;
	//
	pair<int, int> position;

	//fn for pieces to rotate
	void rotate(bool clockwise) {
		if (clockwise) {
			this->p.rotate(90);
			if (this->type == "deflector" || this->type == "defender") {
				this->orientation += 3;
				this->orientation %= 4;

			}


			else if (this->type == "switch" || this->type == "laser") {
				this->orientation += 1;
				this->orientation %= 2;
			}


		}
		else if (clockwise == false) {
			this->p.rotate(-90);

			if (this->type == "deflector" || this->type == "defender") {
				this->orientation += 1;
				this->orientation %= 4;
			}


			else if (this->type == "switch" || this->type == "laser") {
				this->orientation += 1;
				this->orientation %= 2;
			}
		}
	}

	//fn move for the pieces
	void motion(int row, int col) {
		this->position.first = row;

		this->position.second = col;
	}

	//keep this fn for now
	void kill() {
		this->p.setScale(0, 0);
		this->~piece();
	}
};

struct cell {
	piece p;
	bool isempty = true;
	Vector2f Position;
};

// laser variables 
const float cellLinth = 68.5;
const int initX = 251, initY = 219;
vector <Vector2f> laserPath;

bool clockwise = true;
bool bluePlayer = true;

//Variables of rows &columns of the Board
int r = -1, c = -1;
const int Rows = 8;
const int Columns = 10;

//variables to be arguments to the constructor
const int p1 = 1, p2 = 2;
pair<int, int>k;
const string defl = "deflector", defen = "defender", swit = "switch", kin = "king", las = "laser";
const int o1 = 1, o0 = 0, o2 = 2, o3 = 3;

RenderWindow window(VideoMode(1920, 1080), "Laser Chess");

Color backgroundcolor(255, 239, 226, 255);

RectangleShape grid[Rows][Columns];
RectangleShape deadPieceTable;

Font font;

Text text1;
Text text2;

Text text;
Text textt1;
Text textt2;
Text textt3;

Sprite logoo;
Sprite rotatee;
Sprite grd;
Sprite Blueplayer;
Sprite Redplayer;

Texture board;
Texture Rotate;
Texture Blue;
Texture logo;
Texture Red;

cell table[Rows][Columns];

// blue team deflector
piece bDeflector1(defl, o0, p1, k);
piece bDeflector2(defl, o0, p1, k);
piece bDeflector3(defl, o0, p1, k);
piece bDeflector4(defl, o0, p1, k);
piece bDeflector5(defl, o3, p1, k);
piece bDeflector6(defl, o1, p1, k);
piece bDeflector7(defl, o1, p1, k);
//blue team defender
piece bDefender1(defen, o0, p1, k);
piece bDefender2(defen, o0, p1, k);
//blue team switch
piece bSwitch1(swit, o0, p1, k);
piece bSwitch2(swit, o1, p1, k);
//blue team king
piece bKing(kin, o0, p1, k);
//Blue laser
piece bLaser(las, o0, p1, k);
//red team deflector
piece rDeflector1(defl, o2, p2, k);
piece rDeflector2(defl, o1, p2, k);
piece rDeflector3(defl, o2, p2, k);
piece rDeflector4(defl, o2, p2, k);
piece rDeflector5(defl, o3, p2, k);
piece rDeflector6(defl, o3, p2, k);
piece rDeflector7(defl, o2, p2, k);
//red team defender
piece rDefender1(defen, o2, p2, k);
piece rDefender2(defen, o2, p2, k);
//red team switch
piece rSwitch1(swit, o0, p2, k);
piece rSwitch2(swit, o1, p2, k);
//red tem king
piece rKing(kin, o0, p2, k);
//Red laser
piece rLaser(las, o0, p2, k);
//dead pieces
piece deadbdeflector(defl, o0, p1, k);
piece deadbdefender(defen, o0, p1, k);
piece deadrdeflector(defl, o0, p2, k);
piece deadrdefender(defen, o0, p2, k);
//counter 
int rdeflector_count = 0;
int rdefender_count = 0;
int bdeflector_count = 0;
int bdefender_count = 0;

//colliders for the deflectors of the blue team
RectangleShape bdcollider1(Vector2f(4, 70.5));
RectangleShape bdcollider2(Vector2f(4, 70.5));
RectangleShape bdcollider3(Vector2f(4, 70.5));
RectangleShape bdcollider4(Vector2f(4, 70.5));
RectangleShape bdcollider5(Vector2f(4, 70.5));
RectangleShape bdcollider6(Vector2f(4, 70.5));
RectangleShape bdcollider7(Vector2f(4, 70.5));
//colliders for the deflectors of the red team
RectangleShape rdcollider1(Vector2f(4, 70.5));
RectangleShape rdcollider2(Vector2f(4, 70.5));
RectangleShape rdcollider3(Vector2f(4, 70.5));
RectangleShape rdcollider4(Vector2f(4, 70.5));
RectangleShape rdcollider5(Vector2f(4, 70.5));
RectangleShape rdcollider6(Vector2f(4, 70.5));
RectangleShape rdcollider7(Vector2f(4, 70.5));
//colliders for the switch of the blue team
RectangleShape bscollider1(Vector2f(5, 70.5));
RectangleShape bscollider2(Vector2f(5, 70.5));
//colliders for the switch of the red team
RectangleShape rscollider1(Vector2f(5, 70.5));
RectangleShape rscollider2(Vector2f(5, 70.5));
//Blue Shield Defender
RectangleShape bshield1(Vector2f(5, 47));
RectangleShape bshield2(Vector2f(5, 47));
//Red Shield Defender
RectangleShape rshield1(Vector2f(5, 47));
RectangleShape rshield2(Vector2f(5, 47));

//functions decleration
void start();
void update();
void pieceDraw();
void pieceSetPos();
void colliderDraw();
void colliderSetOrigin();
void colliderSetRotate();
void colliderSetPos();
void boardDraw();
void piecesRotation();
void availableMoves(Vector2i mouseposition);
void draw();
pair<int, int> getCellIndex(Vector2i);
void laser(int diriction, pair<int, int> position);
void gameOver(string);
void Text_Deadpieces();
void drawtext();
void update_dead_count();
void laserDraw(vector<Vector2f>laserPath);


int main()
{

	start();
	pieceSetPos();
	while (window.isOpen()) {
		Event evnt;
		while (window.pollEvent(evnt)) {
			if (evnt.type == evnt.Closed)
				window.close();
			if (evnt.type == Event::MouseButtonPressed && evnt.mouseButton.button == Mouse::Left) {
				availableMoves(Mouse::getPosition(window));
			}
		}
		laserPath.push_back(Vector2f((initX + (9.5 * cellLinth)), (initY + (7 * cellLinth))));
		laser(0, { 6,9 });
		laserDraw(laserPath);
		window.display();
		sleep(seconds(3));
		update();
		draw();
	}
	return 0;
}




void start() {
	/*bdcollider1.setFillColor(Color::Green);
	bdcollider2.setFillColor(Color::Green);
	bdcollider3.setFillColor(Color::Green);
	bdcollider4.setFillColor(Color::Green);
	bdcollider5.setFillColor(Color::Green);
	bdcollider6.setFillColor(Color::Green);
	bdcollider7.setFillColor(Color::Green);

	rdcollider1.setFillColor(Color::Green);
	rdcollider2.setFillColor(Color::Green);
	rdcollider3.setFillColor(Color::Green);
	rdcollider4.setFillColor(Color::Green);
	rdcollider5.setFillColor(Color::Green);
	rdcollider6.setFillColor(Color::Green);
	rdcollider7.setFillColor(Color::Green);

	bscollider1.setFillColor(Color::Green);
	bscollider2.setFillColor(Color::Green);

	rscollider1.setFillColor(Color::Green);
	rscollider2.setFillColor(Color::Green);*/

	colliderSetOrigin();
	colliderSetRotate();
	colliderSetPos();
	Text_Deadpieces();

	// defender sheald setfillcolor
	bshield1.setFillColor(Color::Black);
	bshield2.setFillColor(Color::Black);
	rshield1.setFillColor(Color::Black);
	rshield2.setFillColor(Color::Black);

	// pics loading 
	logo.loadFromFile("Board pics/logo.png");
	logoo.setTexture(logo);
	Red.loadFromFile("Board pics/Redplayer.png");
	Redplayer.setTexture(Red);
	Blue.loadFromFile("Board pics/blueplayer.png");
	Blueplayer.setTexture(Blue);
	board.loadFromFile("Board pics/grid.png");
	grd.setTexture(board);
	font.loadFromFile("Board pics/arial.ttf");
	text1.setFont(font);
	Rotate.loadFromFile("Board pics/Rotate.png");
	rotatee.setTexture(Rotate);

	// board setScale
	Blueplayer.setScale(0.12, 0.12);
	Redplayer.setScale(0.12, 0.12);
	logoo.setScale(0.6, 0.6);
	rotatee.setScale(1, 1);

	// board setPosition
	logoo.setPosition(150, 25);
	Redplayer.setPosition(242, 160);
	Blueplayer.setPosition(242, 775);
	grd.setPosition(245, 212);
	rotatee.setPosition(480, 820);

	// board text
	text1.setString("Red Player");
	text1.setFillColor(Color::Red);
	text1.setStyle(Text::Bold);
	text1.setPosition(302, 165);
	text2.setFont(font);
	text2.setString("Blue Player");
	text2.setFillColor(Color(13, 110, 253, 255));
	text2.setStyle(Text::Bold);
	text2.setPosition(302, 778);

	// deadPieceTable
	deadPieceTable.setSize(Vector2f(68, 550));
	deadPieceTable.setOutlineColor(Color::White);
	deadPieceTable.setOutlineThickness(2);
	deadPieceTable.setPosition(1200, 212);
	deadPieceTable.setFillColor(Color(222, 201, 180, 1200));

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Columns; j++) {
			grid[i][j].setSize(Vector2f(cellLinth, cellLinth));
			grid[i][j].setFillColor(Color(0, 0, 0, 0));
			grid[i][j].setOutlineColor(Color::White);
			grid[i][j].setOutlineThickness(1);
			Vector2f pos((j * cellLinth) + 284, (i * cellLinth) + 251);
			grid[i][j].setPosition(pos);
			grid[i][j].setOrigin(grid[i][j].getLocalBounds().width / 2, grid[i][j].getLocalBounds().height / 2);
			table[i][j].Position = pos;
		}
	}
}

void update() {
	colliderSetPos();
	update_dead_count();
}

void draw()
{
	window.clear();
	boardDraw();
	pieceDraw();
	colliderDraw();
	drawtext();
	window.display();
}


//u=0
//l=1
//d=2
//r=3


void laser(int diriction, pair<int, int> position) {
	cout << position.first << " " << position.second << endl;
	Vector2f point;
	if (diriction == 0 && position.first < 0) {
		point.x = (initX + ((float)position.second + 0.5) * cellLinth);
		point.y = initY;
		laserPath.push_back(point);
		return;
	}
	else if (diriction == 2 && position.first > 7) {
		point.x = (initX + ((float)position.second + 0.5) * cellLinth);
		point.y = (initY + 8 * cellLinth);
		laserPath.push_back(point);
		return;
	}
	else if (diriction == 1 && position.second < 0) {
		point.x = initX;
		point.y = (initY + ((float)position.first + 0.5) * cellLinth);
		laserPath.push_back(point);
		return;
	}
	else if (diriction == 3 && position.second > 9) {
		point.x = (initX + 10 * cellLinth);
		point.y = (initY + ((float)position.first + 0.5) * cellLinth);
		laserPath.push_back(point);
		return;
	}
	if (table[position.first][position.second].isempty == 1) {
		switch (diriction) {
		case 0: laser(0, { position.first - 1,position.second }); return;
		case 1: laser(1, { position.first,position.second - 1 }); return;
		case 2: laser(2, { position.first + 1,position.second }); return;
		case 3: laser(3, { position.first,position.second + 1 }); return;
		}
	}
	else {
		point.x = initX + (((float)position.second + 0.5) * cellLinth);
		point.y = initY + ((float)position.first + 0.5) * cellLinth;
		laserPath.push_back(point);
		if (table[position.first][position.second].p.type == defl) {
			switch (table[position.first][position.second].p.orientation) {
			case 0: {
				switch (diriction) {
				case 0: table[position.first][position.second].p.kill(); return;
				case 1: table[position.first][position.second].p.kill(); return;
				case 2: laser(1, { position.first,position.second - 1 }); return;
				case 3: laser(0, { position.first - 1 ,position.second }); return;
				}
			}
			case 1: {
				switch (diriction) {
				case 0: laser(1, { position.first,position.second - 1 }); return;
				case 1: table[position.first][position.second].p.kill();  return;
				case 2: table[position.first][position.second].p.kill(); return;
				case 3: laser(2, { position.first + 1,position.second }); return;
				}
			}
			case 2: {
				switch (diriction) {
				case 0: laser(3, { position.first ,position.second + 1 }); return;
				case 1: laser(2, { position.first + 1 ,position.second }); return;
				case 2: table[position.first][position.second].p.kill(); return;
				case 3: table[position.first][position.second].p.kill(); return;
				}
			}
			case 3:
			{
				switch (diriction) {
				case 0: table[position.first][position.second].p.kill(); return;
				case 1: laser(0, { position.first - 1 ,position.second }); return;
				case 2: laser(3, { position.first ,position.second + 1 });  return;
				case 3: table[position.first][position.second].p.kill(); return;
				}
			}
			}
		}
		else if (table[position.first][position.second].p.type == swit) {
			switch (table[position.first][position.second].p.orientation) {
			case 0: {
				switch (diriction) {
				case 0: laser(3, { position.first ,position.second + 1 }); return;
				case 1: laser(2, { position.first + 1,position.second }); return;
				case 2: laser(1, { position.first,position.second - 1 }); return;
				case 3: laser(0, { position.first - 1 ,position.second }); return;
				}
			}
			case 1: {
				switch (diriction) {
				case 0: laser(1, { position.first,position.second - 1 }); return;
				case 1: laser(0, { position.first - 1 ,position.second }); return;
				case 2: laser(3, { position.first ,position.second + 1 }); return;
				case 3: laser(2, { position.first + 1,position.second }); return;
				}
			}
			}
		}
		else if (table[position.first][position.second].p.type == defen) {
			switch (table[position.first][position.second].p.orientation) {
			case 0:
				switch (diriction) {
				case 2:
					laserPath.pop_back();
					point.x = initX + (((float)position.second + 0.5) * cellLinth);
					point.y = initY + ((position.first) * cellLinth);
					laserPath.push_back(point);
					return;
				case 0:
				case 1:
				case 3: table[position.first][position.second].p.kill(); return;
				}
			case 1:
				switch (diriction) {
				case 3:
					laserPath.pop_back();
					point.x = initX + (position.second * cellLinth);
					point.y = initY + (((float)position.first + 0.5) * cellLinth);
					laserPath.push_back(point);
					return;
				case 0:
				case 1:
				case 2: table[position.first][position.second].p.kill(); return;

				}
			case 2:
				switch (diriction) {
				case 0:
					laserPath.pop_back();
					point.x = initX + (((float)position.second + 0.5) * cellLinth);
					point.y = initY + (position.first + 1) * cellLinth;
					laserPath.push_back(point);
					return;
				case 1:
				case 2:
				case 3: table[position.first][position.second].p.kill(); return;
				}
			case 3:
				switch (diriction) {
				case 1:
					laserPath.pop_back();
					point.x = initX + (position.second + 1) * cellLinth;
					point.y = initY + (((float)position.first + 0.5) * cellLinth);
					laserPath.push_back(point);
					return;
				}
			}
		}
		else if (table[position.first][position.second].p.type == kin) {
			if (table[position.first][position.second].p.player == 1)
				gameOver("blue");
			else
				gameOver("red");
		}
	}
}
void Text_Deadpieces()
{

	font.loadFromFile("Board pics/arial.ttf");


	text.setFont(font);
	text.setFillColor(Color(0, 0, 0, 255));
	text.setPosition(1218, 215);
	text.setCharacterSize(50);
	text.setString(to_string(bdeflector_count));


	textt1.setFont(font);
	textt1.setFillColor(Color(0, 0, 0, 255));
	textt1.setPosition(1218, 385);
	textt1.setCharacterSize(50);
	textt1.setString(to_string(bdefender_count));


	textt2.setFont(font);
	textt2.setFillColor(Color(0, 0, 0, 255));
	textt2.setPosition(1218, 545);
	textt2.setCharacterSize(50);
	textt2.setString(to_string(rdeflector_count));


	textt3.setFont(font);
	textt3.setFillColor(Color(0, 0, 0, 255));
	textt3.setPosition(1218, 690);
	textt3.setCharacterSize(50);
	textt3.setString(to_string(rdefender_count));



}

void drawtext()
{
	window.draw(text);
	window.draw(textt1);
	window.draw(textt2);
	window.draw(textt3);

}

void update_dead_count()
{


	if (Keyboard::isKeyPressed(Keyboard::Key::W))
	{

		bdeflector_count++;
		text.setString(to_string(bdeflector_count));
	}

	else if (Keyboard::isKeyPressed(Keyboard::A))
	{

		bdefender_count++;
		textt1.setString(to_string(bdefender_count));
	}

	else if (Keyboard::isKeyPressed(Keyboard::S))
	{

		rdeflector_count++;
		textt2.setString(to_string(rdeflector_count));
	}

	else if (Keyboard::isKeyPressed(Keyboard::D))
	{

		rdefender_count++;
		textt3.setString(to_string(rdefender_count));
	}





}

void colliderSetOrigin() {
	bdcollider1.setOrigin((bdcollider1.getLocalBounds().width / 2) + 5, bdcollider1.getLocalBounds().height / 2);
	bdcollider2.setOrigin((bdcollider2.getLocalBounds().width / 2) + 5, bdcollider2.getLocalBounds().height / 2);
	bdcollider3.setOrigin((bdcollider3.getLocalBounds().width / 2) + 5, bdcollider3.getLocalBounds().height / 2);
	bdcollider4.setOrigin((bdcollider4.getLocalBounds().width / 2) + 5, bdcollider4.getLocalBounds().height / 2);
	bdcollider5.setOrigin((bdcollider5.getLocalBounds().width / 2) - 5, bdcollider5.getLocalBounds().height / 2);
	bdcollider6.setOrigin((bdcollider6.getLocalBounds().width / 2) + 5, bdcollider6.getLocalBounds().height / 2);
	bdcollider7.setOrigin((bdcollider7.getLocalBounds().width / 2) + 5, bdcollider7.getLocalBounds().height / 2);
	rdcollider1.setOrigin((rdcollider1.getLocalBounds().width / 2) - 5, rdcollider1.getLocalBounds().height / 2);
	rdcollider2.setOrigin((rdcollider2.getLocalBounds().width / 2) + 5, rdcollider2.getLocalBounds().height / 2);
	rdcollider3.setOrigin((rdcollider3.getLocalBounds().width / 2) - 5, rdcollider3.getLocalBounds().height / 2);
	rdcollider4.setOrigin((rdcollider4.getLocalBounds().width / 2) - 5, rdcollider4.getLocalBounds().height / 2);
	rdcollider5.setOrigin((rdcollider5.getLocalBounds().width / 2) - 5, rdcollider5.getLocalBounds().height / 2);
	rdcollider6.setOrigin((rdcollider6.getLocalBounds().width / 2) - 5, rdcollider6.getLocalBounds().height / 2);
	rdcollider7.setOrigin((rdcollider7.getLocalBounds().width / 2) - 5, rdcollider7.getLocalBounds().height / 2);
	bscollider1.setOrigin((bscollider1.getLocalBounds().width / 2), bscollider1.getLocalBounds().height / 2);
	bscollider2.setOrigin((bscollider2.getLocalBounds().width / 2), bscollider2.getLocalBounds().height / 2);
	rscollider1.setOrigin((rscollider1.getLocalBounds().width / 2), rscollider1.getLocalBounds().height / 2);
	rscollider2.setOrigin((rscollider2.getLocalBounds().width / 2), rscollider2.getLocalBounds().height / 2);

	bshield1.setOrigin((bshield1.getLocalBounds().width / 2) + 25, (bshield1.getLocalBounds().height / 2));
	bshield2.setOrigin((bshield2.getLocalBounds().width / 2) + 25, (bshield2.getLocalBounds().height / 2));
	rshield1.setOrigin((rshield1.getLocalBounds().width / 2) - 25, (rshield1.getLocalBounds().height / 2));
	rshield2.setOrigin((rshield2.getLocalBounds().width / 2) - 25, (rshield2.getLocalBounds().height / 2));
}

void colliderSetRotate()
{
	bdcollider1.setRotation(45);
	bdcollider2.setRotation(45);
	bdcollider3.setRotation(45);
	bdcollider4.setRotation(45);
	bdcollider5.setRotation(-45);
	bdcollider6.setRotation(-45);
	bdcollider7.setRotation(-45);
	rdcollider1.setRotation(45);
	rdcollider2.setRotation(-45);
	rdcollider3.setRotation(45);
	rdcollider4.setRotation(45);
	rdcollider5.setRotation(-45);
	rdcollider6.setRotation(-45);
	rdcollider7.setRotation(45);
	bscollider1.setRotation(41);
	bscollider2.setRotation(-50);
	rscollider1.setRotation(41);
	rscollider2.setRotation(-50);

	bshield1.setRotation(90);
	bshield2.setRotation(90);
	rshield1.setRotation(90);
	rshield2.setRotation(90);
}

void pieceSetPos()
{

	bLaser.p.setPosition(table[7][9].Position);
	table[7][9].isempty = false;
	table[7][9].p = bLaser;

	bKing.p.setPosition(table[7][4].Position);
	table[7][4].isempty = false;
	table[7][4].p = bKing;

	bDefender1.p.setPosition(table[7][3].Position);
	table[7][3].isempty = false;
	table[7][3].p = bDefender1;

	bDefender2.p.setPosition(table[7][5].Position);
	table[7][5].isempty = false;
	table[7][5].p = bDefender2;

	bSwitch1.p.setPosition(table[4][4].Position);
	table[4][4].isempty = false;
	table[4][4].p = bSwitch1;

	bSwitch2.p.setPosition(table[4][5].Position);
	table[4][5].isempty = false;
	table[4][5].p = bSwitch2;

	bDeflector1.p.setPosition(table[4][2].Position);
	table[4][2].isempty = false;
	table[4][2].p = bDeflector1;

	bDeflector2.p.setPosition(table[2][3].Position);
	table[2][3].isempty = false;
	table[2][3].p = bDeflector2;


	bDeflector3.p.setPosition(table[7][2].Position);
	table[7][2].isempty = false;
	table[7][2].p = bDeflector3;


	bDeflector4.p.setPosition(table[3][9].Position);
	table[3][9].isempty = false;
	table[3][9].p = bDeflector4;

	bDeflector5.p.setPosition(table[6][7].Position);
	table[6][7].isempty = false;
	table[6][7].p = bDeflector5;


	bDeflector6.p.setPosition(table[4][9].Position);
	table[4][9].isempty = false;
	table[4][9].p = bDeflector6;


	bDeflector7.p.setPosition(table[3][2].Position);
	table[3][2].isempty = false;
	table[3][2].p = bDeflector7;

	rLaser.p.setPosition(table[0][0].Position);
	table[0][0].isempty = false;
	table[0][0].p = rLaser;

	rKing.p.setPosition(table[0][5].Position);
	table[0][5].isempty = false;
	table[0][5].p = rKing;

	rDefender1.p.setPosition(table[0][4].Position);
	table[0][4].isempty = false;
	table[0][4].p = rDefender1;

	rDefender2.p.setPosition(table[0][6].Position);
	table[0][6].isempty = false;
	table[0][6].p = rDefender2;

	rSwitch1.p.setPosition(table[3][5].Position);
	table[3][5].isempty = false;
	table[3][5].p = rSwitch1;

	rSwitch2.p.setPosition(table[3][4].Position);
	table[3][4].isempty = false;
	table[3][4].p = rSwitch2;

	rDeflector1.p.setPosition(table[0][7].Position);
	table[0][7].isempty = false;
	table[0][7].p = rDeflector1;

	rDeflector2.p.setPosition(table[1][2].Position);
	table[1][2].isempty = false;
	table[1][2].p = rDeflector2;

	rDeflector3.p.setPosition(table[4][0].Position);
	table[4][0].isempty = false;
	table[4][0].p = rDeflector3;

	rDeflector4.p.setPosition(table[3][7].Position);
	table[3][7].isempty = false;
	table[3][7].p = rDeflector4;

	rDeflector5.p.setPosition(table[4][7].Position);
	table[4][7].isempty = false;
	table[4][7].p = rDeflector5;

	rDeflector6.p.setPosition(table[3][0].Position);
	table[3][0].isempty = false;
	table[3][0].p = rDeflector6;

	rDeflector7.p.setPosition(table[5][6].Position);
	table[5][6].isempty = false;
	table[5][6].p = rDeflector7;

	deadbdeflector.p.setPosition(1150, 250);
	deadbdefender.p.setPosition(1150, 420);
	deadrdeflector.p.setPosition(1150, 580);
	deadrdefender.p.setPosition(1150, 730);

}

void colliderSetPos()
{
	bdcollider1.setPosition(bDeflector1.p.getPosition());
	bdcollider2.setPosition(bDeflector2.p.getPosition());
	bdcollider3.setPosition(bDeflector3.p.getPosition());
	bdcollider4.setPosition(bDeflector4.p.getPosition());
	bdcollider5.setPosition(bDeflector5.p.getPosition());
	bdcollider6.setPosition(bDeflector6.p.getPosition());
	bdcollider7.setPosition(bDeflector7.p.getPosition());

	rdcollider1.setPosition(rDeflector1.p.getPosition());
	rdcollider2.setPosition(rDeflector2.p.getPosition());
	rdcollider3.setPosition(rDeflector3.p.getPosition());
	rdcollider4.setPosition(rDeflector4.p.getPosition());
	rdcollider5.setPosition(rDeflector5.p.getPosition());
	rdcollider6.setPosition(rDeflector6.p.getPosition());
	rdcollider7.setPosition(rDeflector7.p.getPosition());

	bscollider1.setPosition(bSwitch1.p.getPosition());
	bscollider2.setPosition(bSwitch2.p.getPosition());

	rscollider1.setPosition(rSwitch1.p.getPosition());
	rscollider2.setPosition(rSwitch2.p.getPosition());

	bshield1.setPosition(bDefender1.p.getPosition());
	bshield2.setPosition(bDefender2.p.getPosition());

	rshield1.setPosition(rDefender1.p.getPosition());
	rshield2.setPosition(rDefender2.p.getPosition());
}

pair<int, int> getCellIndex(Vector2i mouseposition) {
	if (mouseposition.y > initY && mouseposition.y < (initY + (8.0 * cellLinth))
		&& mouseposition.x > initX && mouseposition.x < (initX + (10.0 * cellLinth))) {
		r = ((float)mouseposition.y - initY) / cellLinth;
		c = ((float)mouseposition.x - initX) / cellLinth;
		return { r, c };
	}
}

void availableMoves(Vector2i mouseposition) {
	//after yoy finish the function please place it in the update function 
	pair<int, int> mouseclick = getCellIndex(mouseposition);
	static int prev_r = -1, prev_c = -1;

	if (r != prev_r || c != prev_c) {
		cout << mouseclick.first << " " << mouseclick.second << endl;
		for (int i = 0; i < Rows; i++) {
			for (int j = 0; j < Columns; j++) {
				grid[i][j].setFillColor(Color(0, 0, 0, 0));
			}
		}

		if (r >= 0 && r < Rows && c >= 0 && c < Columns) {
			if (r - 1 >= 0 && table[r - 1][c].isempty == true)
				grid[r - 1][c].setFillColor(Color::Green);
			if (r + 1 < Rows && table[r + 1][c].isempty == true)
				grid[r + 1][c].setFillColor(Color::Green);
			if (c - 1 >= 0 && table[r][c - 1].isempty == true)
				grid[r][c - 1].setFillColor(Color::Green);
			if (c + 1 < Columns && table[r][c + 1].isempty == true)
				grid[r][c + 1].setFillColor(Color::Green);
			if (r - 1 >= 0 && c - 1 >= 0 && table[r - 1][c - 1].isempty == true)
				grid[r - 1][c - 1].setFillColor(Color::Green);
			if (r - 1 >= 0 && c + 1 < Columns && table[r - 1][c + 1].isempty == true)
				grid[r - 1][c + 1].setFillColor(Color::Green);
			if (r + 1 < Rows && c - 1 >= 0 && table[r + 1][c - 1].isempty == true)
				grid[r + 1][c - 1].setFillColor(Color::Green);
			if (r + 1 < Rows && c + 1 < Columns && table[r + 1][c + 1].isempty == true)
				grid[r + 1][c + 1].setFillColor(Color::Green);
		}

		prev_r = r;
		prev_c = c;
	}
}

void pieceDraw() {
	window.draw(bDeflector1.p);
	window.draw(bDeflector2.p);
	window.draw(bDeflector3.p);
	window.draw(bDeflector4.p);
	window.draw(bDeflector5.p);
	window.draw(bDeflector6.p);
	window.draw(bDeflector7.p);

	window.draw(bDefender1.p);
	window.draw(bDefender2.p);

	window.draw(bSwitch1.p);
	window.draw(bSwitch2.p);

	window.draw(bKing.p);

	window.draw(rDeflector1.p);
	window.draw(rDeflector2.p);
	window.draw(rDeflector3.p);
	window.draw(rDeflector4.p);
	window.draw(rDeflector5.p);
	window.draw(rDeflector6.p);
	window.draw(rDeflector7.p);

	window.draw(rDefender1.p);
	window.draw(rDefender2.p);

	window.draw(rSwitch1.p);
	window.draw(rSwitch2.p);

	window.draw(rKing.p);

	window.draw(bLaser.p);

	window.draw(rLaser.p);

	window.draw(deadbdeflector.p);
	window.draw(deadbdefender.p);
	window.draw(deadrdeflector.p);
	window.draw(deadrdefender.p);

}

void colliderDraw() {
	window.draw(bdcollider1);
	window.draw(bdcollider2);
	window.draw(bdcollider3);
	window.draw(bdcollider4);
	window.draw(bdcollider5);
	window.draw(bdcollider6);
	window.draw(bdcollider7);
	window.draw(rdcollider1);
	window.draw(rdcollider2);
	window.draw(rdcollider3);
	window.draw(rdcollider4);
	window.draw(rdcollider5);
	window.draw(rdcollider6);
	window.draw(rdcollider7);
	/*window.draw(rscollider1);
	window.draw(rscollider2);
	window.draw(bscollider1);
	window.draw(bscollider2);
	*/
	window.draw(bshield1);
	window.draw(bshield2);
	window.draw(rshield1);
	window.draw(rshield2);

}

void piecesRotation()
{
	if (clockwise)
	{
		bDefender1.rotate(clockwise);
	}

}

void boardDraw() {

	window.clear(backgroundcolor);
	window.draw(logoo);
	window.draw(Blueplayer);
	window.draw(Redplayer);
	window.draw(grd);
	window.draw(text1);
	window.draw(text2);
	window.draw(deadPieceTable);
	window.draw(rotatee);

	// grid draw 
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
		{
			window.draw(grid[i][j]);
		}
	}
}

void gameOver(string winner) {

}

void laserDraw(vector<Vector2f> laserPath)
{
	Vertex line[2];
	for (int i = 1; i < laserPath.size(); i++) {
		line[0] = laserPath[i - 1];
		line[1] = laserPath[i];
		line[0].color = Color::Red;
		window.draw(line, 2, Lines);
	}
	window.display();
}