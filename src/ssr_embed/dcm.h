#ifndef DCM_H
#define DCM_H

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>

#define DCM_IOCTRL_SETPWM (0x10)
#define DCM_DEV "/dev/dcm/0raw"

static int dcm_fd = -1;

void DcmOpen ();
void DcmSetSpeed(int SPEED);
void DcmClose ();

#endif // DCM_H
