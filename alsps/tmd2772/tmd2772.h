
#ifndef __TMD2772_H__
#define __TMD2772_H__

#include <linux/ioctl.h>


int ZOOM_TIME = 20;      //   4  //modify for PR353124


#define PROX_MEAN				200	//ϣ������ȡ����ֵ
#define PROX_MEAN_OFFSET		100	//����ֵ����ƫ��
#define OFFSET_OF_COUNT		60	//����1����Ӧ����ֵ����60
#define PLUS_OFFSET				0x0F // OFFSET����ֵ
#define M						20	// �ɼ����ݸ���
#define MIN_CURRENT_MODE		0	//����ģʽ=0�������=1С����
#define OFFSET_VALUE			0x7F

#if MIN_CURRENT_MODE
#define PPCOUNT_VALUE			0x90	// �����������
#else
#define PPCOUNT_VALUE			0x10//0x05//0x0A//0x1B	// �����������  modify by zy for 348261
#endif

#define TMD2772_CMM_CONTROL_VALUE 0x60//0xA0//0x60

extern int TMD2772_CMM_PPCOUNT_VALUE;
extern int ZOOM_TIME;

#define TMD2772_CMM_ENABLE 		0X80
#define TMD2772_CMM_ATIME 		0X81
#define TMD2772_CMM_PTIME 		0X82
#define TMD2772_CMM_WTIME 		0X83
/*for interrup work mode support -- by liaoxl.lenovo 12.08.2011*/
#define TMD2772_CMM_INT_LOW_THD_LOW   0X88
#define TMD2772_CMM_INT_LOW_THD_HIGH  0X89
#define TMD2772_CMM_INT_HIGH_THD_LOW  0X8A
#define TMD2772_CMM_INT_HIGH_THD_HIGH 0X8B
#define TMD2772_CMM_Persistence       0X8C
#define TMD2772_CMM_STATUS            0X93
#define TAOS_TRITON_CMD_REG           0X80
#define TAOS_TRITON_CMD_SPL_FN        0x60

#define TMD2772_CMM_CONFIG 		0X8D
#define TMD2772_CMM_PPCOUNT 		0X8E
#define TMD2772_CMM_CONTROL 		0X8F
#define TMD2772_CMM_OFFSET 		0X9E


#define TMD2772_CMM_PDATA_L 		0X98
#define TMD2772_CMM_PDATA_H 		0X99
#define TMD2772_CMM_C0DATA_L 	0X94
#define TMD2772_CMM_C0DATA_H 	0X95
#define TMD2772_CMM_C1DATA_L 	0X96
#define TMD2772_CMM_C1DATA_H 	0X97


#define TMD2772_SUCCESS						0
#define TMD2772_ERR_I2C						-1
#define TMD2772_ERR_STATUS					-3
#define TMD2772_ERR_SETUP_FAILURE				-4
#define TMD2772_ERR_GETGSENSORDATA			-5
#define TMD2772_ERR_IDENTIFICATION			-6


#endif
