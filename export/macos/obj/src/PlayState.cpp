// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_10_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",10,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_35_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",35,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_67_loadLevel,"PlayState","loadLevel",0xc9ed252d,"PlayState.loadLevel","PlayState.hx",67,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_78_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",78,0xb30d7781)
static const int _hx_array_data_46c2835d_4[] = {
	(int)72,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_12_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",12,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_14_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",14,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_15_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",15,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_10_new)
HXDLIN(  10)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_35_create)
HXLINE(  36)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,100,10,300,HX_("X: Poop Fart",3f,a8,f9,f8),20,null());
HXLINE(  37)		this->add(this->text);
HXLINE(  38)		this->text->set_visible(false);
HXLINE(  39)		this->text2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,100,50,300,HX_("Y: Poop Fart 2",70,e5,90,2b),20,null());
HXLINE(  40)		this->add(this->text2);
HXLINE(  41)		this->text2->set_visible(false);
HXLINE(  44)		this->yes =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,20,null(),HX_("Hello",f2,a2,ee,b7),30,null());
HXLINE(  45)		this->add(this->yes);
HXLINE(  47)		this->super::create();
HXLINE(  48)		this->player =  ::Player_obj::__alloc( HX_CTX ,20,100);
HXLINE(  49)		this->noHit->add(this->player).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  51)		this->noHit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  52)		this->add(this->noHit);
HXLINE(  53)		 ::flixel::FlxSprite ground =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(10,500,-16744448,null(),null());
HXLINE(  54)		this->noHit->add(ground).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  55)		 ::flixel::FlxSprite ground2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-13,475,null())->makeGraphic(700,10,-16744448,null(),null());
HXLINE(  56)		this->noHit->add(ground2).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  57)		 ::flixel::FlxSprite ground3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(700,10,-16744448,null(),null());
HXLINE(  58)		this->noHit->add(ground3).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  59)		 ::flixel::FlxSprite ground4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,630,10,null())->makeGraphic(10,600,-16744448,null(),null());
HXLINE(  60)		this->noHit->add(ground4).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  61)		::PlayState_obj::win =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,600,400,null())->makeGraphic(100,100,-256,null(),null());
HXLINE(  62)		this->add(::PlayState_obj::win);
            	}


void PlayState_obj::loadLevel(int levelid){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_67_loadLevel)
HXDLIN(  67)		if ((levelid == 2)) {
HXLINE(  70)			::PlayState_obj::level1barrier =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,30,null())->makeGraphic(100,10,-16744448,null(),null());
HXLINE(  71)			this->add(::PlayState_obj::level1barrier);
HXLINE(  72)			::PlayState_obj::level1barrier2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,200,null())->makeGraphic(100,10,-16744448,null(),null());
HXLINE(  73)			this->add(::PlayState_obj::level1barrier2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,loadLevel,(void))

void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_78_update)
HXLINE(  79)		if (::flixel::FlxG_obj::overlap(this->player,this->noHit,null(),null())) {
HXLINE(  81)			this->player->set_x(( (Float)(20) ));
HXLINE(  82)			this->player->set_y(( (Float)(100) ));
            		}
HXLINE(  85)		if ((::PlayState_obj::lastlevel != ::PlayState_obj::level)) {
HXLINE(  87)			this->loadLevel(::PlayState_obj::level);
HXLINE(  88)			::PlayState_obj::lastlevel = ::PlayState_obj::level;
            		}
            		else {
HXLINE(  92)			::PlayState_obj::lastlevel = ::PlayState_obj::level;
            		}
HXLINE(  94)		this->super::update(elapsed);
HXLINE(  95)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_4,1),1)) {
HXLINE(  97)			::PlayState_obj::debugmode = true;
HXLINE(  98)			this->text->set_visible(true);
HXLINE(  99)			this->text2->set_visible(true);
            		}
HXLINE( 101)		if (::PlayState_obj::debugmode) {
HXLINE( 103)			this->text->set_text((HX_("X: ",fe,f8,42,00) + this->player->x));
HXLINE( 104)			this->text2->set_text((HX_("Y: ",3f,bb,43,00) + this->player->y));
            		}
HXLINE( 108)		switch((int)(::PlayState_obj::level)){
            			case (int)2: {
HXLINE( 111)				this->yes->set_text(HX_("Don't touch the green stuff",b7,bc,88,60));
            			}
            			break;
            			case (int)3: {
HXLINE( 113)				this->yes->set_text(HX_("Moving things oooooo",69,e4,16,2f));
            			}
            			break;
            			case (int)4: {
HXLINE( 115)				this->yes->set_text(HX_("Here's a tricky one",4f,23,2a,9c));
            			}
            			break;
            			case (int)5: {
HXLINE( 117)				this->yes->set_text(HX_("Perfect timing",5d,a5,15,a8));
            			}
            			break;
            		}
            	}


