#ifndef __BATCH_COMPUTE_MAIN_H__
#define __BATCH_COMPUTE_MAIN_H__

#include <QtGlobal>
#include <vector>
#include "v3d_message.h"
#include <v3d_interface.h>
using namespace std;
bool batch_compute_main(const V3DPluginArgList & input, V3DPluginArgList & output);
void printHelp_batch_compute();
#endif
