
#ifndef USE_AFDT_H
#define USE_AFDT_H

#ifdef USE_AFDT
#include <libafdt/src/afdt.h>

#define C_AFDT_REQ_LISTENER_FD (uint8_t) 0x01
#define C_AFDT_CMD_SIZE sizeof(uint8_t)
#define C_AFDT_RSP_ERR (uint8_t) 0x01
#define C_AFDT_RSP_NO_SUCH_LISTENER (uint8_t) 0x02
#define C_AFDT_RSP_LISTENER_FD (uint8_t) 0x04
#endif // USE_AFDT

#endif // USE_AFDT_H
