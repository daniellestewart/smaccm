/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.0
 */
#include "tower_task_usercode_px4ioar_275.h"

uint8_t motorInit_282;

uint32_t bootAttempts_283;

float throttle_284[4U];

uint32_t timeoutDue100_machine_ioar_285_296;

uint32_t timeoutDue3_machine_ioar_285_299;

uint32_t timeoutDue7_machine_ioar_285_302;

uint32_t timeoutDue1_machine_ioar_285_305;

uint32_t timeoutDue200_machine_ioar_285_308;

uint32_t timeoutDue2_machine_ioar_285_312;

uint32_t periodDue5_machine_ioar_285_315;

bool state_active_machine_ioar_285 = false;

uint32_t state_machine_ioar_285 = 0U;

void nodeInit_px4ioar_275()
{
    uint32_t n_r0 = ivory_hw_io_read_u32(1073887280U);
    
    ivory_hw_io_write_u32(1073887280U, n_r0 | 1U << 2U);
    
    uint32_t n_r1 = ivory_hw_io_read_u32(1073874968U);
    
    ivory_hw_io_write_u32(1073874968U, n_r1 | 1U << 13U);
    
    uint32_t n_r2 = ivory_hw_io_read_u32(1073874944U);
    
    ivory_hw_io_write_u32(1073874944U, n_r2 & ~(3U << 26U) | (uint32_t) (1U <<
                                                                         0U) <<
                          26U);
    
    uint32_t n_r3 = ivory_hw_io_read_u32(1073874948U);
    
    ivory_hw_io_write_u32(1073874948U, n_r3 & ~(1U << 13U) | 0U << 13U);
    
    uint32_t n_r4 = ivory_hw_io_read_u32(1073874952U);
    
    ivory_hw_io_write_u32(1073874952U, n_r4 & ~(3U << 26U) | 0U << 26U);
    
    uint32_t n_r5 = ivory_hw_io_read_u32(1073874956U);
    
    ivory_hw_io_write_u32(1073874956U, n_r5 & ~(3U << 26U) | 0U << 26U);
    
    uint32_t n_r6 = ivory_hw_io_read_u32(1073887280U);
    
    ivory_hw_io_write_u32(1073887280U, n_r6 | 1U << 2U);
    
    uint32_t n_r7 = ivory_hw_io_read_u32(1073874968U);
    
    ivory_hw_io_write_u32(1073874968U, n_r7 | 1U << 4U);
    
    uint32_t n_r8 = ivory_hw_io_read_u32(1073874944U);
    
    ivory_hw_io_write_u32(1073874944U, n_r8 & ~(3U << 8U) | (uint32_t) (1U <<
                                                                        0U) <<
                          8U);
    
    uint32_t n_r9 = ivory_hw_io_read_u32(1073874948U);
    
    ivory_hw_io_write_u32(1073874948U, n_r9 & ~(1U << 4U) | 0U << 4U);
    
    uint32_t n_r10 = ivory_hw_io_read_u32(1073874952U);
    
    ivory_hw_io_write_u32(1073874952U, n_r10 & ~(3U << 8U) | 0U << 8U);
    
    uint32_t n_r11 = ivory_hw_io_read_u32(1073874956U);
    
    ivory_hw_io_write_u32(1073874956U, n_r11 & ~(3U << 8U) | 0U << 8U);
    
    uint32_t n_r12 = ivory_hw_io_read_u32(1073887280U);
    
    ivory_hw_io_write_u32(1073887280U, n_r12 | 1U << 2U);
    
    uint32_t n_r13 = ivory_hw_io_read_u32(1073874968U);
    
    ivory_hw_io_write_u32(1073874968U, n_r13 | 1U << 5U);
    
    uint32_t n_r14 = ivory_hw_io_read_u32(1073874944U);
    
    ivory_hw_io_write_u32(1073874944U, n_r14 & ~(3U << 10U) | (uint32_t) (1U <<
                                                                          0U) <<
                          10U);
    
    uint32_t n_r15 = ivory_hw_io_read_u32(1073874948U);
    
    ivory_hw_io_write_u32(1073874948U, n_r15 & ~(1U << 5U) | 0U << 5U);
    
    uint32_t n_r16 = ivory_hw_io_read_u32(1073874952U);
    
    ivory_hw_io_write_u32(1073874952U, n_r16 & ~(3U << 10U) | 0U << 10U);
    
    uint32_t n_r17 = ivory_hw_io_read_u32(1073874956U);
    
    ivory_hw_io_write_u32(1073874956U, n_r17 & ~(3U << 10U) | 0U << 10U);
    
    uint32_t n_r18 = ivory_hw_io_read_u32(1073887280U);
    
    ivory_hw_io_write_u32(1073887280U, n_r18 | 1U << 0U);
    
    uint32_t n_r19 = ivory_hw_io_read_u32(1073872920U);
    
    ivory_hw_io_write_u32(1073872920U, n_r19 | 1U << 0U);
    
    uint32_t n_r20 = ivory_hw_io_read_u32(1073872896U);
    
    ivory_hw_io_write_u32(1073872896U, n_r20 & ~(3U << 0U) | (uint32_t) (1U <<
                                                                         0U) <<
                          0U);
    
    uint32_t n_r21 = ivory_hw_io_read_u32(1073872900U);
    
    ivory_hw_io_write_u32(1073872900U, n_r21 & ~(1U << 0U) | 0U << 0U);
    
    uint32_t n_r22 = ivory_hw_io_read_u32(1073872904U);
    
    ivory_hw_io_write_u32(1073872904U, n_r22 & ~(3U << 0U) | 0U << 0U);
    
    uint32_t n_r23 = ivory_hw_io_read_u32(1073872908U);
    
    ivory_hw_io_write_u32(1073872908U, n_r23 & ~(3U << 0U) | 0U << 0U);
    
    uint32_t n_r24 = ivory_hw_io_read_u32(1073887280U);
    
    ivory_hw_io_write_u32(1073887280U, n_r24 | 1U << 0U);
    
    uint32_t n_r25 = ivory_hw_io_read_u32(1073872920U);
    
    ivory_hw_io_write_u32(1073872920U, n_r25 | 1U << 1U);
    
    uint32_t n_r26 = ivory_hw_io_read_u32(1073872896U);
    
    ivory_hw_io_write_u32(1073872896U, n_r26 & ~(3U << 2U) | (uint32_t) (1U <<
                                                                         0U) <<
                          2U);
    
    uint32_t n_r27 = ivory_hw_io_read_u32(1073872900U);
    
    ivory_hw_io_write_u32(1073872900U, n_r27 & ~(1U << 1U) | 0U << 1U);
    
    uint32_t n_r28 = ivory_hw_io_read_u32(1073872904U);
    
    ivory_hw_io_write_u32(1073872904U, n_r28 & ~(3U << 2U) | 0U << 2U);
    
    uint32_t n_r29 = ivory_hw_io_read_u32(1073872908U);
    
    ivory_hw_io_write_u32(1073872908U, n_r29 & ~(3U << 2U) | 0U << 2U);
    
    uint32_t n_r30 = ivory_hw_io_read_u32(1073874968U);
    
    ivory_hw_io_write_u32(1073874968U, n_r30 | 1U << 13U);
    *&bootAttempts_283 = 0U;
    begin_machine_ioar_285();
}

