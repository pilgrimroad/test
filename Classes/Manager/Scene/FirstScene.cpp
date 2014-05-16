#include "FirstScene.h"

FirstScene::FirstScene()
{

}

FirstScene::~FirstScene()
{

}

bool FirstScene::Init()
{
	bool bRet = false;

	do 
	{
		CC_BREAK_IF(! BaseScene::init());
		if (true)
		{

		}
		else
		{

		}

		bRet = true;

	} while (0);

	return bRet;
}


CCScene* FirstScene::Scene()
{
	CCScene* pScene = NULL;
	do 
	{
		pScene = CCScene::create();
		CC_BREAK_IF(! pScene);

		FirstScene* pFirstScene = FirstScene::create();
		CC_BREAK_IF(! pFirstScene);

		pScene->addChild(pFirstScene);

	} while (0);

	return pScene;
}



