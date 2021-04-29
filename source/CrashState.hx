package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.effects.chainable.FlxEffectSprite;
import flixel.addons.effects.chainable.FlxGlitchEffect;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import openfl.geom.Matrix;
import openfl.geom.Point;

class CrashState extends FlxState
{
	var menusprite:FlxSprite;

	var sound:FlxSound;

	var screen:FlxSprite;

	var myText:FlxText;

	var playButton:FlxButton;
	var moosic:FlxSound;

	override public function create()
	{
		moosic = new FlxSound().loadEmbedded("assets/music/End_music_lol.mp3", true, false);

		myText = new FlxText(0, 0, 500);
		myText.text = "Hello?";
		myText.size = 15;
		add(myText);
		myText.screenCenter();
		myText.visible = false;
		var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/BOOOOOOM.mp3", false, true);
		sound.play();
		new FlxTimer().start(10, function(tmr:FlxTimer)
		{
			myText.visible = true;
			new FlxTimer().start(4, function(tmr:FlxTimer)
			{
				moosic.play();
				myText.text = "I can't belive that happened...\n I never got that angry before.";
				new FlxTimer().start(4, function(tmr:FlxTimer)
				{
					myText.text = "And now, we're just trapped in void.";
					new FlxTimer().start(4, function(tmr:FlxTimer)
					{
						myText.text = "Just me and you.";
						playButton = new FlxButton(50, 100, "Did I win?", endScene);
						add(playButton);
					});
				});
			});
		});

		//	glitchThingy();

		super.create();
	}

	function glitchThingy()
	{
		screen = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
		var waveEffect = new FlxGlitchEffect(1, 1, 0.5, FlxGlitchDirection.HORIZONTAL);
		var waveSprite = new FlxEffectSprite(myText, [waveEffect]);
		add(waveSprite);
		waveSprite.x = myText.x;
		waveSprite.y = myText.y;
		myText.visible = false;
	}

	function endScene()
	{
		playButton.visible = false;
		new FlxTimer().start(4, function(tmr:FlxTimer)
		{
			myText.text = "What? Did you win?";
			new FlxTimer().start(4, function(tmr:FlxTimer)
			{
				myText.text = "Sure. Winning is useless in the end.";
				new FlxTimer().start(4, function(tmr:FlxTimer)
				{
					myText.text = "All that matters is....";
					new FlxTimer().start(4, function(tmr:FlxTimer)
					{
						moosic.destroy();
						myText.text = "There's no way out.";
						new FlxTimer().start(4, function(tmr:FlxTimer)
						{
							FlxG.switchState(new CreditsState());
						});
					});
				});
			});
		});
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
