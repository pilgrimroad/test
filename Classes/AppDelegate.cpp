#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "LifeCircleLogger.h"

#include "Config.h"
#include "UIInfo.h"
#include "FirstScene.h"
#include "GameAudio.h"
#include "PacketFactoryManager.h"

USING_NS_CC;

AppDelegate::AppDelegate() {
	LOG_FUNCTION_LIFE
}

AppDelegate::~AppDelegate() 
{
	LOG_FUNCTION_LIFE
}

bool AppDelegate::applicationDidFinishLaunching() {
	LOG_FUNCTION_LIFE

	CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_RGBA4444);

#if(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
	//android 平台初始化
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	//ios 平台初始化
#endif

    // initialize director
    CCDirector* pDirector = CCDirector::sharedDirector();
    CCEGLView* pEGLView = CCEGLView::sharedOpenGLView();

    pDirector->setOpenGLView(pEGLView);
	
	// 加载配置


	// 加载资源
#if(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
	//android
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	//ios
#endif

	//设置屏幕适配
	CCEGLView::sharedOpenGLView()->setDesignResolutionSize(GAME_LOGIC_WIDTH, GAME_LOGIC_HEIGHT, kResolutionNoBorder);

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	CCEGLView::sharedOpenGLView()->setWndProc( UIInfo::WndProc );
#endif // CC_TARGET_PLATFORM == CC_PLATFORM_WIN32

	//初始化协议
	g_pPacketFactoryManager = new PacketFactoryManager();
	g_pPacketFactoryManager->Init();

    // turn on display FPS
    pDirector->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(GAME_FPS);

    // create a scene. it's an autorelease object
    CCScene *pScene = FirstScene::Scene();

    // run
    pDirector->runWithScene(pScene);

	//加载音效
	GameAudio::ShareGameAudio()->PreloadBackgroundMusic();

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
	LOG_FUNCTION_LIFE
    CCDirector::sharedDirector()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
	LOG_FUNCTION_LIFE
    CCDirector::sharedDirector()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
