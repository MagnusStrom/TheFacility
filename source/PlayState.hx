package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.effects.chainable.FlxEffectSprite;
import flixel.addons.effects.chainable.FlxGlitchEffect;
import flixel.addons.effects.chainable.FlxWaveEffect;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;
import flixel.system.FlxSplash;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxCollision;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import openfl.display.FPS;
import openfl.filters.ColorMatrixFilter;
import openfl.filters.DisplacementMapFilter;
import openfl.geom.Matrix;
import openfl.geom.Point;

class PlayState extends FlxState
{
	public static var level = 1;

	public static var lastlevel:Int = 1;
	public static var debugmode:Bool = false;

	public static var hitcheckpoint:Bool = true;

	public static var checkpoint:FlxSprite;
	public static var turret:FlxSprite;

	public static var turretbullet:FlxSprite;

	public static var canshootturret:Bool = false;

	var canglitch:Bool = false;

	var cpSound:FlxSound; // ITS CHECKPOINT NOT CHILD... YOU KNOW

	var player:Player;

	/*public static var ground:FlxSprite;
		public static var ground2:FlxSprite;
		public static var ground3:FlxSprite;
		public static var ground4:FlxSprite; */
	public static var win:FlxSprite;

	var noHit:FlxTypedGroup<FlxSprite>;

	var text:FlxText;
	var text2:FlxText;
	var text3:FlxText;
	var yes:FlxText;
	var fps:FlxText;

	var screen:FlxSprite;

	var effectSprite:FlxEffectSprite;

	// the things that im too lazy to make an original fucntion for
	var movingthingy:FlxSprite;
	var BIGMAN:FlxSprite;

	// moosic
	var song1:FlxSound;
	var song2:FlxSound;

	override public function create()
	{
		FlxG.fixedTimestep = false;
		cpSound = FlxG.sound.load("assets/sounds/Checkpoint.mp3");

		text = new FlxText(100, 10, 300, "X: Poop Fart", 20);
		add(text);
		text.visible = false;
		text2 = new FlxText(100, 50, 300, "Y: Poop Fart 2", 20);
		add(text2);
		text2.visible = false;
		text3 = new FlxText(100, 95, 300, "HitCheckpoint: " + hitcheckpoint, 20);
		add(text3);
		text3.visible = false;

		super.create();
		player = new Player(20, 100);
		add(player);

		noHit = new FlxTypedGroup<FlxSprite>();
		add(noHit);
		var ground:FlxSprite = new FlxSprite(0, 0).makeGraphic(10, 500, FlxColor.GREEN);
		noHit.add(ground);
		var ground2:FlxSprite = new FlxSprite(-13, 475).makeGraphic(700, 10, FlxColor.GREEN);
		noHit.add(ground2);
		var ground3:FlxSprite = new FlxSprite(0, 0).makeGraphic(700, 10, FlxColor.GREEN);
		noHit.add(ground3);
		var ground4:FlxSprite = new FlxSprite(630, 10).makeGraphic(10, 600, FlxColor.GREEN);
		noHit.add(ground4);
		win = new FlxSprite(600, 400).makeGraphic(100, 100, FlxColor.YELLOW);
		add(win);

		// The text thats shown every level uno?
		yes = new FlxText(30, 20, "Move with WASD/Arrow keys", 30);
		add(yes);
		song1 = new FlxSound().loadEmbedded("assets/music/Final1.mp3", true, true);
		song1.volume = 1;
		song1.play();
		song2 = new FlxSound().loadEmbedded("assets/music/Final2.mp3", true, true);
		song2.volume = 1;
	}

