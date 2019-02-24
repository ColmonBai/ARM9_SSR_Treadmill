#include "dcm.h"

void DcmOpen (){
    if((dcm_fd=open(DCM_DEV, O_WRONLY))<0){
            printf("Error opening %s device\n", DCM_DEV);
    }
    ioctl (dcm_fd, DCM_IOCTRL_SETPWM, (512*10));
}

void DcmSetSpeed(int SPEED){
    ioctl (dcm_fd, DCM_IOCTRL_SETPWM, (SPEED));
}

void DcmClose (){
    close(dcm_fd);
}
