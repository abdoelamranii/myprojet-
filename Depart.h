

#ifndef __DEPART_H__
#define __DEPART_H__

#include "cocos2d.h"

USING_NS_CC;

class Depart : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();


    virtual bool init();

    // a selector callback
    void GoToGameScene(Ref* pSender);






    // implement the "static create()" method manually
    CREATE_FUNC(Depart);

};

#endif 
