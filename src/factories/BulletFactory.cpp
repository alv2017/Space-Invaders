/*
 * BulletFactory.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "BulletFactory.h"

void BulletFactory::createBullet(sf::Vector2f location){
	Bullet* bulletPtr = new Bullet(location, this->fConfig);
	this->fModels->push_back(bulletPtr);

	BulletView* bulletViewPtr = new BulletView(this->fConfig->window(), bulletPtr);
	this->fViews->push_back(bulletViewPtr);
}


BulletFactory::~BulletFactory() {
	// TODO Auto-generated destructor stub
}
