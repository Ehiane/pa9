#include "GameCenter.hpp"


Game::Game() {

	this->initVariables();
	this->initWindows();
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

				this->window->close();
			}
			if (this->event.key.code == Keyboard::Down) {

				this->genericshape.ParentShape::MoveDown();
			}
			if (this->event.key.code == Keyboard::Right) {

				this->genericshape.ParentShape::MoveRight();
			}
			if (this->event.key.code == Keyboard::Left) {

				this->genericshape.ParentShape::MoveLeft();
			}
			if (this->event.key.code == Keyboard::Up) {

				if (this->type == 1)
				{
					Iblock Itemp(genericshape.point1x, genericshape.point1y, genericshape.point2x, genericshape.point2y,
						genericshape.point3x, genericshape.point3y, genericshape.point4x, genericshape.point4y);
					Itemp.rotate();
					genericshape = ParentShape(Itemp.point1x, Itemp.point1y, Itemp.point2x, Itemp.point2y,
						Itemp.point3x, Itemp.point3y, Itemp.point4x, Itemp.point4y);
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
					genericshape = *(new Iblock);
					this->type = 1;
				}
				if (random == 2)
				{
					genericshape = *(new Jblock);
					this->type = 2;
				}
				if (random == 3)
				{
					genericshape = *(new Oblock);
					this->type = 3;
				}
				if (random == 4)
				{
					genericshape = *(new Zblock);
					this->type = 4;
				}
				if (random == 5)
				{
					genericshape = *(new Sblock);
					this->type = 5;
				}
				if (random == 6)
				{
					genericshape = *(new Lblock);
					this->type = 6;
				}
				if (random == 7)
				{
					genericshape = *(new Tblock);
					this->type = 7;
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
	Font font;
	font.loadFromFile("./advanced_pixel-7.ttf");
	Text title, names;
	title.setFont(font);
	title.setString("TETRIS");
	title.setCharacterSize(150);
	title.setPosition(375, 20);
	title.setFillColor(sf::Color::White);
	names.setFont(font);
	names.setString("by Cole, Ehiane, Will, and Danny");
	names.setCharacterSize(30);
	names.setPosition(400, 200);
	names.setFillColor(sf::Color::White);
	this->window->draw(title);
	this->window->draw(names);

	//current shape
	genericshape.ParentShape::Draw(this->window);

	//past shapes
	if (gameShapeList.pHead != nullptr)
	{
		gameShapeList.printShapeList(this->window);
	}

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