void eventhandler_px4ioar_275_per1_bootBegin_297(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 0U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&timeoutDue100_machine_ioar_285_296;
        
        if (n_deref2 > 0U && n_deref2 <= n_deref1) {
            uint32_t n_r4 = ivory_hw_io_read_u32(1073874968U);
            
            ivory_hw_io_write_u32(1073874968U, n_r4 | 1U << 4U);
            
            uint32_t n_r6 = ivory_hw_io_read_u32(1073874968U);
            
            ivory_hw_io_write_u32(1073874968U, n_r6 | 1U << 5U);
            
            uint32_t n_r8 = ivory_hw_io_read_u32(1073872920U);
            
            ivory_hw_io_write_u32(1073872920U, n_r8 | 1U << 0U);
            
            uint32_t n_r10 = ivory_hw_io_read_u32(1073872920U);
            
            ivory_hw_io_write_u32(1073872920U, n_r10 | 1U << 1U);
            *&motorInit_282 = 0U;
            
            uint32_t n_local11 = 1U;
            uint32_t* n_ref12 = &n_local11;
            
            emitFromTask_px4ioar_275_chan289_291(n_ref12);
            *&timeoutDue100_machine_ioar_285_296 = 0U;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_bootBegin_298(const
                                                             uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 0U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_deref4 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref4 >= 100U);
        *&timeoutDue100_machine_ioar_285_296 = n_deref4 + 100U;
    }
}

