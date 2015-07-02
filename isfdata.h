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

struct DATA_SET_BRAIN_BOARD_UC_t{
    uint32_t start_sequence = START_SEQUNCE;
    int32_t steering_angle = 0; //Grad
    int32_t speed_mms = 0; //mm/s
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




