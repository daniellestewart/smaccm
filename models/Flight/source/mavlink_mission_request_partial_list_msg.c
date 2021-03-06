/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.0
 */
#include "mavlink_mission_request_partial_list_msg.h"

void mavlink_mission_request_partial_list_msg_send(const
                                                   struct mission_request_partial_list_msg* n_var0,
                                                   uint8_t* n_var1,
                                                   uint8_t n_var2[80U])
{
    uint8_t n_local0[6U] = {};
    uint8_t* n_ref1 = n_local0;
    int16_t n_deref2 = n_var0->start_index;
    
    mavlink_pack_int16_t((uint8_t*) n_ref1, 0U, n_deref2);
    
    int16_t n_deref3 = n_var0->end_index;
    
    mavlink_pack_int16_t((uint8_t*) n_ref1, 2U, n_deref3);
    
    uint8_t n_deref4 = n_var0->target_system;
    
    mavlink_pack_uint8_t((uint8_t*) n_ref1, 4U, n_deref4);
    
    uint8_t n_deref5 = n_var0->target_component;
    
    mavlink_pack_uint8_t((uint8_t*) n_ref1, 5U, n_deref5);
    for (int32_t n_ix6 = 0; n_ix6 <= 5; n_ix6++) {
        ASSERTS(n_ix6 > 0 && 2147483647 - n_ix6 >= 6 || n_ix6 <= 0);
        if (n_ix6 + 6 >= 80) { } else {
            uint8_t n_deref7 = n_ref1[n_ix6];
            
            ASSERTS(n_ix6 > 0 && 2147483641 >= n_ix6 || n_ix6 <= 0);
            ASSERTS(0 <= 6 + n_ix6 && 6 + n_ix6 < 80);
            *&n_var2[(6 + n_ix6) % 80] = n_deref7;
        }
    }
    mavlinkSendWithWriter(37U, 212U, 6U, n_var1, n_var2);
    for (int32_t n_ix8 = 0; n_ix8 <= 65; n_ix8++) {
        ASSERTS(n_ix8 > 0 && 2147483647 - n_ix8 >= 14 || n_ix8 <= 0);
        ASSERTS(0 <= n_ix8 + 14 && n_ix8 + 14 < 80);
        *&n_var2[(n_ix8 + 14) % 80] = 0U;
    }
    return;
}

void mavlink_mission_request_partial_list_unpack(struct mission_request_partial_list_msg* n_var0,
                                                 const uint8_t* n_var1)
{
    int16_t n_r0 = mavlink_unpack_int16_t(n_var1, 0U);
    
    *&n_var0->start_index = n_r0;
    
    int16_t n_r1 = mavlink_unpack_int16_t(n_var1, 2U);
    
    *&n_var0->end_index = n_r1;
    
    uint8_t n_r2 = mavlink_unpack_uint8_t(n_var1, 4U);
    
    *&n_var0->target_system = n_r2;
    
    uint8_t n_r3 = mavlink_unpack_uint8_t(n_var1, 5U);
    
    *&n_var0->target_component = n_r3;
}