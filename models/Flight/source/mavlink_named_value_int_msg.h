/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.0
 */
#ifndef __MAVLINK_NAMED_VALUE_INT_MSG_H__
#define __MAVLINK_NAMED_VALUE_INT_MSG_H__
#ifdef __cplusplus
extern "C" {
#endif
#include "ivory.h"
#include "mavlinkSendModule.h"
#include "mavlink_pack_ivory.h"
struct named_value_int_msg {
    uint32_t time_boot_ms;
    int32_t value;
    uint8_t name[10U];
} __attribute__((__packed__));
void mavlink_named_value_int_msg_send(const struct named_value_int_msg* n_var0,
                                      uint8_t* n_var1, uint8_t n_var2[80U]);
void mavlink_named_value_int_unpack(struct named_value_int_msg* n_var0, const
                                    uint8_t* n_var1);

#ifdef __cplusplus
}
#endif
#endif /* __MAVLINK_NAMED_VALUE_INT_MSG_H__ */