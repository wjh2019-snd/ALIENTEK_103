#ifndef __JOYPAD_H
#define __JOYPAD_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEKս��STM32������V3
//��Ϸ�ֱ����� ����
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2015/1/16
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved
//////////////////////////////////////////////////////////////////////////////////

//�ֱ���������
#define JOYPAD_CLK PDout(3)     //ʱ��      PD3
#define JOYPAD_LAT PBout(11)    //����      PB11
#define JOYPAD_DAT PBin(10)     //����      PB10    

void JOYPAD_Init(void);         //��ʼ��
u8 JOYPAD_Read(void);           //��ȡ��ֵ
#endif















