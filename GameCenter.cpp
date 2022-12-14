#include "GameCenter.hpp"


Game::Game() {

	this->initVariables();
	this->initWindows();
	int random = rand() % 7 + 1;
	if (random == 1)
	{
		nextgenericshape = *(new Iblock);
		this->nexttype = 1;
	}
	if (random == 2)
	{
		nextgenericshape = *(new Jblock);
		this->nexttype = 2;
	}
	if (random == 3)
	{
		nextgenericshape = *(new Oblock);
		this->nexttype = 3;
	}
	if (random == 4)
	{
		nextgenericshape = *(new Zblock);
		this->nexttype = 4;
	}
	if (random == 5)
	{
		nextgenericshape = *(new Sblock);
		this->nexttype = 5;
	}
	if (random == 6)
	{
		nextgenericshape = *(new Lblock);
		this->nexttype = 6;
	}
	if (random == 7)
	{
		nextgenericshape = *(new Tblock);
		this->nexttype = 7;
	}
}

Game::~Game() {
	//VERY IMPORTANT
	delete this->window;

}


//Updates the game logic : all user inputs and things of that nature
void Game::update() {

	this->pollEvents();

}

void Game::pollEvents() {


	while (this->window->pollEvent(this->event)) {
		switch (this->event.type) { //checks the event that happens when triggered

		case Event::Closed: //what happens click the close button.
			this->window->close(); //close the window
			break;

		case Event::KeyPressed:
			if (this->event.key.code == Keyboard::Escape) { //what happens when you click on the escape key.


			}
			if (checkforCollisions() == true) { //what happens when a block is colloding when shape spawns.

				gameShapeList.DeleteShapeList();

			}
			if (this->event.key.code == Keyboard::Down) {

				this->genericshape.ParentShape::MoveDown();
				std::cout << "\nTESTCASE : MOVEMENT :[Movement DOWN FOR CURRENT BLOCK Passed!]\n";
				bool truth = checkforCollisions();
				if (truth == true)
				{
					this->genericshape.ParentShape::MoveUp();
					std::cout << "\nTESTCASE : COLLISION :[Collision detected for current shape!]\n";
				}
			}
			if (this->event.key.code == Keyboard::Right) {

				this->genericshape.ParentShape::MoveRight();
				std::cout << "\nTESTCASE : MOVEMENT :[Movement RIGHT FOR CURRENT BLOCK Passed!]\n";
				bool truth = checkforCollisions();
				if (truth == true)
				{
					this->genericshape.ParentShape::MoveLeft();
					std::cout << "\nTESTCASE : COLLISION :[Collision detected for current shape!]\n";
				}
			}
			if (this->event.key.code == Keyboard::Left) {

				this->genericshape.ParentShape::MoveLeft();
				std::cout << "\nTESTCASE : MOVEMENT :[Movement LEFT FOR CURRENT BLOCK Passed!]\n";
				bool truth = checkforCollisions();
				if (truth == true)
				{
					this->genericshape.ParentShape::MoveRight();
					std::cout << "\nTESTCASE : COLLISION :[Collision detected for current shape!]\n";
				}
			}
			if (this->event.key.code == Keyboard::Space) {

				int temp;
				temp = type;
				type = savedtype;
				savedtype = temp;
				if (type == 1)
				{
					genericshape = *(new Iblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to I-Block] Passed!\n";
				}
				if (type == 2)
				{
					genericshape = *(new Jblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to J-Block] Passed!\n";
				}
				if (type == 3)
				{
					genericshape = *(new Oblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to J-Block] Passed!\n";
				}
				if (type == 4)
				{
					genericshape = *(new Zblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to Z-Block] Passed!\n";
				}
				if (type == 5)
				{
					genericshape = *(new Sblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to S-Block] Passed!\n";
				}
				if (type == 6)
				{
					genericshape = *(new Lblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to L-Block] Passed!\n";
				}
				if (type == 7)
				{
					genericshape = *(new Tblock);
					std::cout << "\nTESTCASE : SWAP-SHAPE :[Previous Shape changed to T-Block] Passed!\n";
				}
				// Saved Conversion
				if (savedtype == 1) // Add for saved type
				{
					savedshape = *(new Iblock);
				}
				if (savedtype == 2)
				{
					savedshape = *(new Jblock);
				}
				if (savedtype == 3)
				{
					savedshape = *(new Oblock);
				}
				if (savedtype == 4)
				{
					savedshape = *(new Zblock);
				}
				if (savedtype == 5)
				{
					savedshape = *(new Sblock);
				}
				if (savedtype == 6)
				{
					savedshape = *(new Lblock);
				}
				if (savedtype == 7)
				{
					savedshape = *(new Tblock);
				}
			}
			if (this->event.key.code == Keyboard::Up) {
				if (this->type == 1)
				{
					Iblock Itemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Itemp.rotate();
					genericshape = ParentShape(Itemp.point1x, Itemp.point1y, Itemp.point2x, Itemp.point2y,
						Itemp.point3x, Itemp.point3y, Itemp.point4x, Itemp.point4y);
					std::cout << "\nTESTCASE : ROTATION :[Rotation for I-Block] Passed!\n";
				}
				if (this->type == 2)
				{
					Jblock Jtemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Jtemp.rotate();
					genericshape = ParentShape(Jtemp.point1x, Jtemp.point1y, Jtemp.point2x, Jtemp.point2y,
						Jtemp.point3x, Jtemp.point3y, Jtemp.point4x, Jtemp.point4y);
					genericshape.point1.Cube.setFillColor(Jtemp.point1.Cube.getFillColor());
					genericshape.point2.Cube.setFillColor(Jtemp.point1.Cube.getFillColor());
					genericshape.point3.Cube.setFillColor(Jtemp.point1.Cube.getFillColor());
					genericshape.point4.Cube.setFillColor(Jtemp.point1.Cube.getFillColor());
					std::cout << "\nTESTCASE : ROTATION :[Rotation for J-Block] Passed!\n";
				}
				// No Rotate for O Block
				if (this->type == 4)
				{
					Zblock Ztemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Ztemp.rotate();
					genericshape = ParentShape(Ztemp.point1x, Ztemp.point1y, Ztemp.point2x, Ztemp.point2y,
						Ztemp.point3x, Ztemp.point3y, Ztemp.point4x, Ztemp.point4y);
					genericshape.point1.Cube.setFillColor(Ztemp.point1.Cube.getFillColor());
					genericshape.point2.Cube.setFillColor(Ztemp.point1.Cube.getFillColor());
					genericshape.point3.Cube.setFillColor(Ztemp.point1.Cube.getFillColor());
					genericshape.point4.Cube.setFillColor(Ztemp.point1.Cube.getFillColor());
					std::cout << "\nTESTCASE : ROTATION :[Rotation for Z-Block] Passed!\n";
				}
				if (this->type == 5)
				{
					Sblock Stemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Stemp.rotate();
					genericshape = ParentShape(Stemp.point1x, Stemp.point1y, Stemp.point2x, Stemp.point2y,
						Stemp.point3x, Stemp.point3y, Stemp.point4x, Stemp.point4y);
					genericshape.point1.Cube.setFillColor(Stemp.point1.Cube.getFillColor());
					genericshape.point2.Cube.setFillColor(Stemp.point1.Cube.getFillColor());
					genericshape.point3.Cube.setFillColor(Stemp.point1.Cube.getFillColor());
					genericshape.point4.Cube.setFillColor(Stemp.point1.Cube.getFillColor());
					std::cout << "\nTESTCASE : ROTATION :[Rotation for S-Block] Passed!\n";

				}
				if (this->type == 6)
				{
					Lblock Ltemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Ltemp.rotate();
					genericshape = ParentShape(Ltemp.point1x, Ltemp.point1y, Ltemp.point2x, Ltemp.point2y,
						Ltemp.point3x, Ltemp.point3y, Ltemp.point4x, Ltemp.point4y);
					genericshape.point1.Cube.setFillColor(Ltemp.point1.Cube.getFillColor());
					genericshape.point2.Cube.setFillColor(Ltemp.point1.Cube.getFillColor());
					genericshape.point3.Cube.setFillColor(Ltemp.point1.Cube.getFillColor());
					genericshape.point4.Cube.setFillColor(Ltemp.point1.Cube.getFillColor());
					std::cout << "\nTESTCASE : ROTATION :[Rotation for L-Block] Passed!\n";
				}
				if (this->type == 7)
				{
					Tblock Ttemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Ttemp.rotate();
					genericshape = ParentShape(Ttemp.point1x, Ttemp.point1y, Ttemp.point2x, Ttemp.point2y,
						Ttemp.point3x, Ttemp.point3y, Ttemp.point4x, Ttemp.point4y);
					genericshape.point1.Cube.setFillColor(Ttemp.point1.Cube.getFillColor());
					genericshape.point2.Cube.setFillColor(Ttemp.point1.Cube.getFillColor());
					genericshape.point3.Cube.setFillColor(Ttemp.point1.Cube.getFillColor());
					genericshape.point4.Cube.setFillColor(Ttemp.point1.Cube.getFillColor());
					std::cout << "\nTESTCASE : ROTATION :[Rotation for T-Block] Passed!\n";

				}
			}
			if (this->event.key.code == Keyboard::Enter) {
				int random = rand() % 7 + 1;
				ParentShape* toInsert = new ParentShape(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
					genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
				toInsert->point1.Cube.setFillColor(genericshape.point1.Cube.getFillColor());
				toInsert->point2.Cube.setFillColor(genericshape.point2.Cube.getFillColor());
				toInsert->point3.Cube.setFillColor(genericshape.point3.Cube.getFillColor());
				toInsert->point4.Cube.setFillColor(genericshape.point4.Cube.getFillColor());
				gameShapeList.insert(toInsert);
				if (random == 1)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Iblock);
					this->nexttype = 1;
				}
				if (random == 2)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Jblock);
					this->nexttype = 2;
				}
				if (random == 3)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Oblock);
					this->nexttype = 3;
				}
				if (random == 4)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Zblock);
					this->nexttype = 4;
				}
				if (random == 5)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Sblock);
					this->nexttype = 5;
				}
				if (random == 6)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Lblock);
					this->nexttype = 6;
				}
				if (random == 7)
				{
					genericshape = nextgenericshape;
					type = nexttype;
					nextgenericshape = *(new Tblock);
					this->nexttype = 7;
				}
			}
			break;


		}
	}

}


