/*
 * Gun.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Gun.h"

Gun::Gun(sf::Vector2f location, int scale, Config* config) : fLocation(location), fScale(scale), Model(config){
	this->fSize.set(4*scale, 2*scale);
	this->fMovePixels = 10;
}

void Gun::move(util::Direction direction){
	if(direction == util::LEFT){
		int x = this->fLocation.x;
		x -= this->fMovePixels;
		if(x < 0){
			// Gun get's to close to border so do not change the value
			return;
		}else{
			this->fLocation.x = x;
		}
	}else if(direction == util::RIGHT){
		int x = this->fLocation.x;
		x += this->fMovePixels;
		int maxWidth = this->fConfig->screenWidth() - this->fSize.getWidth();
		if(x > maxWidth){
			// Gun get's to close to border so do not change the value
			return;
		}else{
			this->fLocation.x = x;
		}
	}

	this->fConfig->screenController()->redraw();
}

Gun::~Gun() {
	// TODO Auto-generated destructor stub
}

