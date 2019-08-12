
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

#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK

extern const u8 SuperMarioBros3Track1Track1[];
extern const u8 SuperMarioBros3Track1Track2[];
extern const u8 SuperMarioBros3Track1Track3[];
extern const u8 SuperMarioBros3Track1Track4[];


#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxINT			0x00
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxINT			0x00
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxINT			0x00
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxINT			0x00

#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxLRV			0xFF
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxLRV			0xFF
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxLRV			0xFF
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxLRV			0xFF

#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxEV0			0x40
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxEV0			0x40
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxEV0			0x40
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxEV0			0x40

#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxEV1			0x00
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxEV1			0x00
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxEV1			0x00
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxEV1			0x00

#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_WAVEFORM		squareWaveForm
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_WAVEFORM		squareWaveForm
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_WAVEFORM		squareWaveForm
#define SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_WAVEFORM		pianoWaveForm



SoundChannelConfigurationROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_1_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxINT,

	/// Volume SxLRV
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxLRV,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxEV0,

	/// SxEV1
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_SxEV1,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_1_WAVEFORM,

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_2_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxINT,

	/// Volume SxLRV
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxLRV,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxEV0,

	/// SxEV1
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_SxEV1,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_2_WAVEFORM,

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_3_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxINT,

	/// Volume SxLRV
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxLRV,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxEV0,

	/// SxEV1
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_SxEV1,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_3_WAVEFORM,

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_4_CONFIGURATION =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxINT,

	/// Volume SxLRV
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxLRV,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxEV0,

	/// SxEV1
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_SxEV1,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	SUPER_MARIO_BROS_3_TRACK_1_SOUND_TRACK_4_WAVEFORM,

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_1 =
{
	/// Configuration
	(SoundChannelConfiguration*) &SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_1_CONFIGURATION,

	/// Length
	0,

	/// Sound track
	{
		SuperMarioBros3Track1Track1
	}
};

SoundChannelROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_2 =
{
	/// Configuration
	(SoundChannelConfiguration*) &SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_2_CONFIGURATION,

	/// Length
	0,

	/// Sound track
	{
		SuperMarioBros3Track1Track2
	}
};

SoundChannelROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_3 =
{
	/// Configuration
	(SoundChannelConfiguration*) &SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_3_CONFIGURATION,

	/// Length
	0,

	/// Sound track
	{
		SuperMarioBros3Track1Track3
	}
};

SoundChannelROM SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_4 =
{
	/// Configuration
	(SoundChannelConfiguration*) &SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_4_CONFIGURATION,

	/// Length
	0,

	/// Sound track
	{
		SuperMarioBros3Track1Track4
	}
};

SoundChannelROM* SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNELS[] =
{
	&SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_1,
	&SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_2,
	&SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_3,
	&SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNEL_4,
	NULL
};

SoundROM SUPER_MARIO_BROS_3_TRACK_1_SOUND =
{
	/// Name
	"Super Mario Bros 3 - Track 1",

	/// Play in loop
	true,

	/// Target timer resolution in us
	4180,

	/// Tracks
	(SoundChannel**)SUPER_MARIO_BROS_3_TRACK_1_SOUND_CHANNELS
};