#ifndef HELPER_H
#define HELPER_H

#include "params.h"
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <libinput.h>
#include <stdio.h>
#include <unistd.h>
#include <vector>

int
keyboard_event_callback(struct libinput_event* event, void* user_data);

#endif
