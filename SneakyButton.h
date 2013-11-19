#ifndef __SNEAKY_BUTTON_H__
#define __SNEAKY_BUTTON_H__

#include "cocos2d.h"

class SneakyButton : public cocos2d::Node
{
protected:
    cocos2d::EventListenerTouch *_listener;

	cocos2d::Point center;
	float radiusSq;

	cocos2d::Rect bounds;

	CC_SYNTHESIZE(bool, status, Status);
	CC_SYNTHESIZE_READONLY(bool, active, IsActive);
	CC_SYNTHESIZE_READONLY(bool, value, Value);
	CC_SYNTHESIZE(bool, isHoldable, IsHoldable);
	CC_SYNTHESIZE(bool, isToggleable, IsToggleable);
	CC_SYNTHESIZE(float, rateLimit, RateLimit);

	CC_SYNTHESIZE_READONLY(float, radius, Radius);

	//Public methods
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	bool initWithRect(cocos2d::Rect rect);
	void limiter(float delta);
	void setRadius(float r);

	bool ccTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
	void ccTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event);
	void ccTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
	void ccTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *event);
};

#endif