void eventhandler_px4ioar_275_per1_init1_300(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 1U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&timeoutDue3_machine_ioar_285_299;
        
        if (n_deref2 > 0U && n_deref2 <= n_deref1) {
            uint8_t n_deref3 = *&motorInit_282;
            
            if (n_deref3 < 4U) {
                if (3U == n_deref3) {
                    uint32_t n_r4 = ivory_hw_io_read_u32(1073872920U);
                    
                    ivory_hw_io_write_u32(1073872920U, n_r4 | 1U << 17U);
                } else {
                    if (2U == n_deref3) {
                        uint32_t n_r6 = ivory_hw_io_read_u32(1073872920U);
                        
                        ivory_hw_io_write_u32(1073872920U, n_r6 | 1U << 16U);
                    } else {
                        if (1U == n_deref3) {
                            uint32_t n_r8 = ivory_hw_io_read_u32(1073874968U);
                            
                            ivory_hw_io_write_u32(1073874968U, n_r8 | 1U <<
                                                  21U);
                        } else {
                            if (0U == n_deref3) {
                                uint32_t n_r10 =
                                        ivory_hw_io_read_u32(1073874968U);
                                
                                ivory_hw_io_write_u32(1073874968U, n_r10 | 1U <<
                                                      20U);
                            }
                        }
                    }
                }
            }
            
            uint8_t n_local12 = 224U;
            uint8_t* n_ref13 = &n_local12;
            
            emitFromTask_px4ioar_275_chan268_277(n_ref13);
            
            uint16_t n_r14 = ivory_hw_io_read_u16(1073759244U);
            
            ivory_hw_io_write_u16(1073759244U, n_r14 & ~(1U << 7U) |
                                  (uint16_t) (1U & 1U) << 7U);
            
            uint8_t n_local15 = 145U;
            uint8_t* n_ref16 = &n_local15;
            
            emitFromTask_px4ioar_275_chan268_277(n_ref16);
            
            uint16_t n_r17 = ivory_hw_io_read_u16(1073759244U);
            
            ivory_hw_io_write_u16(1073759244U, n_r17 & ~(1U << 7U) |
                                  (uint16_t) (1U & 1U) << 7U);
            
            uint32_t n_local18 = 2U;
            uint32_t* n_ref19 = &n_local18;
            
            emitFromTask_px4ioar_275_chan289_291(n_ref19);
            *&timeoutDue3_machine_ioar_285_299 = 0U;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_init1_301(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 1U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_deref4 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref4 >= 3U);
        *&timeoutDue3_machine_ioar_285_299 = n_deref4 + 3U;
    }
}

void eventhandler_px4ioar_275_per1_init2_303(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 2U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&timeoutDue7_machine_ioar_285_302;
        
        if (n_deref2 > 0U && n_deref2 <= n_deref1) {
            uint8_t n_local3 = 161U;
            uint8_t* n_ref4 = &n_local3;
            
            emitFromTask_px4ioar_275_chan268_277(n_ref4);
            
            uint16_t n_r5 = ivory_hw_io_read_u16(1073759244U);
            
            ivory_hw_io_write_u16(1073759244U, n_r5 & ~(1U << 7U) |
                                  (uint16_t) (1U & 1U) << 7U);
            
            uint8_t n_deref6 = *&motorInit_282;
            uint8_t n_local7 = n_deref6 + 1U;
            uint8_t* n_ref8 = &n_local7;
            
            emitFromTask_px4ioar_275_chan268_277(n_ref8);
            
            uint16_t n_r9 = ivory_hw_io_read_u16(1073759244U);
            
            ivory_hw_io_write_u16(1073759244U, n_r9 & ~(1U << 7U) |
                                  (uint16_t) (1U & 1U) << 7U);
            
            uint8_t n_local10 = 64U;
            uint8_t* n_ref11 = &n_local10;
            
            emitFromTask_px4ioar_275_chan268_277(n_ref11);
            
            uint16_t n_r12 = ivory_hw_io_read_u16(1073759244U);
            
            ivory_hw_io_write_u16(1073759244U, n_r12 & ~(1U << 7U) |
                                  (uint16_t) (1U & 1U) << 7U);
            
            uint32_t n_local13 = 3U;
            uint32_t* n_ref14 = &n_local13;
            
            emitFromTask_px4ioar_275_chan289_291(n_ref14);
            *&timeoutDue7_machine_ioar_285_302 = 0U;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_init2_304(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 2U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_deref4 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref4 >= 7U);
        *&timeoutDue7_machine_ioar_285_302 = n_deref4 + 7U;
    }
}

