//
//  SneakyInputEX.cpp
//  learn4
//
//  Created by Lo Asher on 13-4-11.
//
//

#include "SneakyInputEX.h"
#include "SneakyJoystick.h"
#include "SneakyJoystickSkinnedBase.h"
#include "SneakyButton.h"
#include "SneakyButtonSkinnedBase.h"

SneakyJoystickSkinnedBase *SneakyInputEx::joystickSkinnedBase(Rect padRect, const char *backgroundSprite, const char *thumbSprite){
    SneakyJoystickSkinnedBase *joyStickBase = new SneakyJoystickSkinnedBase();
    if (joyStickBase) {
        joyStickBase->autorelease();
        joyStickBase->init();
        //操纵杆图片
        joyStickBase->setBackgroundSprite(Sprite::createWithSpriteFrameName(backgroundSprite));
        //缩略图
        joyStickBase->setThumbSprite(Sprite::createWithSpriteFrameName(thumbSprite));
        joyStickBase->setPosition(48, 48);
        
        //操作杆
        SneakyJoystick *joyStick = new SneakyJoystick();
        if (joyStick) {
            joyStick->autorelease();
            joyStick->initWithRect(padRect);
            joyStickBase->setJoystick(joyStick);
            return joyStickBase;
        }
    }
    return NULL;    
}
SneakyButtonSkinnedBase *SneakyInputEx::buttonSkinnedBase(Rect btnRect, const char *defaultSprite, const char *activeSprite){
    //添加游戏按钮
    SneakyButtonSkinnedBase *buttonBase = new SneakyButtonSkinnedBase();
    if (buttonBase) {
        buttonBase->autorelease();
        buttonBase->init();
        buttonBase->setDefaultSprite(Sprite::createWithSpriteFrameName(defaultSprite));
        buttonBase->setActivatedSprite(Sprite::createWithSpriteFrameName(activeSprite));
        buttonBase->setPressSprite(Sprite::createWithSpriteFrameName(activeSprite));
    }
    
    
    SneakyButton *button = new SneakyButton();
    if (button) {
        button->autorelease();
        button->initWithRect(btnRect);
        button->setIsToggleable(false);
        button->setIsHoldable(true);
        buttonBase->setButton(button);
        return buttonBase;
    }
    return NULL;
}
