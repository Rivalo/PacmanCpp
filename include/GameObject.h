/*
 * GameObject.h
 *
 *  Created on: Mar 29, 2016
 *      Author: rick
 */

#ifndef SRC_GAMEOBJECT_H_
#define SRC_GAMEOBJECT_H_

#include "GameObjectStruct.h"

class Game;

class GameObject {
public:
	GameObject(int, int, Type, Direction);

	/* Get/Set function */
	void setStruct(GameObjectStruct);
	GameObjectStruct getStruct();

	void setLethal(bool);
	bool getLethal();
	void setPassable(bool);
	bool getPassable();
	void setEdible(bool);
	bool getEdible();

	void setScore(int);
	int getScore();

	void setLocation(int, int);

	void setType(Type);
	void setSpriteDirection(Direction);

	void setPtr(Game*);
	Game* getPtr();
	void Reset();

private:
	GameObjectStruct Info;
	bool Lethal;
	bool Passable;
	bool Edible;
	int Score;
	GameObjectStruct DefaultStruct;

	Game* GamePtr;

};

#endif /* SRC_GAMEOBJECT_H_ */
