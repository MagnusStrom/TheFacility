package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup;
import flixel.util.FlxCollision;
import flixel.util.FlxColor;

class Player extends FlxSprite
{
	static inline var SPEED:Float = 200;

	public var frozen:Bool = false;
	public var jittery:Bool = false;

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		// frames = FlxAtlasFrames.fromSparrow("assets/images/limoDancer.png", 'assets/images/limoDancer.xml');
		// animation.addByPrefix("vibe", "bg dancer sketch PINK", 30, true);
		// setGraphicSize(100);
		updateHitbox();
		makeGraphic(16, 16, FlxColor.GRAY);
	}

	function updateMovement()
	{
		var up:Bool = false;
		var down:Bool = false;
		var left:Bool = false;
		var right:Bool = false;
		up = FlxG.keys.anyPressed([UP, W]);
		down = FlxG.keys.anyPressed([DOWN, S]);
		left = FlxG.keys.anyPressed([LEFT, A]);
		right = FlxG.keys.anyPressed([RIGHT, D]);
		// if (y < 17 || y > 684) {

		// } else {
		if (up || down || left || right)
		{
			if (up)
			{
				velocity.x = 0;
				velocity.y = -SPEED;
			}
			if (down)
			{
				velocity.x = 0;
				velocity.y = SPEED;
			}
			if (left)
			{
				velocity.x = -SPEED;
				velocity.y = 0;
			}
			if (right)
			{
				velocity.x = SPEED;
				velocity.y = 0;
			}
		}
	}

	override function update(elapsed:Float)
	{
		if (jittery == true)
		{
			x += FlxG.random.float(-0.5, 0.5);
			y += FlxG.random.float(-0.5, 0.5);
		}
		if (frozen == false)
		{
			updateMovement();
		}
		else
		{
			velocity.x = 0;
			velocity.y = 0;
		}
		updateHitbox();
		super.update(elapsed);
	}
}
