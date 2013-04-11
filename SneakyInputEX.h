//
//  SneakyInputEX.h
//  learn4
//
//  Created by Lo Asher on 13-4-11.
//
//

#ifndef __SneakyInputEX__
#define __SneakyInputEX__
#include "cocos2d.h"
using namespace cocos2d;
class SneakyJoystickSkinnedBase;
class SneakyButtonSkinnedBase;
class SneakyInputEx{
public:
    //initialization joystick method 初始化操纵杆方法
    static SneakyJoystickSkinnedBase *joystickSkinnedBase(CCRect padRect, const char *backgroundSprite, const char *thumbSprite);
    //initialization button method 初始化按钮方法
    static SneakyButtonSkinnedBase * buttonSkinnedBase(CCRect btnRect, const char *defaultSprite, const char *activeSprite);
};

#endif /* defined(__learn4__SneakyInputEX__) */
