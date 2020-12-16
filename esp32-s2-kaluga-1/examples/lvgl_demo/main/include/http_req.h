#ifndef _HTTP_REQ_H_
#define _HTTP_REQ_H_


typedef struct 
{
    char cit[20];
    char weather_text[20];
    char weather_code[2];
    char temperatur[3];
} weather_info;
extern weather_info weathe;

void http_get_task(void *pvParameters);

#endif
