

#include "trackVisImage.h"

#include "TrackIOConverterCLP.h"

int main (int argc, char* argv[])
{
  PARSE_ARGS;

  return tv_reader_load(InputFileName.c_str(), OutputModel.c_str());
}
