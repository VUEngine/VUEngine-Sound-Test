#include <MIDI.h>

#define RACER_01_FREQ    0x3E8
#define RACER_02_FREQ    0x2E8
#define RACER_03_FREQ    0x4E8
#define RACER_04_FREQ    0x5E8
#define RACER_05_FREQ    0x1E8
#define RACER_06_FREQ    0x6E8
#define RACER_07_FREQ    0x6E8
#define RACER_08_FREQ    0x6E8

#define RACER_01_DURATION 2000
#define RACER_02_DURATION 2000
#define RACER_03_DURATION 2000
#define RACER_04_DURATION 2000
#define RACER_05_DURATION 2000
#define RACER_06_DURATION 2000
#define RACER_07_DURATION 2000
#define RACER_08_DURATION 2000


const u16 Racer01ExplodeTrack1[] =
{
  0x000 + RACER_01_FREQ, 0x000 + RACER_01_FREQ, ENDSOUND,
  1, RACER_01_DURATION,
  14, 15,
  1, 1,
};

const u16 Racer02ExplodeTrack1[] =
{
  0x000 + RACER_02_FREQ, 0x000 + RACER_02_FREQ, ENDSOUND,
  1, RACER_02_DURATION,
  14, 15,
  1, 1,
};

const u16 Racer03ExplodeTrack1[] =
{
  0x000 + RACER_03_FREQ, 0x000 + RACER_03_FREQ, ENDSOUND,
  1, RACER_03_DURATION,
  14, 15,
  1, 1,
};

const u16 Racer04ExplodeTrack1[] =
{
  0x000 + RACER_04_FREQ, 0x000 + RACER_04_FREQ, ENDSOUND,
  1, RACER_04_DURATION,
  14, 15,
  1, 1,
};

const u16 Racer05ExplodeTrack1[] =
{
  0x000 + RACER_05_FREQ, 0x000 + RACER_05_FREQ, ENDSOUND,
  1, RACER_05_DURATION,
  14, 15,
};

const u16 Racer06ExplodeTrack1[] =
{
  0x000 + RACER_06_FREQ, 0x000 + RACER_06_FREQ, ENDSOUND,
  1, RACER_06_DURATION,
  14, 15,
  1, 1,
};

const u16 Racer07ExplodeTrack1[] =
{
  0x000 + RACER_07_FREQ, 0x000 + RACER_07_FREQ, ENDSOUND,
  1, RACER_07_DURATION,
  14, 15,
  1, 1,
};

const u16 Racer08ExplodeTrack1[] =
{
  0x000 + RACER_08_FREQ, 0x000 + RACER_08_FREQ, ENDSOUND,
  1, RACER_08_DURATION,
  14, 15,
  1, 1,
};
