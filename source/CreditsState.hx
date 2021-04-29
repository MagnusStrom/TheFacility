package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import haxe.rtti.CType;

class CreditsState extends FlxState
{
	var menusprite:FlxSprite;

	var sound:FlxSound;
	var creditsText:FlxText;
	var replayText:FlxText;

	override public function create()
	{
		sound = new FlxSound().loadEmbedded("assets/music/intromusic.mp3", true, true);
		sound.play();

		var playButton:FlxButton;

		var introscreen = new FlxSprite(0, 0).loadGraphic("assets/images/INTROSCREEN.png");
		add(introscreen);
		introscreen.setGraphicSize(1000);
		introscreen.screenCenter();

		menusprite = new FlxSprite(0, 0).loadGraphic("assets/images/logo.png");
		add(menusprite);
		menusprite.setGraphicSize(500);
		menusprite.screenCenter();
		menusprite.y += 350;

		creditsText = new FlxText(0, 0, 500);
		creditsText.size = 30;
		creditsText.text = "'THE FACILITY'\n\nDIRECTOR: MAGNUSSTROM\n\nSOUND EFFECTS ARTIST: EVANCLUBYT\n\nCODING: MAGNUSSTROM\n\nADDITIONAL CODING: BEEBOX\n\nMUSIC: JELLYFISHEDM\n\nADDITIONAL MUSIC: EVANCLUBYT\n\nTESTING: PH47\n\nINSPIRED BY: THERE IS NO GAME";
		add(creditsText);
		creditsText.screenCenter();
		creditsText.y += 900;

		replayText = new FlxText(0, 0, 500);
		replayText.size = 30;
		replayText.text = "Thank you for playing!\n\nThis game was made in 3 days for\nA game jam.\n\nWith the theme: NO WAY OUT\n\nTo replay, just reload the page lol.";
		add(replayText);
		replayText.screenCenter();
		replayText.y += 1700;

		super.create();
	}

	function clickPlay()
	{
		sound.destroy();
		FlxG.camera.fade(FlxColor.WHITE, 1, false, function()
		{
			FlxG.switchState(new PlayState());
		});
	}

	override public function update(elapsed:Float)
	{
		trace(replayText.y);
		menusprite.y -= 1;
		creditsText.y -= 1;
		if (replayText.y > 0)
		{
			replayText.y -= 1;
		}
		super.update(elapsed);
	}
}
