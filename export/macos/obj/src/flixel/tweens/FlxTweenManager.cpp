// Generated by Haxe 4.1.5
#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ae747326964aa7c_742_new,"flixel.tweens.FlxTweenManager","new",0x3916c2b2,"flixel.tweens.FlxTweenManager.new","flixel/tweens/FlxTween.hx",742,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_QuadPath,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadPath",0xa68abf75,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadPath","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_LinearPath,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearPath",0x58c1abd3,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearPath","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_CircularMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CircularMotion",0xdd77ac1e,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CircularMotion","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_CubicMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CubicMotion",0x3bc2ad57,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CubicMotion","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_QuadMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadMotion",0x4adc7406,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadMotion","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_LinearMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearMotion",0x29edb3e4,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearMotion","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_ColorTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_ColorTween",0xd92edebb,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_ColorTween","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_AngleTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_AngleTween",0xb848364b,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_AngleTween","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_NumTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_NumTween",0xa10a3838,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_NumTween","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_VarTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_VarTween",0x2ab94ff7,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_VarTween","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_FlxTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_FlxTween",0xdb4849d9,"flixel.tweens.FlxTweenManager.add_flixel_tweens_FlxTween","flixel/tweens/FlxTween.hx",1072,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_771_tween,"flixel.tweens.FlxTweenManager","tween",0x3e92553d,"flixel.tweens.FlxTweenManager.tween","flixel/tweens/FlxTween.hx",771,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_799_num,"flixel.tweens.FlxTweenManager","num",0x3916d098,"flixel.tweens.FlxTweenManager.num","flixel/tweens/FlxTween.hx",799,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_821_angle,"flixel.tweens.FlxTweenManager","angle",0x4803eea5,"flixel.tweens.FlxTweenManager.angle","flixel/tweens/FlxTween.hx",821,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_843_color,"flixel.tweens.FlxTweenManager","color",0x6f7e1c35,"flixel.tweens.FlxTweenManager.color","flixel/tweens/FlxTween.hx",843,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_869_linearMotion,"flixel.tweens.FlxTweenManager","linearMotion",0x3e017969,"flixel.tweens.FlxTweenManager.linearMotion","flixel/tweens/FlxTween.hx",869,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_898_quadMotion,"flixel.tweens.FlxTweenManager","quadMotion",0x792d5e4b,"flixel.tweens.FlxTweenManager.quadMotion","flixel/tweens/FlxTween.hx",898,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_928_cubicMotion,"flixel.tweens.FlxTweenManager","cubicMotion",0x943ebf72,"flixel.tweens.FlxTweenManager.cubicMotion","flixel/tweens/FlxTween.hx",928,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_957_circularMotion,"flixel.tweens.FlxTweenManager","circularMotion",0xf22b9ce3,"flixel.tweens.FlxTweenManager.circularMotion","flixel/tweens/FlxTween.hx",957,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_980_linearPath,"flixel.tweens.FlxTweenManager","linearPath",0x87129618,"flixel.tweens.FlxTweenManager.linearPath","flixel/tweens/FlxTween.hx",980,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1012_quadPath,"flixel.tweens.FlxTweenManager","quadPath",0xc1021e7a,"flixel.tweens.FlxTweenManager.quadPath","flixel/tweens/FlxTween.hx",1012,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1029_destroy,"flixel.tweens.FlxTweenManager","destroy",0x1585b04c,"flixel.tweens.FlxTweenManager.destroy","flixel/tweens/FlxTween.hx",1029,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1035_update,"flixel.tweens.FlxTweenManager","update",0xdf5952f7,"flixel.tweens.FlxTweenManager.update","flixel/tweens/FlxTween.hx",1035,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1093_remove,"flixel.tweens.FlxTweenManager","remove",0x5cdc6932,"flixel.tweens.FlxTweenManager.remove","flixel/tweens/FlxTween.hx",1093,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1111_clear,"flixel.tweens.FlxTweenManager","clear",0x6d7d1c5f,"flixel.tweens.FlxTweenManager.clear","flixel/tweens/FlxTween.hx",1111,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1139_completeAll,"flixel.tweens.FlxTweenManager","completeAll",0x990abe3a,"flixel.tweens.FlxTweenManager.completeAll","flixel/tweens/FlxTween.hx",1139,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1152_forEach,"flixel.tweens.FlxTweenManager","forEach",0xb5bdacfc,"flixel.tweens.FlxTweenManager.forEach","flixel/tweens/FlxTween.hx",1152,0x5d58d691)
namespace flixel{
namespace tweens{

void FlxTweenManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_742_new)
HXLINE( 747)		this->_tweens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 751)		super::__construct();
HXLINE( 752)		this->set_visible(false);
HXLINE( 753)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->clear_dyn());
            	}