int PlayState_obj::level;

int PlayState_obj::lastlevel;

bool PlayState_obj::debugmode;

 ::flixel::FlxSprite PlayState_obj::win;

 ::flixel::FlxSprite PlayState_obj::level1barrier;

 ::flixel::FlxSprite PlayState_obj::level1barrier2;


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(noHit,"noHit");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(text2,"text2");
	HX_MARK_MEMBER_NAME(yes,"yes");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(noHit,"noHit");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(text2,"text2");
	HX_VISIT_MEMBER_NAME(yes,"yes");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"yes") ) { return ::hx::Val( yes ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noHit") ) { return ::hx::Val( noHit ); }
		if (HX_FIELD_EQ(inName,"text2") ) { return ::hx::Val( text2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadLevel") ) { return ::hx::Val( loadLevel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"win") ) { outValue = ( win ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { outValue = ( level ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastlevel") ) { outValue = ( lastlevel ); return true; }
		if (HX_FIELD_EQ(inName,"debugmode") ) { outValue = ( debugmode ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"level1barrier") ) { outValue = ( level1barrier ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"level1barrier2") ) { outValue = ( level1barrier2 ); return true; }
	}
	return false;
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"yes") ) { yes=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noHit") ) { noHit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text2") ) { text2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"win") ) { win=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastlevel") ) { lastlevel=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"debugmode") ) { debugmode=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"level1barrier") ) { level1barrier=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"level1barrier2") ) { level1barrier2=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("noHit",92,7c,a9,9f));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("text2",e5,4a,99,0d));
	outFields->push(HX_("yes",27,29,5c,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayState_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,noHit),HX_("noHit",92,7c,a9,9f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,text2),HX_("text2",e5,4a,99,0d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,yes),HX_("yes",27,29,5c,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PlayState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlayState_obj::level,HX_("level",84,15,63,72)},
	{::hx::fsInt,(void *) &PlayState_obj::lastlevel,HX_("lastlevel",6e,d3,e2,2b)},
	{::hx::fsBool,(void *) &PlayState_obj::debugmode,HX_("debugmode",36,4b,d3,40)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &PlayState_obj::win,HX_("win",1c,a8,5a,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &PlayState_obj::level1barrier,HX_("level1barrier",aa,00,50,35)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &PlayState_obj::level1barrier2,HX_("level1barrier2",48,94,b0,70)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("player",61,eb,b8,37),
	HX_("noHit",92,7c,a9,9f),
	HX_("text",ad,cc,f9,4c),
	HX_("text2",e5,4a,99,0d),
	HX_("yes",27,29,5c,00),
	HX_("create",fc,66,0f,7c),
	HX_("loadLevel",7e,61,9a,8d),
	HX_("update",09,86,05,87),
	::String(null()) };

static void PlayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::level,"level");
	HX_MARK_MEMBER_NAME(PlayState_obj::lastlevel,"lastlevel");
	HX_MARK_MEMBER_NAME(PlayState_obj::debugmode,"debugmode");
	HX_MARK_MEMBER_NAME(PlayState_obj::win,"win");
	HX_MARK_MEMBER_NAME(PlayState_obj::level1barrier,"level1barrier");
	HX_MARK_MEMBER_NAME(PlayState_obj::level1barrier2,"level1barrier2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::level,"level");
	HX_VISIT_MEMBER_NAME(PlayState_obj::lastlevel,"lastlevel");
	HX_VISIT_MEMBER_NAME(PlayState_obj::debugmode,"debugmode");
	HX_VISIT_MEMBER_NAME(PlayState_obj::win,"win");
	HX_VISIT_MEMBER_NAME(PlayState_obj::level1barrier,"level1barrier");
	HX_VISIT_MEMBER_NAME(PlayState_obj::level1barrier2,"level1barrier2");
};

#endif

::hx::Class PlayState_obj::__mClass;

static ::String PlayState_obj_sStaticFields[] = {
	HX_("level",84,15,63,72),
	HX_("lastlevel",6e,d3,e2,2b),
	HX_("debugmode",36,4b,d3,40),
	HX_("win",1c,a8,5a,00),
	HX_("level1barrier",aa,00,50,35),
	HX_("level1barrier2",48,94,b0,70),
	::String(null())
};

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = PlayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_12_boot)
HXDLIN(  12)		level = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_14_boot)
HXDLIN(  14)		lastlevel = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_15_boot)
HXDLIN(  15)		debugmode = false;
            	}
}

