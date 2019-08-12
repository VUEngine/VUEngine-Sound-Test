
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

extern const u8 SuperMarioKartTitleTrack1[];
extern const u8 SuperMarioKartTitleTrack2[];
extern const u8 SuperMarioKartTitleTrack3[];
extern const u8 SuperMarioKartTitleTrack4[];
extern const u8 SuperMarioKartTitleTrack5[];


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

SoundChannelConfigurationROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_1_CONFIGURATION =
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

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_2_CONFIGURATION =
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

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_3_CONFIGURATION =
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

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_4_CONFIGURATION =
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

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelConfigurationROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_5_CONFIGURATION =
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

	/// kSoundNormal, kSoundModulation, kSoundNoise
	kSoundNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_1 =
{
	/// Configuration
	(SoundChannelConfiguration*)&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_1_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		SuperMarioKartTitleTrack1
	}
};

SoundChannelROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_2 =
{
	/// Configuration
	(SoundChannelConfiguration*)&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_2_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		SuperMarioKartTitleTrack2
	}
};

SoundChannelROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_3 =
{
	/// Configuration
	(SoundChannelConfiguration*)&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_3_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		SuperMarioKartTitleTrack3
	}
};

SoundChannelROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_4 =
{
	/// Configuration
	(SoundChannelConfiguration*)&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_4_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		SuperMarioKartTitleTrack4
	}
};

SoundChannelROM SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_5 =
{
	/// Configuration
	(SoundChannelConfiguration*)&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_5_CONFIGURATION,

	/// Length (PCM)
	0,

	/// Sound track
	{
		SuperMarioKartTitleTrack5
	}
};


SoundChannelROM* SUPER_MARIO_KART_TITLE_SOUND_CHANNELS[] =
{
	&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_1,
	&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_2,
	&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_3,
	&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_4,
	&SUPER_MARIO_KART_TITLE_SOUND_CHANNEL_5,
	NULL
};

SoundROM SUPER_MARIO_KART_TITLE_SOUND =
{
	/// Name
	"Super Mario Kart - Title",

	/// Play in loop
	false,

	/// Target timer resolution in us
	980,

	/// Tracks
	(SoundChannel**)SUPER_MARIO_KART_TITLE_SOUND_CHANNELS
};