#pragma once

#ifdef __cplusplus
extern "C"
{
#endif
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "freertos/event_groups.h"
#include "esp_log.h"

/*
** The provided mqtt-broker URL, username and password are just for test purposes  
**
*/
#define BROKER_URI "mqtts://37.59.96.8:1883"
#define BROKER_USERNAME "ridaidil"
#define BROKER_PASSWORD "justfortest"

    TaskHandle_t MqttHandle;

    void
    mqtt_app_start();

#ifdef __cplusplus
}
#endif