void eventhandler_px4ioar_275_per1_init3_306(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 3U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&timeoutDue1_machine_ioar_285_305;
        
        if (n_deref2 > 0U && n_deref2 <= n_deref1) {
            uint8_t n_deref3 = *&motorInit_282;
            
            if (3U == n_deref3) {
                uint32_t n_r5 = ivory_hw_io_read_u32(1073872920U);
                
                ivory_hw_io_write_u32(1073872920U, n_r5 | 1U << 1U);
            } else {
                if (2U == n_deref3) {
                    uint32_t n_r7 = ivory_hw_io_read_u32(1073872920U);
                    
                    ivory_hw_io_write_u32(1073872920U, n_r7 | 1U << 0U);
                } else {
                    if (1U == n_deref3) {
                        uint32_t n_r9 = ivory_hw_io_read_u32(1073874968U);
                        
                        ivory_hw_io_write_u32(1073874968U, n_r9 | 1U << 5U);
                    } else {
                        if (0U == n_deref3) {
                            uint32_t n_r11 = ivory_hw_io_read_u32(1073874968U);
                            
                            ivory_hw_io_write_u32(1073874968U, n_r11 | 1U <<
                                                  4U);
                        }
                    }
                }
            }
            
            uint32_t n_local12 = 4U;
            uint32_t* n_ref13 = &n_local12;
            
            emitFromTask_px4ioar_275_chan289_291(n_ref13);
            *&timeoutDue1_machine_ioar_285_305 = 0U;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_init3_307(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 3U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_deref4 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref4 >= 1U);
        *&timeoutDue1_machine_ioar_285_305 = n_deref4 + 1U;
    }
}

void eventhandler_px4ioar_275_per1_init4_309(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 4U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&timeoutDue200_machine_ioar_285_308;
        
        if (n_deref2 > 0U && n_deref2 <= n_deref1) {
            uint8_t n_deref3 = *&motorInit_282;
            
            ASSERTS(255U - n_deref3 >= 1U);
            *&motorInit_282 = n_deref3 + 1U;
            if (n_deref3 >= 3U) {
                uint32_t n_local4 = 5U;
                uint32_t* n_ref5 = &n_local4;
                
                emitFromTask_px4ioar_275_chan289_291(n_ref5);
            } else {
                uint32_t n_local6 = 1U;
                uint32_t* n_ref7 = &n_local6;
                
                emitFromTask_px4ioar_275_chan289_291(n_ref7);
            }
            *&timeoutDue200_machine_ioar_285_308 = 0U;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_init4_310(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 4U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_deref4 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref4 >= 200U);
        *&timeoutDue200_machine_ioar_285_308 = n_deref4 + 200U;
    }
}

