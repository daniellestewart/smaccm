#ifndef __SMACCM_top_i_Instance_types__H
#define __SMACCM_top_i_Instance_types__H

/**************************************************************************
  Copyright (c) 2013, 2014, 2015 Rockwell Collins and the University of Minnesota.
  Developed with the sponsorship of the Defense Advanced Research Projects Agency (DARPA).

  Permission is hereby granted, free of charge, to any person obtaining a copy of this data,
  including any software or models in source or binary form, as well as any drawings, specifications, 
  and documentation (collectively "the Data"), to deal in the Data without restriction, including 
  without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
  and/or sell copies of the Data, and to permit persons to whom the Data is furnished to do so, 
  subject to the following conditions: 

  The above copyright notice and this permission notice shall be included in all copies or
  substantial portions of the Data.

  THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
  IN NO EVENT SHALL THE AUTHORS, SPONSORS, DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE 
  FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
  ARISING FROM, OUT OF OR IN CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE DATA. 

 **************************************************************************/


/**************************************************************************

   File: /home/ajgacek/minitower/june/apps/smaccmpilot/include/smaccm_top_i_types.h
   Created on: 2016/07/15 10:12:42
   using Dulcimer AADL system build tool suite 

   ***AUTOGENERATED CODE: DO NOT MODIFY***

  This file contains the datatypes used for communications between 
  AADL components as defined in the system implementation top_i_Instance.

 **************************************************************************/

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
// Headers for externally declared types.

// AADL-defined types.
typedef 
      struct smaccm_CAN_framing_from_server_struct { 
         uint32_t unused  ; 
      } smaccm_CAN_framing_from_server_struct ; 

typedef uint8_t SMACCM_DATA__Array_packet [255]; 

typedef 
      struct SMACCM_DATA__UartPacket_i { 
         SMACCM_DATA__Array_packet buff  ; 
         int32_t len  ; 
      } SMACCM_DATA__UartPacket_i ; 

typedef 
      struct smaccm_CAN_driver_send_struct { 
         uint32_t unused  ; 
      } smaccm_CAN_driver_send_struct ; 

typedef uint8_t SMACCM_DATA__can_payload_i [8]; 

typedef 
      struct smaccm_Encrypt_get_gidl_struct { 
         uint32_t unused  ; 
      } smaccm_Encrypt_get_gidl_struct ; 

typedef 
      struct smaccm_Server_get_input_struct { 
         uint32_t unused  ; 
      } smaccm_Server_get_input_struct ; 

typedef 
      struct smaccm_CAN_framing_get_status_struct { 
         uint32_t unused  ; 
      } smaccm_CAN_framing_get_status_struct ; 

typedef 
      struct smaccm_Decrypt_Decrypt_initializer_struct { 
         uint32_t unused  ; 
      } smaccm_Decrypt_Decrypt_initializer_struct ; 

typedef 
      struct smaccm_CAN_framing_CAN_framing_initializer_struct { 
         uint32_t unused  ; 
      } smaccm_CAN_framing_CAN_framing_initializer_struct ; 

typedef 
      struct smaccm_UART_driver_get_packet_struct { 
         uint32_t unused  ; 
      } smaccm_UART_driver_get_packet_struct ; 

typedef 
      struct smaccm_CAN_framing_periodic_dispatcher_struct { 
         uint32_t unused  ; 
      } smaccm_CAN_framing_periodic_dispatcher_struct ; 

typedef 
      struct smaccm_CAN_framing_fragment_reassembly_struct { 
         uint32_t unused  ; 
      } smaccm_CAN_framing_fragment_reassembly_struct ; 

typedef 
      struct smaccm_Encrypt_recv_response_struct { 
         uint32_t unused  ; 
      } smaccm_Encrypt_recv_response_struct ; 

typedef 
      struct smaccm_Server_get_can_struct { 
         uint32_t unused  ; 
      } smaccm_Server_get_can_struct ; 

typedef 
      struct smaccm_Decrypt_get_packet_struct { 
         uint32_t unused  ; 
      } smaccm_Decrypt_get_packet_struct ; 

typedef 
      struct SMACCM_DATA__camera_data_i { 
         uint16_t bbox_l  ; 
         uint16_t bbox_r  ; 
         uint16_t bbox_t  ; 
         uint16_t bbox_b  ; 
      } SMACCM_DATA__camera_data_i ; 

typedef 
      struct smaccm_Encrypt_periodic_dispatcher_struct { 
         uint32_t unused  ; 
      } smaccm_Encrypt_periodic_dispatcher_struct ; 

typedef 
      struct SMACCM_DATA__can_message_i { 
         uint32_t id  ; 
         uint8_t dlc  ; 
         SMACCM_DATA__can_payload_i payload  ; 
      } SMACCM_DATA__can_message_i ; 

typedef 
      struct smaccm_Encrypt_Encrypt_initializer_struct { 
         uint32_t unused  ; 
      } smaccm_Encrypt_Encrypt_initializer_struct ; 

typedef uint8_t SMACCM_DATA__Array_U8_80 [80]; 

typedef 
      struct smaccm_Decrypt_periodic_dispatcher_struct { 
         uint32_t unused  ; 
      } smaccm_Decrypt_periodic_dispatcher_struct ; 

typedef 
      struct smaccm_Server_periodic_dispatcher_struct { 
         uint32_t unused  ; 
      } smaccm_Server_periodic_dispatcher_struct ; 

typedef 
      struct smaccm_Server_Server_initializer_struct { 
         uint32_t unused  ; 
      } smaccm_Server_Server_initializer_struct ; 

typedef 
      struct smaccm_SMACCM_DATA__Array_packet_container { 
         SMACCM_DATA__Array_packet f  ; 
      } smaccm_SMACCM_DATA__Array_packet_container ; 

typedef 
      struct smaccm_SMACCM_DATA__can_payload_i_container { 
         SMACCM_DATA__can_payload_i f  ; 
      } smaccm_SMACCM_DATA__can_payload_i_container ; 

typedef 
      struct smaccm_SMACCM_DATA__Array_U8_80_container { 
         SMACCM_DATA__Array_U8_80 f  ; 
      } smaccm_SMACCM_DATA__Array_U8_80_container ; 

/* endif for: #ifndef __SMACCM_top_i_Instance_types__H */
#endif

/**************************************************************************
  End of autogenerated file: smaccm_top_i_types.h
 **************************************************************************/