	// SEXY HOT SINGLE MILF LEVEL LOADING SYSTEM
	function loadLevel(levelid)
	{
		switch (levelid)
		{
			case 2:
				var wall1:FlxSprite = new FlxSprite(0, 70).makeGraphic(200, 10, FlxColor.GREEN);
				noHit.add(wall1);
				var wall2:FlxSprite = new FlxSprite(0, 200).makeGraphic(100, 10, FlxColor.GREEN);
				noHit.add(wall2);
				yes.text = "Don't touch the green stuff";
			case 3:
				movingthingy = new FlxSprite(300, 150).makeGraphic(50, 100, FlxColor.BLUE);
				movingthingy.velocity.y = 200;
				noHit.add(movingthingy);
				yes.text = "Moving things. Don't touch";
			case 4:
				hitcheckpoint = false;
				checkpoint = new FlxSprite(400, 150).makeGraphic(50, 50, FlxColor.YELLOW);
				add(checkpoint);
				checkpoint.alpha = 0.5;
				yes.text = "Checkpoints. Must touch";
			case 5:
				hitcheckpoint = false;
				var wall3:FlxSprite = new FlxSprite(350, 140).makeGraphic(100, 10, FlxColor.GREEN);
				noHit.add(wall3);
				var wall4:FlxSprite = new FlxSprite(350, 200).makeGraphic(100, 10, FlxColor.GREEN);
				noHit.add(wall4);
				yes.text = "Follow the light";
			case 6:
				hitcheckpoint = false;
				var U1:FlxSprite = new FlxSprite(100, 200).makeGraphic(10, 500, FlxColor.GREEN);
				noHit.add(U1);
				var U2:FlxSprite = new FlxSprite(200, 75).makeGraphic(10, 350, FlxColor.GREEN);
				noHit.add(U2);
				var U3:FlxSprite = new FlxSprite(210, 425).makeGraphic(50, 10, FlxColor.GREEN);
				noHit.add(U3);
				var U4:FlxSprite = new FlxSprite(250, 75).makeGraphic(10, 350, FlxColor.GREEN);
				noHit.add(U4);
				var U5:FlxSprite = new FlxSprite(250, 70).makeGraphic(350, 10, FlxColor.GREEN);
				noHit.add(U5);
				yes.text = "The letter U";
			case 7:
				hitcheckpoint = false;
				yes.text = "As the goal gets harder..";
				var B1:FlxSprite = new FlxSprite(450, 150).makeGraphic(10, 500, FlxColor.GREEN);
				noHit.add(B1);
			case 8:
				hitcheckpoint = false;
				yes.text = "You may feel the end is near.";
				var S1:FlxSprite = new FlxSprite(80, 80).makeGraphic(10, 75, FlxColor.GREEN);
				noHit.add(S1);
			case 9:
				hitcheckpoint = false;
				yes.text = "But, I must tell you that...";
				var M1:FlxSprite = new FlxSprite(460, 460).makeGraphic(100, 10, FlxColor.GREEN);
				noHit.add(M1);
			case 10:
				song1.destroy();
				hitcheckpoint = false;
				player.frozen = true;
				new FlxTimer().start(5, function(tmr:FlxTimer)
				{
					player.frozen = false;
				});
				var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/THUD.mp3", false, true);
				sound.play();
				yes.text = "There is no ending.";
				FlxG.camera.shake(0.01, 2);
			case 11: // LEVEL DESIGNED BY BEEBOX BLAME THEM FOR THIS PAIN
				song2.play();
				hitcheckpoint = false;
				yes.text = "You're probably confused.";
				var cumwall:FlxSprite = new FlxSprite(300, 340).makeGraphic(150, 10, FlxColor.GREEN);
				var cumwall2electricboogaloo:FlxSprite = new FlxSprite(250, 410).makeGraphic(150, 10, FlxColor.GREEN);
				var cumwallthethird:FlxSprite = new FlxSprite(250, 270).makeGraphic(150, 10, FlxColor.GREEN);
				noHit.add(cumwall);
				noHit.add(cumwall2electricboogaloo);
				noHit.add(cumwallthethird);
			case 12:
				hitcheckpoint = false;
				yes.text = "I'm saying you can give up now.";
				var S2:FlxSprite = new FlxSprite(141, 150).makeGraphic(10, 100, FlxColor.GREEN);
				noHit.add(S2);
			case 13:
				hitcheckpoint = false;
				yes.size = 20;
				yes.text = "I can keep adding levels untill the game crashes.";
				var S2:FlxSprite = new FlxSprite(100, 200).makeGraphic(50, 10, FlxColor.GREEN);
				noHit.add(S2);
			case 14:
				hitcheckpoint = false;
				yes.size = 15;
				yes.text = "And if it crashes, that doesn't mean you've completed the game.";
				var S2:FlxSprite = new FlxSprite(250, 200).makeGraphic(50, 10, FlxColor.GREEN);
				noHit.add(S2);
			case 15:
				hitcheckpoint = false;
				yes.size = 30;
				yes.text = "Why are you still trying?";
				var E2:FlxSprite = new FlxSprite(586, 280).makeGraphic(150, 10, FlxColor.GREEN);
				noHit.add(E2);
			case 16:
				hitcheckpoint = false;
				yes.size = 20;
				yes.text = "I can make this hell for you, you know.";
				var E1:FlxSprite = new FlxSprite(450, 280).makeGraphic(100, 10, FlxColor.GREEN);
				noHit.add(E1);
			case 17:
				hitcheckpoint = false;
				yes.size = 20;
				yes.text = "I can make you shake.";
				FlxG.camera.shake(0.005, 1000);
				player.jittery = true;
				var E1:FlxSprite = new FlxSprite(450, 280).makeGraphic(75, 10, FlxColor.GREEN);
				noHit.add(E1);
			case 18:
				hitcheckpoint = false;
				yes.size = 20;
				yes.text = "Damn, you are persistent.";
				FlxG.camera.shake(0, 0.5); // i hope this works
				player.jittery = false;
				var ME2:FlxSprite = new FlxSprite(450, 70).makeGraphic(10, 30, FlxColor.GREEN);
				noHit.add(ME2);
			case 19: // CUTSCENE???
				hitcheckpoint = false;
				player.frozen = true;
				yes.text = "Ooh, I know what will work!";
				new FlxTimer().start(2, function(tmr:FlxTimer)
				{
					turret = new FlxSprite(400, 10).makeGraphic(50, 50, FlxColor.BLUE);
					add(turret);
					var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/tank_land.mp3", false, true);
					sound.play();
					new FlxTimer().start(1, function(tmr:FlxTimer)
					{
						yes.text = "A turret!";
						new FlxTimer().start(3, function(tmr:FlxTimer)
						{
							turretbullet = new FlxSprite(422, 41).makeGraphic(10, 25, FlxColor.RED);
							noHit.add(turretbullet);
							turretbullet.velocity.y = 550;
							canshootturret = true;
							player.frozen = false;
							yes.text = "Don't hit those bullets buddy.";
						});
					});
				});
			case 20:
				hitcheckpoint = false;
				yes.size = 15;
				yes.text = "Maybe if I make the bullets faster??";
				if (canshootturret == true)
				{
					turretbullet.velocity.y = 750;
				}
			case 21:
				hitcheckpoint = false;
				yes.size = 30;
				yes.text = "You are insane.";
				var MS1:FlxSprite = new FlxSprite(152, 300).makeGraphic(50, 10, FlxColor.GREEN);
				noHit.add(MS1);
			case 22:
				hitcheckpoint = false;
				yes.size = 15;
				yes.text = "I'm at my limit.";
			case 23:
				song2.destroy();
				hitcheckpoint = false;
				player.frozen = true;
				yes.size = 15;
				yes.text = "You know what? I'm done with this.";
				new FlxTimer().start(2, function(tmr:FlxTimer)
				{
					var RUMBLE = new FlxSound().loadEmbedded("assets/sounds/rumble.mp3", true, true);
					RUMBLE.play();
					FlxG.camera.shake(0.001, 1000);
					// rise character here
					// SpiritREAL.png
					new FlxTimer().start(2, function(tmr:FlxTimer)
					{
						FlxG.camera.shake(0.005, 1000);
						BIGMAN = new FlxSprite(0, 0).loadGraphic("assets/images/SpiritREAL.png");
						BIGMAN.screenCenter();
						BIGMAN.setGraphicSize(500);
						add(BIGMAN);
						canglitch = true; // reusing cuz lazy
						yes.text = "GET OUT OF MY GAME.";
						new FlxTimer().start(3, function(tmr:FlxTimer)
						{
							yes.text = "But you persisted, so now you feel the pain.";
							var glitch = new FlxSound().loadEmbedded("assets/sounds/glitch.mp3", true, true);
							glitch.play();
							FlxG.camera.shake(0.01, 1000);
							screen = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
							var waveEffect = new FlxGlitchEffect(2, 1, 0.5, FlxGlitchDirection.HORIZONTAL);
							var waveSprite = new FlxEffectSprite(screen, [waveEffect]);
							add(waveSprite);

							screen.drawFrame();
							var screenPixels = screen.framePixels;

							if (FlxG.renderBlit)
								screenPixels.copyPixels(FlxG.camera.buffer, FlxG.camera.buffer.rect, new Point());
							else
								screenPixels.draw(FlxG.camera.canvas, new Matrix(1, 0, 0, 1, 0, 0));
							new FlxTimer().start(4, function(tmr:FlxTimer)
							{
								FlxG.camera.shake(1, 1000);
								yes.text = "THIS ENDS NOW."; // USELESS CUZ GLITCH
								new FlxTimer().start(2, function(tmr:FlxTimer)
								{
									RUMBLE.destroy();
									glitch.destroy();
									FlxG.switchState(new CrashState());
								});
							});
							/*var rc:Float = 1 / 3;
								var gc:Float = 1 / 2;
								var bc:Float = 1 / 6;
								screenPixels.applyFilter(screenPixels, screenPixels.rect, new Point(),
									new ColorMatrixFilter([rc, gc, bc, 0, 0, rc, gc, bc, 0, 0, rc, gc, bc, 0, 0, 0, 0, 0, 1, 0])); */
						});
					});
				});
		}
	}

