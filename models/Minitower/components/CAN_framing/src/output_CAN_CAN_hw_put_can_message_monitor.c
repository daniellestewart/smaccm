/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.3
 */
#include "output_CAN_CAN_hw_put_can_message_monitor.h"
#include "smaccm_CAN_framing.h"

void callback_output_CAN_CAN_hw_put_can_message_2(const struct can_message *n_var0)
{
    //CAN_CAN_hw_put_can_message(n_var0);
    
    struct SMACCM_DATA__can_message_i smaccm_can_message = {};
    smaccm_can_message.id = n_var0->can_message_id;
    smaccm_can_message.dlc = n_var0->can_message_len;
    memcpy(smaccm_can_message.payload, n_var0->can_message_buf, n_var0->can_message_len);

    CAN_framing_write_fragment_request(&smaccm_can_message);
}