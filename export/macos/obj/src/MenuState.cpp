// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f119275e66a7b90_9_new,"MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",9,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_14_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",14,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_41_clickPlay,"MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",41,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_46_update,"MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",46,0xdfbcb22c)

void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_9_new)
HXDLIN(   9)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x32c1072e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32c1072e;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_14_create)
HXLINE(  15)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  17)			::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/intromusic.mp3",f1,94,d7,8a),1,true,null());
            		}
HXLINE(  22)		 ::flixel::FlxSprite menusprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->loadGraphic(HX_("assets/images/MenuImage.png",cc,5d,2d,1e),null(),null(),null(),null(),null());
HXLINE(  23)		this->add(menusprite);
HXLINE(  24)		menusprite->setGraphicSize(500,null());
HXLINE(  25)		menusprite->screenCenter(null());
HXLINE(  27)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,100,10,300,HX_("19 Dolla Fortnite Card",97,71,bc,55),20,null());
HXLINE(  28)		this->add(text);
HXLINE(  29)		text->screenCenter(null());
HXLINE(  30)		{
HXLINE(  30)			 ::flixel::text::FlxText _g = text;
HXDLIN(  30)			_g->set_y((_g->y - ( (Float)(100) )));
            		}
HXLINE(  20)		 ::flixel::ui::FlxButton playButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Play",14,5a,33,35),this->clickPlay_dyn());
HXLINE(  33)		this->add(playButton);
HXLINE(  34)		playButton->screenCenter(null());
HXLINE(  36)		this->super::create();
            	}


void MenuState_obj::clickPlay(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_41_clickPlay)
HXDLIN(  41)		 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  41)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  41)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

void MenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_46_update)
HXDLIN(  46)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MenuState_obj *__this = (MenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(menusprite,"menusprite");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menusprite,"menusprite");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return ::hx::Val( clickPlay_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menusprite") ) { return ::hx::Val( menusprite ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"menusprite") ) { menusprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menusprite",e4,a2,85,71));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MenuState_obj,menusprite),HX_("menusprite",e4,a2,85,71)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_("menusprite",e4,a2,85,71),
	HX_("create",fc,66,0f,7c),
	HX_("clickPlay",5c,9a,59,29),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	MenuState_obj _hx_dummy;
	MenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuState",d2,bf,b6,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