void eventhandler_px4ioar_275_chan289_newstate_initMulti_311(const
                                                             uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 5U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_r4 = ivory_hw_io_read_u32(1073874968U);
        
        ivory_hw_io_write_u32(1073874968U, n_r4 | 1U << 20U);
        
        uint32_t n_r6 = ivory_hw_io_read_u32(1073874968U);
        
        ivory_hw_io_write_u32(1073874968U, n_r6 | 1U << 21U);
        
        uint32_t n_r8 = ivory_hw_io_read_u32(1073872920U);
        
        ivory_hw_io_write_u32(1073872920U, n_r8 | 1U << 16U);
        
        uint32_t n_r10 = ivory_hw_io_read_u32(1073872920U);
        
        ivory_hw_io_write_u32(1073872920U, n_r10 | 1U << 17U);
        
        uint8_t n_local12 = 160U;
        uint8_t* n_ref13 = &n_local12;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref13);
        
        uint16_t n_r14 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r14 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local15 = 160U;
        uint8_t* n_ref16 = &n_local15;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref16);
        
        uint16_t n_r17 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r17 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local18 = 160U;
        uint8_t* n_ref19 = &n_local18;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref19);
        
        uint16_t n_r20 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r20 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local21 = 160U;
        uint8_t* n_ref22 = &n_local21;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref22);
        
        uint16_t n_r23 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r23 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local24 = 160U;
        uint8_t* n_ref25 = &n_local24;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref25);
        
        uint16_t n_r26 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r26 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local27 = 160U;
        uint8_t* n_ref28 = &n_local27;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref28);
        
        uint16_t n_r29 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r29 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local30 = 160U;
        uint8_t* n_ref31 = &n_local30;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref31);
        
        uint16_t n_r32 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r32 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local33 = 160U;
        uint8_t* n_ref34 = &n_local33;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref34);
        
        uint16_t n_r35 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r35 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local36 = 160U;
        uint8_t* n_ref37 = &n_local36;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref37);
        
        uint16_t n_r38 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r38 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local39 = 160U;
        uint8_t* n_ref40 = &n_local39;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref40);
        
        uint16_t n_r41 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r41 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local42 = 160U;
        uint8_t* n_ref43 = &n_local42;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref43);
        
        uint16_t n_r44 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r44 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint8_t n_local45 = 160U;
        uint8_t* n_ref46 = &n_local45;
        
        emitFromTask_px4ioar_275_chan268_277(n_ref46);
        
        uint16_t n_r47 = ivory_hw_io_read_u16(1073759244U);
        
        ivory_hw_io_write_u16(1073759244U, n_r47 & ~(1U << 7U) |
                              (uint16_t) (1U & 1U) << 7U);
        
        uint32_t n_local48 = 6U;
        uint32_t* n_ref49 = &n_local48;
        
        emitFromTask_px4ioar_275_chan289_291(n_ref49);
    }
}

void eventhandler_px4ioar_275_per1_bootCheckComplete_313(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 6U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&timeoutDue2_machine_ioar_285_312;
        
        if (n_deref2 > 0U && n_deref2 <= n_deref1) {
            uint32_t n_deref3 = *&bootAttempts_283;
            
            ASSERTS(4294967295U - n_deref3 >= 1U);
            *&bootAttempts_283 = n_deref3 + 1U;
            if (n_deref3 < 2U) {
                uint32_t n_local4 = 0U;
                uint32_t* n_ref5 = &n_local4;
                
                emitFromTask_px4ioar_275_chan289_291(n_ref5);
            } else {
                uint32_t n_local6 = 7U;
                uint32_t* n_ref7 = &n_local6;
                
                emitFromTask_px4ioar_275_chan289_291(n_ref7);
            }
            *&timeoutDue2_machine_ioar_285_312 = 0U;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_bootCheckComplete_314(const
                                                                     uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 6U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        uint32_t n_deref4 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref4 >= 2U);
        *&timeoutDue2_machine_ioar_285_312 = n_deref4 + 2U;
    }
}

