#include <MIDI.h>

#define RACER_01_SWEEP    0x6FF
#define RACER_02_SWEEP    0x6FF - 64
#define RACER_03_SWEEP    0x6FF + 16
#define RACER_04_SWEEP    0x6FF + 32
#define RACER_05_SWEEP    0x6FF - 32
#define RACER_06_SWEEP    0x6FF + 48
#define RACER_07_SWEEP    0x6FF
#define RACER_08_SWEEP    0x6FF

#define RACER_01_DURATION 300
#define RACER_02_DURATION 300
#define RACER_03_DURATION 300
#define RACER_04_DURATION 300
#define RACER_05_DURATION 300
#define RACER_06_DURATION 300
#define RACER_07_DURATION 300
#define RACER_08_DURATION 300


const u16 Racer01CrashTrack1[] =
{
  0x000, 0x000 + RACER_01_SWEEP, ENDSOUND,
  1, RACER_01_DURATION,
  14, 15, 
};

const u16 Racer02CrashTrack1[] =
{
  0x000, 0x000 + RACER_02_SWEEP, ENDSOUND,
  1, RACER_02_DURATION,
  14, 15,
};

const u16 Racer03CrashTrack1[] =
{
  0x000, 0x000 + RACER_03_SWEEP, ENDSOUND,
  1, RACER_03_DURATION,
  14, 15,
};

const u16 Racer04CrashTrack1[] =
{
  0x000, 0x000 + RACER_04_SWEEP, ENDSOUND,
  1, RACER_04_DURATION,
  14, 15,
};

const u16 Racer05CrashTrack1[] =
{
  0x000, 0x000 + RACER_05_SWEEP, ENDSOUND,
  1, RACER_05_DURATION,
  14, 15,
};

const u16 Racer06CrashTrack1[] =
{
  0x000, 0x000 + RACER_06_SWEEP, ENDSOUND,
  1, RACER_06_DURATION,
  14, 15,
};

const u16 Racer07CrashTrack1[] =
{
  0x000, 0x000 + RACER_07_SWEEP, ENDSOUND,
  1, RACER_07_DURATION,
  14, 15, 
};

const u16 Racer08CrashTrack1[] =
{
  0x000, 0x000 + RACER_08_SWEEP, ENDSOUND,
  1, RACER_08_DURATION,
  14, 15,
};
