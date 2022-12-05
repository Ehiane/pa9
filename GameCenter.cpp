#include "GameCenter.h"


Game::Game() {

	this->initVariables();
	this->initWindows();
	this->initEnemies();

}

Game::~Game() {
	//VERY IMPORTANT
	delete this->window;

}


//Updates the game logic : all user inputs and things of that nature
void Game::update() {

	this->pollEvents();

	//update mouse position:
	//relative to the whole screen.
	//std::cout << "Mouse Pos: " << Mouse::getPosition().x << Mouse::getPosition().y << "\n";


	//relative to game window:
	std::cout << "Mouse Pos: " << Mouse::getPosition(*this->window).x << Mouse::getPosition(*this->window).y << "\n";
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

	//this->window->clear(Color::Color(192,192,192)); //Silver Grey

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
	

	//Draw Game here//
	this->window->draw(this->enemy);

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

void Game::initEnemies() {



	this->enemy.setPosition(10.f, 10.f); //(pixel in float ,pixel in float)
	this->enemy.setPosition(10.f, 10.f); //(pixel in float ,pixel in float)


	this->enemy.setScale(Vector2f(0.5f, 0.5f));
	this->enemy.setSize(Vector2f(100.f, 100.f)); //100.f confirms tht its a float value, if not a float, there will be issues.
	this->enemy.setFillColor(Color::Cyan);
	this->enemy.setOutlineColor(Color::Green);
	this->enemy.setOutlineThickness(1.f);
}
