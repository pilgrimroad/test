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
	// ��ʾ��С����Ļ��С�� 
	CCSize  _WinSize;


	CCNode* CreateCocosBuilder(const char * pCCBFileName, const char * pCCNodeName = NULL, CCNodeLoader * pCCNodeLoader = NULL);

public:
	virtual bool Init();
	CREATE_FUNC(BaseScene);
	//android���ؼ�
	virtual void KeyBackClicked();      

	//android�˵���
	virtual void KeyMenuClicked();      

public:

	//�����л�
	virtual void EnterScene(CCScene* scene);

	//������Դ
	virtual void LoadRes(const char * res[],int len );

	//�ͷ���Դ
	virtual void ReleaseRes(const char * res[],int len );

};


#endif //__BASE_SCENE_H__