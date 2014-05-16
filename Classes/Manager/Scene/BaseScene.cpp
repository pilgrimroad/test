#include "BaseScene.h"

bool BaseScene::Init()
{
	bool bRet = false;
	do{
		CC_BREAK_IF(!CCLayer::init());
		_WinSize = CCDirector::sharedDirector()->getWinSize();
		_bRes = false;

		this->setTouchEnabled(true);
		this->setKeypadEnabled(true);
		
		bRet=true;
	}while(0);

	return bRet;
}


void BaseScene::LoadRes( const char * res[],int len )
{
	_bRes = true;
}

void BaseScene::ReleaseRes( const char *res[],int len )
{

}

void BaseScene::EnterScene( CCScene* scene )
{
	CCDirector::sharedDirector()->replaceScene(scene);
}

void BaseScene::KeyBackClicked()
{

}

void BaseScene::KeyMenuClicked()
{

}

CCNode* BaseScene::CreateCocosBuilder( const char * pCCBFileName, const char * pCCNodeName /*= NULL*/, CCNodeLoader * pCCNodeLoader /*= NULL*/ )
{
	return NULL;
}

