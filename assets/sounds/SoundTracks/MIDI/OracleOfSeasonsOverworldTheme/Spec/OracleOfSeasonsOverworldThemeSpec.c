
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
//												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern const u8 OracleOfSeasonsOverworldThemeTrack1[];
extern const u8 OracleOfSeasonsOverworldThemeTrack2[];
extern const u8 OracleOfSeasonsOverworldThemeTrack3[];


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

SoundChannelConfigurationROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_1_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	0x9F,

	/// Volume SxLRV
	0xFF,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	0x40,

	/// SxEV1
	0x00,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	sawtoothWaveForm,

	/// kChannelNormal, kChannelModulation, kChannelNoise
	kChannelNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_2_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	0x9F,

	/// Volume SxLRV
	0xFF,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	0x40,

	/// SxEV1
	0x00,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	sawtoothWaveForm,

	/// kChannelNormal, kChannelModulation, kChannelNoise
	kChannelNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_3_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	0x9F,

	/// Volume SxLRV
	0xFF,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	0x40,

	/// SxEV1
	0x00,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	sawtoothWaveForm,

	/// kChannelNormal, kChannelModulation, kChannelNoise
	kChannelNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_1 =
{
	/// Configuration
	(SoundChannelConfiguration*) &ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_1_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		OracleOfSeasonsOverworldThemeTrack1
	}
};

SoundChannelROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_2 =
{
	/// Configuration
	(SoundChannelConfiguration*) &ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_2_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		OracleOfSeasonsOverworldThemeTrack2
	}
};

SoundChannelROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_3 =
{
	/// Configuration
	(SoundChannelConfiguration*) &ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_3_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		OracleOfSeasonsOverworldThemeTrack3
	}
};


SoundChannelROM* ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNELS[] =
{
	&ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_1,
	&ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_2,
	&ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNEL_3,
	NULL
};

SoundROM ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND =
{
	/// Name
	"Oracle of Seasons - Overworld",

	/// Play in loop
	true,

	/// Target timer resolution in us
	880,

	/// Tracks
	(SoundChannel**)ORACLE_OF_SEASONS_OVERWORLD_THEME_SOUND_CHANNELS
};