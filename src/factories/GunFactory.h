/*
 * GunFactory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNFACTORY_H_
#define GUNFACTORY_H_

#include "../libraries/Factory.h"
#include "../libraries/Config.h"
#include "../models/Gun.h"
#include "../views/GunView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

class GunFactory : public Factory {
public:
	GunFactory(std::list<Model*>* guns, std::list<View*>* views, Config* config) : Factory(guns, views), fConfig(config){};
	void createBlaster(sf::Vector2f location);
	virtual ~GunFactory();
private:
	Config* fConfig;
};

#endif /* GUNFACTORY_H_ */