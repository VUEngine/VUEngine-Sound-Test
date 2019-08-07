
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
//												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <SoundManager.h>


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

#define STRANGER_THINGS_THEME_SOUND_TRACK STRANGER_THINGS_THEME_SOUND_TRACK

extern const u8 STRANGER_THINGS_THEME_SOUND_TRACK[];

#define STRANGER_THINGS_THEME_SOUND_TRACK_LENGTH		731100

#define WAVE_AMPLITUDE			63

const s8 strangerThingsThemeWave[32] =
{
	WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE,
	WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE,
	WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE,
	WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE, WAVE_AMPLITUDE,
};

SoundChannelConfigurationROM STRANGER_THINGS_THEME_SOUND_CHANNEL_CONFIGURATION =
{
	/// kMIDI, kPCM
	kPCM,

	/// SxINT
	0x00,

	/// Volume SxLRV
	0x00,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	0xF0,

	/// SxEV1
	0x00,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	strangerThingsThemeWave,

	/// Is modulation
	false
};

SoundChannelROM STRANGER_THINGS_THEME_SOUND_CHANNEL =
{
	/// Configuration
	(SoundChannelConfiguration*) &STRANGER_THINGS_THEME_SOUND_CHANNEL_CONFIGURATION,

	/// Length (PCM)
	STRANGER_THINGS_THEME_SOUND_TRACK_LENGTH,

	/// Sound track
	{
		STRANGER_THINGS_THEME_SOUND_TRACK
	}
};


SoundChannelROM* STRANGER_THINGS_THEME_SOUND_CHANNELS[] =
{
	&STRANGER_THINGS_THEME_SOUND_CHANNEL,
	NULL
};

SoundROM STRANGER_THINGS_THEME_SOUND =
{
	/// Name
	"Stranger Things Theme",

	/// Play in loop
	true,

	/// Syncronize channels
	false,

	/// Target timer resolution in us
	0,

	/// Tracks
	(SoundChannel**)STRANGER_THINGS_THEME_SOUND_CHANNELS
};