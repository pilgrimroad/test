#ifndef __GAME_AUDIO_H__
#define __GAME_AUDIO_H__

#include "cocos2d.h"
USING_NS_CC;


class GameAudio: public CCObject
{
public:
	GameAudio();
	~GameAudio();

	static GameAudio* ShareGameAudio();

	 void PreloadBackgroundMusic();
	 void PlayBackgroundMusic();
	 void PauseBackgroundMusic();
	 void ResumeBackgroundMusic();

	 void StopBackgroundMusic();

	 void SetVolume(ccKeypadMSGType nType);

};


#endif //__GAME_AUDIO_H__