	/*switch (level)
		{
			case 2:
				yes.text = "Don't touch the green stuff";
			case 3:
				yes.text = "Moving things. Don't touch";
			case 4:
				yes.text = "Here's a tricky one";
			case 5:
				yes.text = "Perfect timing";
	}*/
	override public function update(elapsed:Float)
	{
		// and thus proceeds the most spagetti code in the world
		if (lastlevel > 18 && canshootturret == true)
		{
			if (turretbullet.y > 750)
			{
				var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/tank_shoot.mp3", false, true);
				sound.volume = 0.5;
				sound.play();
				turretbullet.x = 422;
				turretbullet.y = 0;
			}
		}
		if (lastlevel > 2)
		{
			if (movingthingy.y > 400)
			{
				movingthingy.velocity.y = -200;
			}
			if (movingthingy.y < 0)
			{
				movingthingy.velocity.y = 200;
			}
		}

		if (FlxG.overlap(player, noHit))
		{
			var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/hit" + FlxG.random.int(1, 5) + ".mp3", false, true);
			sound.play();
			if (lastlevel > 3 && hitcheckpoint == true)
			{
				player.x = 425;
				player.y = 175;
				player.velocity.x = 0;
				player.velocity.y = 0;
			}
			else
			{
				player.x = 20;
				player.y = 100;
				player.velocity.x = 0;
				player.velocity.y = 0;
			}
		}

		if (FlxG.overlap(player, win))
		{
			if (level > 3)
			{
				if (hitcheckpoint == true)
				{
					level++;
					player.x = 20;
					player.y = 100;
					var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/victory.mp3", false, true);
					sound.play();
					player.velocity.x = 0;
					player.velocity.y = 0;
				}
				else
				{
					player.x = 20;
					player.y = 100;
					var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/fail.mp3", false, true);
					sound.play();
					player.velocity.x = 0;
					player.velocity.y = 0;
				}
			}
			else
			{
				level++;
				player.x = 20;
				player.y = 100;
				var sound:FlxSound = new FlxSound().loadEmbedded("assets/sounds/victory.mp3", false, true);
				sound.play();
				player.velocity.x = 0;
				player.velocity.y = 0;
			}
		}
		if (lastlevel > 3)
		{
			if (FlxG.overlap(player, checkpoint) && hitcheckpoint == false)
			{
				hitcheckpoint = true;
				cpSound.play();
				player.velocity.x = 0;
				player.velocity.y = 0;
			}
		}
		// funny
		if (lastlevel != level)
		{
			loadLevel(level);
			lastlevel = level;
		}
		else
		{
			lastlevel = level;
		}

		super.update(elapsed);
		if (FlxG.keys.anyPressed([H]))
		{
			debugmode = true;
			text.visible = true;
			text2.visible = true;
			text3.visible = true;
		}
		if (debugmode)
		{
			text.text = "X: " + player.x;
			text2.text = "Y: " + player.y;
			text3.text = "HitCheckpoint: " + hitcheckpoint;
		}
	}
}
