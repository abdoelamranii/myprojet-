

#include "Depart.h"
#include "HelloWorldScene.h"


USING_NS_CC;


Scene* Depart::createScene()
{
    // create the scene with physics enabled
    auto scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));
    auto layer = Depart::create();
    scene->addChild(layer);
    return scene;
}

static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool Depart::init()
{
    //////////////////////////////
    // 1. super init first
    if (!Layer::init())
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();


    auto hello = Sprite::create("Ror.png");
    this->addChild(hello, 1);
    hello->setContentSize({ 700, 800 });
    hello->setPosition(visibleSize.width / 2 , visibleSize.height / 2);




    auto start = MenuItemImage::create("play.png", "play.png",
        CC_CALLBACK_1(Depart::GoToGameScene, this));

    auto menu1 = Menu::create(start, NULL);

    menu1->setPosition(350, 500);
   
    this->addChild(menu1, 3);

    return true;
}


void Depart::GoToGameScene(Ref* pSender) {
    auto scene = HelloWorld::createScene();
    Director::getInstance()->replaceScene(TransitionFade::create(2, scene));

}