Dynamic FlxTweenManager_obj::__CreateEmpty() { return new FlxTweenManager_obj; }

void *FlxTweenManager_obj::_hx_vtable = 0;

Dynamic FlxTweenManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTweenManager_obj > _hx_result = new FlxTweenManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTweenManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x75cc77f0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x75cc77f0;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

 ::flixel::tweens::motion::QuadPath FlxTweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_QuadPath)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

 ::flixel::tweens::motion::LinearPath FlxTweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_LinearPath)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

 ::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_CircularMotion)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_CubicMotion)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_QuadMotion)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

 ::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_motion_LinearMotion)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

 ::flixel::tweens::misc::ColorTween FlxTweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_ColorTween)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

 ::flixel::tweens::misc::AngleTween FlxTweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_AngleTween)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

 ::flixel::tweens::misc::NumTween FlxTweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_NumTween)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_NumTween,return )

 ::flixel::tweens::misc::VarTween FlxTweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_misc_VarTween)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_VarTween,return )

 ::flixel::tweens::FlxTween FlxTweenManager_obj::add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1072_add_flixel_tweens_FlxTween)
HXLINE(1074)		if (::hx::IsNull( Tween )) {
HXLINE(1075)			return null();
            		}
HXLINE(1077)		this->_tweens->push(Tween);
HXLINE(1079)		if (Start) {
HXLINE(1080)			Tween->start();
            		}
HXLINE(1081)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_FlxTween,return )

 ::flixel::tweens::misc::VarTween FlxTweenManager_obj::tween( ::Dynamic Object, ::Dynamic Values,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_771_tween)
HXLINE( 772)		 ::flixel::tweens::misc::VarTween tween =  ::flixel::tweens::misc::VarTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 773)		tween->tween(Object,Values,Duration);
HXLINE( 774)		return this->add_flixel_tweens_misc_VarTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTweenManager_obj,tween,return )

 ::flixel::tweens::misc::NumTween FlxTweenManager_obj::num(Float FromValue,Float ToValue,::hx::Null< Float >  __o_Duration, ::Dynamic Options, ::Dynamic TweenFunction){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_799_num)
HXLINE( 800)		 ::flixel::tweens::misc::NumTween tween =  ::flixel::tweens::misc::NumTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 801)		tween->tween(FromValue,ToValue,Duration,TweenFunction);
HXLINE( 802)		return this->add_flixel_tweens_misc_NumTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,num,return )

 ::flixel::tweens::misc::AngleTween FlxTweenManager_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_821_angle)
HXLINE( 822)		 ::flixel::tweens::misc::AngleTween tween =  ::flixel::tweens::misc::AngleTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 823)		tween->tween(FromAngle,ToAngle,Duration,Sprite);
HXLINE( 824)		return this->add_flixel_tweens_misc_AngleTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,angle,return )

 ::flixel::tweens::misc::ColorTween FlxTweenManager_obj::color( ::flixel::FlxSprite Sprite,::hx::Null< Float >  __o_Duration,int FromColor,int ToColor, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_843_color)
HXLINE( 844)		 ::flixel::tweens::misc::ColorTween tween =  ::flixel::tweens::misc::ColorTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 845)		tween->tween(Duration,FromColor,ToColor,Sprite);
HXLINE( 846)		return this->add_flixel_tweens_misc_ColorTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,color,return )

 ::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_869_linearMotion)
HXLINE( 870)		 ::flixel::tweens::motion::LinearMotion tween =  ::flixel::tweens::motion::LinearMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 871)		tween->setObject(Object);
HXLINE( 872)		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration);
HXLINE( 873)		return this->add_flixel_tweens_motion_LinearMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxTweenManager_obj,linearMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_898_quadMotion)
HXLINE( 899)		 ::flixel::tweens::motion::QuadMotion tween =  ::flixel::tweens::motion::QuadMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 900)		tween->setObject(Object);
HXLINE( 901)		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration);
HXLINE( 902)		return this->add_flixel_tweens_motion_QuadMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxTweenManager_obj,quadMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_928_cubicMotion)
HXLINE( 929)		 ::flixel::tweens::motion::CubicMotion tween =  ::flixel::tweens::motion::CubicMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 930)		tween->setObject(Object);
HXLINE( 931)		tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration);
HXLINE( 932)		return this->add_flixel_tweens_motion_CubicMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxTweenManager_obj,cubicMotion,return )

 ::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_957_circularMotion)
HXLINE( 958)		 ::flixel::tweens::motion::CircularMotion tween =  ::flixel::tweens::motion::CircularMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 959)		tween->setObject(Object);
HXLINE( 960)		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration);
HXLINE( 961)		return this->add_flixel_tweens_motion_CircularMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC9(FlxTweenManager_obj,circularMotion,return )

 ::flixel::tweens::motion::LinearPath FlxTweenManager_obj::linearPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_980_linearPath)
