#ifndef __BASE_SCENE_H__
#define __BASE_SCENE_H__
#include "cocos2d.h"
#include "cocos-ext.h"


USING_NS_CC_EXT;
USING_NS_CC;

class BaseScene : public CCLayer
{
protected:

	bool _bRes;
	// 显示大小（屏幕大小） 
	CCSize  _WinSize;


	CCNode* CreateCocosBuilder(const char * pCCBFileName, const char * pCCNodeName = NULL, CCNodeLoader * pCCNodeLoader = NULL);

public:
	virtual bool Init();
	CREATE_FUNC(BaseScene);
	//android返回键
	virtual void KeyBackClicked();      

	//android菜单键
	virtual void KeyMenuClicked();      

public:

	//场景切换
	virtual void EnterScene(CCScene* scene);

	//加载资源
	virtual void LoadRes(const char * res[],int len );

	//释放资源
	virtual void ReleaseRes(const char * res[],int len );

};


#endif //__BASE_SCENE_H__