void eventhandler_px4ioar_275_per1_loop_316(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 7U) {
        uint32_t n_deref1 = *n_var0;
        uint32_t n_deref2 = *&periodDue5_machine_ioar_285_315;
        
        if (n_deref2 <= n_deref1) {
            uint16_t n_local3[4U] = {0U, 0U, 0U, 0U};
            uint16_t* n_ref4 = n_local3;
            
            for (int32_t n_ix5 = 0; n_ix5 <= 3; n_ix5++) {
                float n_deref6 = throttle_284[n_ix5];
                
                *&n_ref4[n_ix5] = !(bool) isnan(500.0f * n_deref6) && (500.0f *
                                                                       n_deref6 <=
                                                                       65535.0F &&
                                                                       500.0f *
                                                                       n_deref6 >=
                                                                       0.0F) ? (uint16_t) (500.0f *
                                                                                           n_deref6) : 0U;
            }
            
            uint16_t n_deref7 = n_ref4[0];
            uint16_t n_deref8 = n_ref4[1];
            uint16_t n_deref9 = n_ref4[2];
            uint16_t n_deref10 = n_ref4[3];
            uint8_t n_local11[5U] = {32U | (uint8_t) ((n_deref7 & 511U) << 4U >>
                                                      8U & 255U),
                                     (uint8_t) ((n_deref7 & 511U) << 4U &
                                                255U) | (uint8_t) ((n_deref8 &
                                                                    511U) <<
                                                                   3U >> 8U &
                                                                   255U),
                                     (uint8_t) ((n_deref8 & 511U) << 3U &
                                                255U) | (uint8_t) ((n_deref9 &
                                                                    511U) <<
                                                                   2U >> 8U &
                                                                   255U),
                                     (uint8_t) ((n_deref9 & 511U) << 2U &
                                                255U) | (uint8_t) ((n_deref10 &
                                                                    511U) <<
                                                                   1U >> 8U &
                                                                   255U),
                                     (uint8_t) ((n_deref10 & 511U) << 1U &
                                                255U)};
            uint8_t* n_ref12 = n_local11;
            
            for (int32_t n_ix13 = 0; n_ix13 <= 4; n_ix13++) {
                uint8_t n_deref14 = n_ref12[n_ix13];
                uint8_t n_local15 = n_deref14;
                uint8_t* n_ref16 = &n_local15;
                
                emitFromTask_px4ioar_275_chan268_277(n_ref16);
                
                uint16_t n_r17 = ivory_hw_io_read_u16(1073759244U);
                
                ivory_hw_io_write_u16(1073759244U, n_r17 & ~(1U << 7U) |
                                      (uint16_t) (1U & 1U) << 7U);
            }
            ASSERTS(4294967295U - n_deref2 >= 5U);
            *&periodDue5_machine_ioar_285_315 = n_deref2 + 5U;
        }
    }
}

void eventhandler_px4ioar_275_chan34_loop_317(const struct motors* n_var0)
{
    uint32_t n_deref0 = *&state_machine_ioar_285;
    
    if (n_deref0 == 7U) {
        float n_deref1 = n_var0->frontleft;
        float n_deref2 = n_var0->frontright;
        float n_deref3 = n_var0->backright;
        float n_deref4 = n_var0->backleft;
        float n_local5[4U] = {n_deref1, n_deref2, n_deref3, n_deref4};
        float* n_ref6 = n_local5;
        
        for (int32_t n_ix7 = 0; n_ix7 <= 3; n_ix7++) {
            float n_deref8 = n_ref6[n_ix7];
            
            *&throttle_284[n_ix7] = n_deref8;
        }
    }
}

void eventhandler_px4ioar_275_chan289_newstate_loop_318(const uint32_t* n_var0)
{
    uint32_t n_deref0 = *n_var0;
    
    if (n_deref0 == 7U) {
        *&state_machine_ioar_285 = n_deref0;
        
        uint32_t n_r1 = tower_gettimemillis();
        uint32_t n_local2 = n_r1;
        uint32_t* n_ref3 = &n_local2;
        
        for (int32_t n_ix4 = 0; n_ix4 <= 3; n_ix4++) {
            *&throttle_284[n_ix4] = 0.0f;
        }
        
        uint32_t n_deref5 = *n_ref3;
        
        ASSERTS(4294967295U - n_deref5 >= 5U);
        *&periodDue5_machine_ioar_285_315 = n_deref5 + 5U;
    }
}

void begin_machine_ioar_285()
{
    bool n_deref0 = *&state_active_machine_ioar_285;
    
    if (n_deref0) { } else {
        *&state_active_machine_ioar_285 = true;
        
        uint32_t n_local1 = 0U;
        uint32_t* n_ref2 = &n_local1;
        
        emitFromTask_px4ioar_275_chan289_291(n_ref2);
    }
}

bool active_machine_ioar_285()
{
    bool n_deref0 = *&state_active_machine_ioar_285;
    
    return n_deref0;
}