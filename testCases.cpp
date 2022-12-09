#include "testCases.hpp"





//PRIVATE FUNCTIONS:
void testCases::initVariables() {
	this->window = nullptr;
}

void testCases::initWindows() {
	this->videMode.height = 600;
	this->videMode.width = 800;
	this->window = new RenderWindow(this->videMode, "TestCases", Style::Titlebar | Style::Close);

	this->window->setFramerateLimit(144);
}




void testCases::update(){

	this->pollEvents();
}

void testCases::pollEvents()
{
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
			
			/*Rotations*/
			if (this->event.key.code == Keyboard::Up) {

				//since we are only using the L-Block.
				
				/*Use for test rotation: */
				
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
			
			break;


		}
	}
}

void testCases::render()
{
	/*Renders the game object
		-Clear Old frame
		-Render Objects
		-Display frame in Window
		Renders the game objects.
	*/

	this->window->clear(); //black

	/*GAMEPLAY GRID- WILL CHANGE POSITIONS BASED ON SIZE OF THE WINDOW*/

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



	//draw here:
	genericshape.ParentShape::Draw(this->window);

	this->window->display();
}

void testCases::testRotation(){

}

void testCases::testMoveLeft(){

}

void testCases::testMoveRight(){
	
}

void testCases::testMoveDown(){


}

void testCases::testBoundedByGrid(){	


}
