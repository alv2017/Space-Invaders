/*
 * AlienView.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "AlienView.h"

void AlienView::draw(){
	// If the Alien is dead, do not draw
	if(this->fAlien->isDead()){
		return;
	}

	// Get the starting point
	sf::Vector2f alienLocation = this->fAlien->getLocation();

	// Do we need the open or closed version(ticktock)
	if(this->fAlien->getTickTock() == 0){
		sf::Texture texture;
		if (!texture.loadFromFile("Resources/Aliens/Russel/open.png")){
		    std::runtime_error("Resource couldn't be found!");
		}
		sf::Sprite sprite(texture);

		sprite.setPosition(alienLocation);

		this->fWindow->draw(sprite);
	}else if(this->fAlien->getTickTock() == 1){
		sf::Texture texture;
		if (!texture.loadFromFile("Resources/Aliens/Russel/closed.png")){
			std::runtime_error("Resource couldn't be found!");
		}
		sf::Sprite sprite(texture);

		sprite.setPosition(alienLocation);
		this->fWindow->draw(sprite);
	}
}

AlienView::~AlienView() {
	// TODO Auto-generated destructor stub
}

