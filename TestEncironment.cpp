
#include "GameCenter.hpp"




int main( ) {

	sf::RenderWindow window(sf::VideoMode(800, 600), "Move");
	window.setFramerateLimit(120);


	float delta_t;
	Clock dt_clock;

	const float gridSize = 50.f;

	float blockSpeed = 100.f;
	Vector2f blockVelocity;




	//object:
	RectangleShape player;
	player.setFillColor(Color::Green);
	player.setSize(Vector2f(gridSize, gridSize));



	//walls:
	std::vector<RectangleShape> walls;

	RectangleShape wall;
	wall.setFillColor(Color::Red);
	wall.setSize(Vector2f(gridSize, gridSize));
	wall.setPosition(gridSize * 5, gridSize * 2);

	walls.push_back(wall);


	FloatRect nextPos;





	while (window.isOpen()) {

		delta_t = dt_clock.restart().asSeconds();

		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		/*Player Movement*/
			//initializing the velocity.
		blockVelocity.x = 0.f;
		blockVelocity.y = 0.f;


		//screen collision:
		if (Keyboard::isKeyPressed(Keyboard::Up)) {

			blockVelocity.y += -blockSpeed * delta_t;
		}
		if (Keyboard::isKeyPressed(Keyboard::Down)) {
			blockVelocity.y += blockSpeed * delta_t;
		}
		if (Keyboard::isKeyPressed(Keyboard::Left)) {
			blockVelocity.x += -blockSpeed * delta_t;
		}
		if (Keyboard::isKeyPressed(Keyboard::Right)) {
			blockVelocity.x += blockSpeed * delta_t;
		}


		//regular collision:

		for (auto& wall : walls) {

			FloatRect playerBounds = player.getGlobalBounds();
			FloatRect wallBounds = wall.getGlobalBounds();

			nextPos = playerBounds;
			nextPos.left += blockVelocity.x;
			nextPos.top += blockVelocity.y;


			if (wallBounds.intersects(nextPos)) {

				//right collision:

				blockVelocity.x = 0.f;
				blockVelocity.y = 0.f;

			}

		}




		player.move(blockVelocity);
		//

		//collision screen
			//left collision:
		if (player.getPosition().x < 0.f) {
			player.setPosition(0, player.getPosition().y);
		}
		//top collision:
		if (player.getPosition().y < 0.f) {
			player.setPosition(player.getPosition().x, 0.f);
		}
		//right collision:
		if (player.getPosition().x + player.getGlobalBounds().width > 800.f) {
			player.setPosition(800.f - player.getGlobalBounds().width, player.getPosition().y);
		}
		//down collision:
		if (player.getPosition().y + player.getGlobalBounds().height > 600.f) {
			player.setPosition(player.getPosition().x, 600.f - player.getGlobalBounds().height);
		}


		window.clear();

		window.draw(player);

		for (auto& i : walls) {

			window.draw(i);
		}



		window.display();


	}


	return 0;
}