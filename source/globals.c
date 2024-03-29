/* VUEngine - Virtual Utopia Engine <http://vuengine.planetvb.com/>
 * A universal game engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007, 2019 by Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <chris@vr32.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <Game.h>
#include <Debug.h>
#include <StageEditor.h>
#include <AnimationInspector.h>
#include <ToolState.h>
#include <SoundTest.h>


//---------------------------------------------------------------------------------------------------------
// 										DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern Sound ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND;
extern Sound SUPER_MARIO_BROS_3_TRACK_1_SOUND;
extern Sound MYSTIC_QUEST_OVERWORLD_SOUND;
extern Sound STRANGER_THINGS_THEME_SOUND;

extern Sound RACER_01_ENGINE_SOUND;
extern Sound RACER_02_ENGINE_SOUND;
extern Sound RACER_03_ENGINE_SOUND;

extern Sound RACER_01_CRASH_SOUND;
extern Sound RACER_02_CRASH_SOUND;
extern Sound RACER_03_CRASH_SOUND;

extern Sound RACER_01_EXPLODE_SOUND;
extern Sound RACER_02_EXPLODE_SOUND;
extern Sound RACER_03_EXPLODE_SOUND;

extern Sound RACER_01_RAM_SOUND;
extern Sound RACER_02_RAM_SOUND;
extern Sound RACER_03_RAM_SOUND;


//---------------------------------------------------------------------------------------------------------
// 										DEFINITIONS
//---------------------------------------------------------------------------------------------------------

#ifdef __DEBUG_TOOLS
const ClassSizeData _userClassesSizeData[] =
{
	{NULL, ""},
};
#endif


const UserObject _userObjects[] =
{
	{NULL, ""},
};

const UserAnimatedEntity _userAnimatedEntities[] =
{
	{NULL, ""},
};

SoundROM* const _userSounds[] =
{
	&STRANGER_THINGS_THEME_SOUND,
	&ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND,
	&SUPER_MARIO_BROS_3_TRACK_1_SOUND,
	&MYSTIC_QUEST_OVERWORLD_SOUND,
	//&RACER_01_ENGINE_SOUND,
	&RACER_02_ENGINE_SOUND,
	//&RACER_03_ENGINE_SOUND,
	//&RACER_01_CRASH_SOUND,
	//&RACER_02_CRASH_SOUND,
	//&RACER_03_CRASH_SOUND,
	//&RACER_01_EXPLODE_SOUND,
	//&RACER_02_EXPLODE_SOUND,
	&RACER_03_EXPLODE_SOUND,
	&RACER_01_RAM_SOUND,
	//&RACER_02_RAM_SOUND,
	//&RACER_03_RAM_SOUND,
	NULL
};

const ToolState _userToolStates[] =
{
	NULL
};

