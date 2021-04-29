package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei3995759y4:typey5:MUSICy2:idy27:assets%2Fmusic%2FFinal1.mp3y9:pathGroupaR4hy7:preloadtgoR0i2748151R1R2R3y27:assets%2Fmusic%2FFinal2.mp3R5aR7hR6tgoy4:pathy36:assets%2Fmusic%2Fmusic-goes-here.txtR0zR1y4:TEXTR3R9R6tgoR0i1771101R1R2R3y34:assets%2Fmusic%2FEnd_music_lol.mp3R5aR11hR6tgoR0i3050126R1R2R3y34:assets%2Fmusic%2FBackroomMoans.mp3R5aR12hR6tgoR0i2163982R1R2R3y31:assets%2Fmusic%2Fintromusic.mp3R5aR13hR6tgoR8y32:assets%2Fimages%2FSpiritREAL.pngR0i830319R1y5:IMAGER3R14R6tgoR8y33:assets%2Fimages%2FINTROSCREEN.pngR0i469976R1R15R3R16R6tgoR8y33:assets%2Fimages%2Finspiration.pngR0i123385R1R15R3R17R6tgoR8y26:assets%2Fimages%2Flogo.pngR0i24489R1R15R3R18R6tgoR8y26:assets%2Fimages%2Fplay.xmlR0i1519R1R10R3R19R6tgoR8y33:assets%2Fimages%2FPlay-button.pngR0i206613R1R15R3R20R6tgoR8y26:assets%2Fimages%2Fplay.pngR0i219991R1R15R3R21R6tgoR8y36:assets%2Fimages%2Fimages-go-here.txtR0zR1R10R3R22R6tgoR8y26:assets%2Fimages%2FfortniteR0i74002R1y6:BINARYR3R23R6tgoR0i17646R1R2R3y31:assets%2Fsounds%2Ftank_land.mp3R5aR25hR6tgoR0i5659R1R2R3y26:assets%2Fsounds%2Ffail.mp3R5aR26hR6tgoR0i10225R1R2R3y26:assets%2Fsounds%2Fhit2.mp3R5aR27hR6tgoR0i21338R1R2R3y26:assets%2Fsounds%2FTHUD.mp3R5aR28hR6tgoR0i6521R1R2R3y26:assets%2Fsounds%2Fhit3.mp3R5aR29hR6tgoR0i44843R1R2R3y29:assets%2Fsounds%2Fvictory.mp3R5aR30hR6tgoR0i12050R1R2R3y26:assets%2Fsounds%2Fhit1.mp3R5aR31hR6tgoR0i7798R1R2R3y26:assets%2Fsounds%2Fhit4.mp3R5aR32hR6tgoR0i7252R1R2R3y26:assets%2Fsounds%2Fhit5.mp3R5aR33hR6tgoR0i34982R1R2R3y37:assets%2Fsounds%2Fundertalemoment.mp3R5aR34hR6tgoR0i15312R1R2R3y32:assets%2Fsounds%2Ftank_shoot.mp3R5aR35hR6tgoR0i185488R1y5:SOUNDR3y31:assets%2Fsounds%2FExplosion.wavR5aR37hR6tgoR0i44845R1R2R3y28:assets%2Fsounds%2Frumble.mp3R5aR38hR6tgoR8y36:assets%2Fsounds%2Fsounds-go-here.txtR0zR1R10R3R39R6tgoR0i77970R1R2R3y28:assets%2Fsounds%2Fglitch.mp3R5aR40hR6tgoR0i11281R1R2R3y32:assets%2Fsounds%2FCheckpoint.mp3R5aR41hR6tgoR0i31910R1R2R3y30:assets%2Fsounds%2FBOOOOOOM.mp3R5aR42hR6tgoR8y34:assets%2Fdata%2Fdata-goes-here.txtR0zR1R10R3R43R6tgoR0i39706R1R2R3y28:flixel%2Fsounds%2Fflixel.mp3R5aR44y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR0i2114R1R2R3y26:flixel%2Fsounds%2Fbeep.mp3R5aR46y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR0i5794R1R36R3R47R5aR46R47hgoR0i33629R1R36R3R45R5aR44R45hgoR0i15744R1y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR3y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR0i29724R1R48R49y36:__ASSET__flixel_fonts_monsterrat_ttfR3y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR8y33:flixel%2Fimages%2Fui%2Fbutton.pngR0i519R1R15R3R54R6tgoR8y36:flixel%2Fimages%2Flogo%2Fdefault.pngR0i3280R1R15R3R55R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_final1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_final2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_end_music_lol_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_backroommoans_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_intromusic_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spiritreal_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_introscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_inspiration_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_play_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_play_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fortnite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_tank_land_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_fail_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_hit2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_thud_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_hit3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_victory_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_hit1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_hit4_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_hit5_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_undertalemoment_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_tank_shoot_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_explosion_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_rumble_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_glitch_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_checkpoint_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_boooooom_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/music/Final1.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_final1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/Final2.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_final2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/music/End_music_lol.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_end_music_lol_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/BackroomMoans.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_backroommoans_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/intromusic.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_intromusic_mp3 extends haxe.io.Bytes {}
@:keep @:image("assets/images/SpiritREAL.png") @:noCompletion #if display private #end class __ASSET__assets_images_spiritreal_png extends lime.graphics.Image {}
@:keep @:image("assets/images/INTROSCREEN.png") @:noCompletion #if display private #end class __ASSET__assets_images_introscreen_png extends lime.graphics.Image {}
@:keep @:image("assets/images/inspiration.png") @:noCompletion #if display private #end class __ASSET__assets_images_inspiration_png extends lime.graphics.Image {}
@:keep @:image("assets/images/logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends lime.graphics.Image {}
@:keep @:file("assets/images/play.xml") @:noCompletion #if display private #end class __ASSET__assets_images_play_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/Play-button.png") @:noCompletion #if display private #end class __ASSET__assets_images_play_button_png extends lime.graphics.Image {}
@:keep @:image("assets/images/play.png") @:noCompletion #if display private #end class __ASSET__assets_images_play_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/images/fortnite") @:noCompletion #if display private #end class __ASSET__assets_images_fortnite extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/tank_land.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_tank_land_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/fail.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_fail_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hit2.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_hit2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/THUD.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_thud_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hit3.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_hit3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/victory.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_victory_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hit1.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_hit1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hit4.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_hit4_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hit5.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_hit5_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/undertalemoment.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_undertalemoment_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/tank_shoot.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_tank_shoot_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Explosion.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_explosion_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/rumble.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_rumble_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/glitch.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_glitch_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Checkpoint.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_checkpoint_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/BOOOOOOM.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_boooooom_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("/usr/local/lib/haxe/lib/flixel/4,8,1/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("/usr/local/lib/haxe/lib/flixel/4,8,1/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("/usr/local/lib/haxe/lib/flixel/4,8,1/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("/usr/local/lib/haxe/lib/flixel/4,8,1/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("/usr/local/lib/haxe/lib/flixel/4,8,1/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("/usr/local/lib/haxe/lib/flixel/4,8,1/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
