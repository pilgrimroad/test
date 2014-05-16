#include "cocos2d.h"
#include "CCEGLView.h"
#include "SimpleAudioEngine.h"

#include "GameAudio.h"

using namespace CocosDenshion;

static GameAudio* m_pGameAudio = NULL;

void GameAudio::PreloadBackgroundMusic(  )
{

	
}

void GameAudio::PlayBackgroundMusic( )
{
	
}

GameAudio::GameAudio()
{

}

GameAudio::~GameAudio()
{

}

void GameAudio::PauseBackgroundMusic()
{
	SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

void GameAudio::ResumeBackgroundMusic()
{
	SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}

GameAudio* GameAudio::ShareGameAudio()
{
	if(!m_pGameAudio)
	{
		m_pGameAudio = new GameAudio();
	}
	return m_pGameAudio;
}


void GameAudio::SetVolume( ccKeypadMSGType nType )
{

}

void GameAudio::StopBackgroundMusic()
{
	SimpleAudioEngine::sharedEngine()->stopBackgroundMusic();
}

