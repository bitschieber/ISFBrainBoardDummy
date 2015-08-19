#ifndef ISFDATA
#define ISFDATA


#include <cstdint>

//#define DATA_SET_MONITOR_START_SEQUENCE 0xF0F0

#define START_SEQUNCE 170 // 10101010
#define END_SEQUNCE 204 // 11001100

//Struktur für die Übertragung von ISFCarLogic zu ISFCarBrainBoard
struct DATA_SET_UC_BRAIN_BOARD_t{
    uint32_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    int32_t steering_angle_pwm = 0; //Grad
    int32_t speed_pwm = 0; //mm/s
    uint32_t gpio_state = 0;
    int32_t mouse_sensor_dx = 0;
    int32_t mouse_sensor_dy = 0;
    uint32_t end_sequence = END_SEQUNCE;
};

//Struktur für die Übertragung von ISFCarBrainBoard zu ISFCarLogic
struct DATA_SET_BRAIN_BOARD_UC_t{
    uint32_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    uint32_t end_sequence = END_SEQUNCE;
};

//Struktur für die Übertragung zu ISFCarDesktop im Monitor-Modi
struct DATA_SET_TO_MONITOR_t{
    uint32_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    int32_t steering_angle_pwm = 0; //Grad
    int32_t speed_pwm = 0; //mm/s
    uint32_t gpio_state = 0;
    int32_t mouse_sensor_dx = 0;
    int32_t mouse_sensor_dy = 0;
    uint32_t end_sequence = END_SEQUNCE;
};


/*
 *+++++++++NUR FÜR SIMULATION BENÖTIGT++++++++++
 */
//Struktur die an die ISFCarSimu gesendet wird
enum SIMULATION_COMMAND{SIMUCOM_UNKNOWN, SIMUCOM_SEND_IMAGE,SIMUCOM_UPDATE_DATA};
struct DATA_SET_TO_SIMULATION_t{
    uint32_t start_sequence = START_SEQUNCE;
    uint32_t command = SIMUCOM_UNKNOWN;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    uint32_t timediff = 0;
    uint32_t gpio_state = 0;
    uint32_t end_sequence = END_SEQUNCE;
};


enum DATA_HEADER_TYPE{IMAGE_JPEG, SIMULATION_OUTPUT};
struct DATA_HEADER_SET{
    uint32_t start_sequence;
    DATA_HEADER_TYPE type;
    int32_t length;
    uint32_t end_sequence;
};

#endif // ISFDATA






/*
#ifndef ISFDATA
#define ISFDATA


#include <cstdint>

#define DATA_SET_MONITOR_START_SEQUENCE 0xF0F0

#define START_SEQUNCE 170 // 10101010
#define END_SEQUNCE 204 // 11001100

struct DATA_SET_BRAIN_BOARD_OUT_t{
    uint8_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    int32_t steering_angle_pwm = 0; //Grad
    int32_t speed_pwm = 0; //mm/s
    uint8_t end_sequence = END_SEQUNCE;
};

struct DATA_SET_UC_BRAIN_BOARD_t{
    uint32_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    int32_t steering_angle_pwm = 0; //Grad
    int32_t speed_pwm = 0; //mm/s
    uint32_t end_sequence = END_SEQUNCE;
};

enum GPIO_PINS{LED_INDICATOR_LFET, LED_INDICATOR_RIGHT, LED_BACKWARD, LED_DRIVING_LIGHT, LED_BRAKE_LIGHT};
struct DATA_SET_BRAIN_BOARD_UC_t{
    uint32_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t mouse_sensor_dx = 0;
    int32_t mouse_sensor_dy = 0;
    int32_t speed_mms = 0; //mm/s
    uint32_t gpio_state = 0;
    uint32_t end_sequence = END_SEQUNCE;
};

enum SIMULATION_COMMAND{SIMUCOM_UNKNOWN, SIMUCOM_SEND_IMAGE,SIMUCOM_UPDATE_DATA};

struct DATA_SET_TO_SIMULATION_t{
    uint32_t start_sequence = START_SEQUNCE;
    uint32_t command = SIMUCOM_UNKNOWN;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    uint32_t end_sequence = END_SEQUNCE;
};

struct DATA_SET_MONITOR_t{
    //uint16_t startsequence = DATA_SET_MONITOR_START_SEQUENCE;
    int32_t lenkwinkel;
    int32_t speed;
    //uint16_t checksum;
};

struct DATA_SET_BRAIN_BOARD_t{
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
    int32_t steering_angle_pwm = 0; //Grad
    int32_t speed_pwm = 0; //mm/s
};

#endif // ISFDATA
*/




