/*
 * RN2483.h
 *
 * Created: 23-3-2023 15:50:40
 *  Author: perry
 */ 


#ifndef RN2483_H_
#define RN2483_H_

/******************************* INCLUDES ********************************/

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/******************************* DEFINES *********************************/

#define MAX_RESPONSE_LEN 32
#define APPEUI_LEN       8
#define DEVEUI_LEN       8
#define APPKEY_LEN       16

/******************************* TYPEDEFS ********************************/

typedef struct  
{
  uint8_t data[MAX_RESPONSE_LEN];                  /* Array with data    */
  uint8_t dataLen;                                 /* Length of response */
  bool response_handled;                           /* response is handled*/
} RESPONSE_BUF;

typedef struct
{
  uint8_t AppEUI[APPEUI_LEN];                      /* Application EUI    */
  uint8_t DevEUI[DEVEUI_LEN];                      /* Device EUI         */
  uint8_t AppKey[APPKEY_LEN];                      /* Application key    */

  RESPONSE_BUF lastResponse;                       /* Last received resp */
} MODULE_DATA;

/******************************* LOCAL FUNCTIONS *************************/


/******************************* GLOBAL FUNCTIONS ************************/

bool init_lora(uint8_t* appEui, uint8_t* devEui, uint8_t* appKey);

/******************************* THE END *********************************/
#endif /* RN2483_H_ */