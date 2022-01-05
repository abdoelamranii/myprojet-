
#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    static cocos2d::DrawNode* drawNode;
    static cocos2d::Color4F color;
    static cocos2d::TintTo* action;


    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    Sprite* sprite;
    Sprite* _player;
    Sprite* _player1;
    Sprite* _player2;
    Sprite* _player3;
    Sprite* _player4;
    Sprite* _player0;
    Sprite* _DrawNode;
    Sprite* passage;
    Vector<Sprite*> passage1;

    int counter = 0;
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    void update(float dt);
    void GoToGameScene(Ref* pSender);
    void showMenu();

};

#endif // __HELLOWORLD_SCENE_H__
