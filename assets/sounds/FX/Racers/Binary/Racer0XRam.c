#include <MIDI.h>

#define RACER_01_SWEEP    0x7F8
#define RACER_02_SWEEP    0x7F0
#define RACER_03_SWEEP    0x7FA
#define RACER_04_SWEEP    0x7FC
#define RACER_05_SWEEP    0x7F4
#define RACER_06_SWEEP    0x7FF
#define RACER_07_SWEEP    0x7FF
#define RACER_08_SWEEP    0x7FF

#define RACER_01_DURATION 250
#define RACER_02_DURATION 250
#define RACER_03_DURATION 250
#define RACER_04_DURATION 250
#define RACER_05_DURATION 250
#define RACER_06_DURATION 250
#define RACER_07_DURATION 250
#define RACER_08_DURATION 250


const u16 Racer01RamTrack1[] =
{
  0x000, 0x000 + RACER_01_SWEEP, ENDSOUND,
  1, RACER_01_DURATION,
  14, 15, 
};

const u16 Racer02RamTrack1[] =
{
  0x000, 0x000 + RACER_02_SWEEP, ENDSOUND,
  1, RACER_02_DURATION,
  14, 15,
};

const u16 Racer03RamTrack1[] =
{
  0x000, 0x000 + RACER_03_SWEEP, ENDSOUND,
  1, RACER_03_DURATION,
  14, 15,
};

const u16 Racer04RamTrack1[] =
{
  0x000, 0x000 + RACER_04_SWEEP, ENDSOUND,
  1, RACER_04_DURATION,
  14, 15,
};

const u16 Racer05RamTrack1[] =
{
  0x000, 0x000 + RACER_05_SWEEP, ENDSOUND,
  1, RACER_05_DURATION,
  14, 15,
};

const u16 Racer06RamTrack1[] =
{
  0x000, 0x000 + RACER_06_SWEEP, ENDSOUND,
  1, RACER_06_DURATION,
  14, 15,
};

const u16 Racer07RamTrack1[] =
{
  0x000, 0x000 + RACER_07_SWEEP, ENDSOUND,
  1, RACER_07_DURATION,
  14, 15, 
};

const u16 Racer08RamTrack1[] =
{
  0x000, 0x000 + RACER_08_SWEEP, ENDSOUND,
  1, RACER_08_DURATION,
  14, 15,
};