HXLINE( 981)		 ::flixel::tweens::motion::LinearPath tween =  ::flixel::tweens::motion::LinearPath_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 983)		if (::hx::IsNotNull( Points )) {
HXLINE( 985)			int _g = 0;
HXDLIN( 985)			while((_g < Points->length)){
HXLINE( 985)				 ::flixel::math::FlxPoint point = Points->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 985)				_g = (_g + 1);
HXLINE( 987)				tween->addPoint(point->x,point->y);
            			}
            		}
HXLINE( 991)		tween->setObject(Object);
HXLINE( 992)		tween->setMotion(DurationOrSpeed,UseDuration);
HXLINE( 993)		return this->add_flixel_tweens_motion_LinearPath(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,linearPath,return )

 ::flixel::tweens::motion::QuadPath FlxTweenManager_obj::quadPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_1012_quadPath)
HXLINE(1013)		 ::flixel::tweens::motion::QuadPath tween =  ::flixel::tweens::motion::QuadPath_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE(1015)		if (::hx::IsNotNull( Points )) {
HXLINE(1017)			int _g = 0;
HXDLIN(1017)			while((_g < Points->length)){
HXLINE(1017)				 ::flixel::math::FlxPoint point = Points->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(1017)				_g = (_g + 1);
HXLINE(1019)				tween->addPoint(point->x,point->y);
            			}
            		}
HXLINE(1023)		tween->setObject(Object);
HXLINE(1024)		tween->setMotion(DurationOrSpeed,UseDuration);
HXLINE(1025)		return this->add_flixel_tweens_motion_QuadPath(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,quadPath,return )

void FlxTweenManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1029_destroy)
HXLINE(1030)		this->super::destroy();
HXLINE(1031)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->clear_dyn());
            	}


void FlxTweenManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1035_update)
HXLINE(1037)		::Array< ::Dynamic> finishedTweens = null();
HXLINE(1039)		{
HXLINE(1039)			int _g = 0;
HXDLIN(1039)			::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1039)			while((_g < _g1->length)){
HXLINE(1039)				 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1039)				_g = (_g + 1);
HXLINE(1041)				if (!(tween->active)) {
HXLINE(1042)					continue;
            				}
HXLINE(1044)				tween->update(elapsed);
HXLINE(1045)				if (tween->finished) {
HXLINE(1047)					if (::hx::IsNull( finishedTweens )) {
HXLINE(1048)						finishedTweens = ::Array_obj< ::Dynamic>::__new(0);
            					}
HXLINE(1049)					finishedTweens->push(tween);
            				}
            			}
            		}
HXLINE(1053)		if (::hx::IsNotNull( finishedTweens )) {
HXLINE(1055)			while((finishedTweens->length > 0)){
HXLINE(1057)				finishedTweens->shift().StaticCast<  ::flixel::tweens::FlxTween >()->finish();
            			}
            		}
            	}


 ::flixel::tweens::FlxTween FlxTweenManager_obj::remove( ::flixel::tweens::FlxTween Tween,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1093_remove)
HXLINE(1094)		if (::hx::IsNull( Tween )) {
HXLINE(1095)			return null();
            		}
HXLINE(1097)		Tween->set_active(false);
HXLINE(1099)		if (Destroy) {
HXLINE(1100)			Tween->destroy();
            		}
HXLINE(1102)		{
HXLINE(1102)			::Array< ::Dynamic> array = this->_tweens;
HXDLIN(1102)			int index = array->indexOf(Tween,null());
HXDLIN(1102)			if ((index != -1)) {
HXLINE(1102)				array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1102)				array->pop().StaticCast<  ::flixel::tweens::FlxTween >();
            			}
            		}
HXLINE(1104)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,remove,return )

void FlxTweenManager_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1111_clear)
HXLINE(1112)		{
HXLINE(1112)			int _g = 0;
HXDLIN(1112)			::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1112)			while((_g < _g1->length)){
HXLINE(1112)				 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1112)				_g = (_g + 1);
HXLINE(1114)				if (::hx::IsNotNull( tween )) {
HXLINE(1116)					tween->set_active(false);
HXLINE(1117)					tween->destroy();
            				}
            			}
            		}
HXLINE(1121)		this->_tweens->removeRange(0,this->_tweens->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,clear,(void))

