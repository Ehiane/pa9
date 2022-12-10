#include"testCases.hpp"



int main() {




	int option = 0; 
	Game runGame;
	testCases test;

	while (option != 3) {

		if (option == 1) {
			//run normal game

				///init Game Engine.
		

			//GAME LOOP:
			while (runGame.running()) {


				//update:
				runGame.update();


				//render:
				runGame.render();
			}

			//END OF APPLICATION:

			//TEST CASE LOOP:
			while (test.testRunning()) {




				//update:
				test.update();


				//render:
				test.render();


			}


		}if (option == 2) {
			//run test cases




		}if (option == 3) {
			//Exit


		}





	}

	




	


	return 0;
}
	

/**************************************************************
* NOTE:
//videomode - used to put the width and height of the window.



		//Event Polling:
		while (window.pollEvent(event)) {
			//while we are getting events from the window we want to save them to "event"

			switch (event.type) { //checks the event that happens when triggered

			case Event::Closed: //what happens click the close button.
				window.close(); //close the window
				break;

			case Event::KeyPressed:
				if (event.key.code == Keyboard::Escape) { //what happens when you click on the escape key.

					window.close();
				}
				break;

			}

		}//end of 1 frame.

		//UPDATE:




		//RENDER: (drawing it / actualizing your command.)
		window.clear(Color::Color(196, 164, 134));//clear previous frame, with background light brown .
		//window.draw()
		window.display();//display what has been drawn

***************************************************************/