#ifndef __SPBLCD_H
#define __SPBLCD_H
#include "sys.h"
#include "lcd.h"
//////////////////////////////////////////////////////////////////////////////////
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F103开发板
//SPB效果实现 代码
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/3/6
//版本：V1.1
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved
//*******************************************************************************
//V1.1 20150322
//新增gui_draw_bline函数
//修改针对4.3/7寸屏的主图标显示方式,直接全部采用DMA,以提高速度.
//////////////////////////////////////////////////////////////////////////////////

#define SLCD_DMA_MAX_TRANS  60*1024     //DMA一次最多传输60K字节    
extern u16 *sramlcdbuf;                 //SRAMLCD缓存,先在SRAM 里面将图片解码,并加入图标以及文字等信息


void slcd_draw_point(u16 x, u16 y, u16 color);
u16 slcd_read_point(u16 x, u16 y);
void slcd_fill_color(u16 x, u16 y, u16 width, u16 height, u16 *color);
void slcd_frame_sram2spi(u8 frame);
void slcd_spi1_mode(u8 mode);
void slcd_dma_init(void);
void slcd_dma_enable(u32 x);
void slcd_frame_show(u32 x);


#endif

