void FlxTweenManager_obj::completeAll(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1139_completeAll)
HXDLIN(1139)		int _g = 0;
HXDLIN(1139)		::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1139)		while((_g < _g1->length)){
HXDLIN(1139)			 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1139)			_g = (_g + 1);
HXLINE(1140)			bool _hx_tmp;
HXDLIN(1140)			bool _hx_tmp1;
HXDLIN(1140)			if (((tween->type & 2) == 0)) {
HXLINE(1140)				_hx_tmp1 = ((tween->type & 4) == 0);
            			}
            			else {
HXLINE(1140)				_hx_tmp1 = false;
            			}
HXDLIN(1140)			if (_hx_tmp1) {
HXLINE(1140)				_hx_tmp = tween->active;
            			}
            			else {
HXLINE(1140)				_hx_tmp = false;
            			}
HXDLIN(1140)			if (_hx_tmp) {
HXLINE(1141)				tween->update(((Float)1.79e+308));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,completeAll,(void))

void FlxTweenManager_obj::forEach( ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1152_forEach)
HXDLIN(1152)		int _g = 0;
HXDLIN(1152)		::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1152)		while((_g < _g1->length)){
HXDLIN(1152)			 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1152)			_g = (_g + 1);
HXLINE(1153)			Function(tween);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTweenManager_obj,forEach,(void))


::hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__new() {
	::hx::ObjectPtr< FlxTweenManager_obj > __this = new FlxTweenManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTweenManager_obj *__this = (FlxTweenManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTweenManager_obj), true, "flixel.tweens.FlxTweenManager"));
	*(void **)__this = FlxTweenManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTweenManager_obj::FlxTweenManager_obj()
{
}

void FlxTweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTweenManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return ::hx::Val( num_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween_dyn() ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return ::hx::Val( _tweens ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { return ::hx::Val( quadPath_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return ::hx::Val( quadMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return ::hx::Val( linearPath_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return ::hx::Val( cubicMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"completeAll") ) { return ::hx::Val( completeAll_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return ::hx::Val( linearMotion_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return ::hx::Val( circularMotion_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTween") ) { return ::hx::Val( add_flixel_tweens_FlxTween_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return ::hx::Val( add_flixel_tweens_misc_NumTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return ::hx::Val( add_flixel_tweens_misc_VarTween_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return ::hx::Val( add_flixel_tweens_motion_QuadPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return ::hx::Val( add_flixel_tweens_misc_ColorTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return ::hx::Val( add_flixel_tweens_misc_AngleTween_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return ::hx::Val( add_flixel_tweens_motion_LinearPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return ::hx::Val( add_flixel_tweens_motion_QuadMotion_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return ::hx::Val( add_flixel_tweens_motion_CubicMotion_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return ::hx::Val( add_flixel_tweens_motion_LinearMotion_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return ::hx::Val( add_flixel_tweens_motion_CircularMotion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTweenManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tweens",47,85,9b,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTweenManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTweenManager_obj,_tweens),HX_("_tweens",47,85,9b,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTweenManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTweenManager_obj_sMemberFields[] = {
	HX_("add_flixel_tweens_motion_QuadPath",a3,dd,de,e6),
	HX_("add_flixel_tweens_motion_LinearPath",81,31,fc,6c),
	HX_("add_flixel_tweens_motion_CircularMotion",cc,a0,91,11),
	HX_("add_flixel_tweens_motion_CubicMotion",e9,1f,bd,da),
	HX_("add_flixel_tweens_motion_QuadMotion",b4,f9,16,5f),
	HX_("add_flixel_tweens_motion_LinearMotion",12,81,17,a6),
	HX_("add_flixel_tweens_misc_ColorTween",e9,fc,82,19),
	HX_("add_flixel_tweens_misc_AngleTween",79,54,9c,f8),
	HX_("add_flixel_tweens_misc_NumTween",e6,ce,88,53),
	HX_("add_flixel_tweens_misc_VarTween",a5,e6,37,dd),
	HX_("add_flixel_tweens_FlxTween",eb,31,6d,84),
	HX_("_tweens",47,85,9b,97),
	HX_("tween",6b,aa,70,19),
	HX_("num",46,de,53,00),
	HX_("angle",d3,43,e2,22),
	HX_("color",63,71,5c,4a),
	HX_("linearMotion",fb,45,d8,a1),
	HX_("quadMotion",5d,82,a5,33),
	HX_("cubicMotion",20,2b,e6,02),
	HX_("circularMotion",f5,31,bc,12),
	HX_("linearPath",2a,ba,8a,41),
	HX_("quadPath",0c,ba,6e,d2),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("remove",44,9c,88,04),
	HX_("clear",8d,71,5b,48),
	HX_("completeAll",e8,29,b2,07),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class FlxTweenManager_obj::__mClass;

void FlxTweenManager_obj::__register()
{
	FlxTweenManager_obj _hx_dummy;
	FlxTweenManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.FlxTweenManager",c0,41,37,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTweenManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTweenManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTweenManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTweenManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
