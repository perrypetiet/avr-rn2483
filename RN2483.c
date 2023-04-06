/*
* RN2483.c
*
* Created: 23-3-2023 15:51:06
*  Author: perry
*/ 
/******************************* INCLUDES ********************************/

#include "RN2483.h"

/******************************* GLOBAL VARIABLES ************************/

MODULE_DATA* moduleData = NULL;

/******************************* LOCAL FUNCTIONS *************************/

/******************************* GLOBAL FUNCTIONS ************************/

bool init_lora(uint8_t* appEui, uint8_t* devEui, uint8_t* appKey)
{
  bool init_succes = false;

  if (moduleData == NULL)
  {
    moduleData = malloc(sizeof(MODULE_DATA));
    memcpy(moduleData->AppEUI, appEui, APPEUI_LEN);
    memcpy(moduleData->DevEUI, devEui, DEVEUI_LEN);
    memcpy(moduleData->AppKey, appKey, APPKEY_LEN);


    init_succes = true;
  }

  return init_succes;
}

 /******************************* THE END *********************************/