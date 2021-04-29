package;

import flixel.FlxSprite;

class MoveWall extends FlxSprite
{
	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		velocity.y = 300;
	}
}
