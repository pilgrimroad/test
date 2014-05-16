#ifndef __FIRST_SCENE_H__
#define __FIRST_SCENE_H__
#include "BaseScene.h"


class FirstScene : public BaseScene
{
private:

	FirstScene();

public:

	~FirstScene();

	virtual bool Init();
	CREATE_FUNC(FirstScene);

	static CCScene* Scene();

};
#endif//__FIRST_SCENE_H__