//Visualises the output of the code.
void Game::render() {

	/*Renders the game object
		-Clear Old frame
		-Render Objects
		-Display frame in Window
		Renders the game objects.
	*/

	this->window->clear(); //black

	/*
	GAMEPLAY GRID- WILL CHANGE POSITIONS BASED ON SIZE OF THE WINDOW
	*/
	RectangleShape cell;
	cell.setFillColor(sf::Color::Black);
	cell.setOutlineColor(sf::Color::White);
	cell.setSize(sf::Vector2f((this->window->getSize().y / 20), (this->window->getSize().y / 20)));
	cell.setOutlineThickness(1);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 10; j++) {
			cell.setPosition((float)(j * (this->window->getSize().y / 20)), (float)(i * (this->window->getSize().y / 20)));
			this->window->draw(cell);
		}
	}

	//title and names
	/*Font font;
	font.loadFromFile("./advanced_pixel-7.ttf");
	Text title, names, next, saved, instructions;
	title.setFont(font);
	title.setString("TETRIS");
	title.setCharacterSize(150);
	title.setPosition(375, 0);
	title.setFillColor(sf::Color::White);
	names.setFont(font);
	names.setString("by Cole, Ehiane, Will, and Danny");
	names.setCharacterSize(30);
	names.setPosition(400, 150);
	names.setFillColor(sf::Color::White);
	next.setFont(font);
	next.setString("Next Block");
	next.setCharacterSize(60);
	next.setPosition(350, 390);
	next.setFillColor(sf::Color::White);
	saved.setFont(font);
	saved.setString("Saved Block");
	saved.setCharacterSize(60);
	saved.setPosition(350, 220);
	saved.setFillColor(sf::Color::White);
	instructions.setFont(font);
	instructions.setString("----HOW TO PLAY----\nLEFT  - MOVE LEFT\nRIGHT - MOVE RIGHT\nDOWN  - MOVE DOWN\nUP    - ROTATE\nSPACE - SWAP \nW/ SAVED BLOCK\n-----------------------");
	instructions.setCharacterSize(20);
	instructions.setPosition(600, 325);
	instructions.setFillColor(sf::Color::White);
	this->window->draw(title);
	this->window->draw(names);
	this->window->draw(next);
	this->window->draw(saved);
	this->window->draw(instructions);*/


	// current shape
	genericshape.ParentShape::Draw(this->window);

	// past shapes
	if (gameShapeList.pHead != nullptr)
	{
		gameShapeList.printShapeList(this->window);
	}

	// future shape
	ParentShape toPrintNext = nextgenericshape;
	toPrintNext.ParentShape::MoveNext();
	toPrintNext.ParentShape::Draw(this->window);

	// saved shape
	ParentShape toPrintSaved = savedshape;
	toPrintSaved.ParentShape::MoveSaved();
	toPrintSaved.ParentShape::Draw(this->window);

	this->window->display();

}

//Accessors:
const bool Game::running() const
{
	return this->window->isOpen();
}


//PRIVATE FUNCTIONS:
void Game::initVariables() {
	this->window = nullptr;
}

void Game::initWindows() {
	this->videMode.height = 600;
	this->videMode.width = 800;
	this->window = new RenderWindow(this->videMode, "Tetris", Style::Titlebar | Style::Close);

	this->window->setFramerateLimit(144);
}