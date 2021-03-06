/**
 * EventController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef EVENTCONTROLLER_H_
#define EVENTCONTROLLER_H_

#include "../libraries/Controller.h"
#include <SFML/Window.hpp>
#include <thread>
#include "../controllers/ScreenController.h"
#include "../controllers/MotionController.h"
#include "../entities/Game.h"

/**
 * @brief Controller which handles the events within the game
 */
class EventController : public Controller{
public:
	/**
	 * @brief Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	EventController(SI* si) : Controller(si){};

	/**
	 * @brief records an user defined event during the game
	 */
	void record(sf::Event event);

	/**
	 * @brief records an user defined event during the start screen
	 */
	void startScreen(sf::Event event);

	/**
	 * @brief records an user defined event during the gameover or gamewon screen
	 */
	void gameEndScreen(sf::Event event);

	virtual ~EventController();

};

#endif /** EVENTCONTROLLER_H_ */
