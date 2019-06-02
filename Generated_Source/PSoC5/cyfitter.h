/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* RST */
#define RST__0__INTTYPE CYREG_PICU4_INTTYPE4
#define RST__0__MASK 0x10u
#define RST__0__PC CYREG_PRT4_PC4
#define RST__0__PORT 4u
#define RST__0__SHIFT 4u
#define RST__AG CYREG_PRT4_AG
#define RST__AMUX CYREG_PRT4_AMUX
#define RST__BIE CYREG_PRT4_BIE
#define RST__BIT_MASK CYREG_PRT4_BIT_MASK
#define RST__BYP CYREG_PRT4_BYP
#define RST__CTL CYREG_PRT4_CTL
#define RST__DM0 CYREG_PRT4_DM0
#define RST__DM1 CYREG_PRT4_DM1
#define RST__DM2 CYREG_PRT4_DM2
#define RST__DR CYREG_PRT4_DR
#define RST__INP_DIS CYREG_PRT4_INP_DIS
#define RST__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define RST__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define RST__LCD_EN CYREG_PRT4_LCD_EN
#define RST__MASK 0x10u
#define RST__PORT 4u
#define RST__PRT CYREG_PRT4_PRT
#define RST__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define RST__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define RST__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define RST__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define RST__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define RST__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define RST__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define RST__PS CYREG_PRT4_PS
#define RST__SHIFT 4u
#define RST__SLW CYREG_PRT4_SLW

/* d_c */
#define d_c__0__INTTYPE CYREG_PICU4_INTTYPE0
#define d_c__0__MASK 0x01u
#define d_c__0__PC CYREG_PRT4_PC0
#define d_c__0__PORT 4u
#define d_c__0__SHIFT 0u
#define d_c__AG CYREG_PRT4_AG
#define d_c__AMUX CYREG_PRT4_AMUX
#define d_c__BIE CYREG_PRT4_BIE
#define d_c__BIT_MASK CYREG_PRT4_BIT_MASK
#define d_c__BYP CYREG_PRT4_BYP
#define d_c__CTL CYREG_PRT4_CTL
#define d_c__DM0 CYREG_PRT4_DM0
#define d_c__DM1 CYREG_PRT4_DM1
#define d_c__DM2 CYREG_PRT4_DM2
#define d_c__DR CYREG_PRT4_DR
#define d_c__INP_DIS CYREG_PRT4_INP_DIS
#define d_c__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define d_c__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define d_c__LCD_EN CYREG_PRT4_LCD_EN
#define d_c__MASK 0x01u
#define d_c__PORT 4u
#define d_c__PRT CYREG_PRT4_PRT
#define d_c__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define d_c__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define d_c__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define d_c__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define d_c__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define d_c__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define d_c__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define d_c__PS CYREG_PRT4_PS
#define d_c__SHIFT 0u
#define d_c__SLW CYREG_PRT4_SLW

/* ncs */
#define ncs__0__INTTYPE CYREG_PICU4_INTTYPE3
#define ncs__0__MASK 0x08u
#define ncs__0__PC CYREG_PRT4_PC3
#define ncs__0__PORT 4u
#define ncs__0__SHIFT 3u
#define ncs__AG CYREG_PRT4_AG
#define ncs__AMUX CYREG_PRT4_AMUX
#define ncs__BIE CYREG_PRT4_BIE
#define ncs__BIT_MASK CYREG_PRT4_BIT_MASK
#define ncs__BYP CYREG_PRT4_BYP
#define ncs__CTL CYREG_PRT4_CTL
#define ncs__DM0 CYREG_PRT4_DM0
#define ncs__DM1 CYREG_PRT4_DM1
#define ncs__DM2 CYREG_PRT4_DM2
#define ncs__DR CYREG_PRT4_DR
#define ncs__INP_DIS CYREG_PRT4_INP_DIS
#define ncs__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define ncs__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define ncs__LCD_EN CYREG_PRT4_LCD_EN
#define ncs__MASK 0x08u
#define ncs__PORT 4u
#define ncs__PRT CYREG_PRT4_PRT
#define ncs__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define ncs__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define ncs__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define ncs__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define ncs__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define ncs__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define ncs__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define ncs__PS CYREG_PRT4_PS
#define ncs__SHIFT 3u
#define ncs__SLW CYREG_PRT4_SLW

/* nrd */
#define nrd__0__INTTYPE CYREG_PICU4_INTTYPE2
#define nrd__0__MASK 0x04u
#define nrd__0__PC CYREG_PRT4_PC2
#define nrd__0__PORT 4u
#define nrd__0__SHIFT 2u
#define nrd__AG CYREG_PRT4_AG
#define nrd__AMUX CYREG_PRT4_AMUX
#define nrd__BIE CYREG_PRT4_BIE
#define nrd__BIT_MASK CYREG_PRT4_BIT_MASK
#define nrd__BYP CYREG_PRT4_BYP
#define nrd__CTL CYREG_PRT4_CTL
#define nrd__DM0 CYREG_PRT4_DM0
#define nrd__DM1 CYREG_PRT4_DM1
#define nrd__DM2 CYREG_PRT4_DM2
#define nrd__DR CYREG_PRT4_DR
#define nrd__INP_DIS CYREG_PRT4_INP_DIS
#define nrd__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define nrd__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define nrd__LCD_EN CYREG_PRT4_LCD_EN
#define nrd__MASK 0x04u
#define nrd__PORT 4u
#define nrd__PRT CYREG_PRT4_PRT
#define nrd__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define nrd__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define nrd__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define nrd__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define nrd__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define nrd__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define nrd__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define nrd__PS CYREG_PRT4_PS
#define nrd__SHIFT 2u
#define nrd__SLW CYREG_PRT4_SLW

/* nwr */
#define nwr__0__INTTYPE CYREG_PICU4_INTTYPE1
#define nwr__0__MASK 0x02u
#define nwr__0__PC CYREG_PRT4_PC1
#define nwr__0__PORT 4u
#define nwr__0__SHIFT 1u
#define nwr__AG CYREG_PRT4_AG
#define nwr__AMUX CYREG_PRT4_AMUX
#define nwr__BIE CYREG_PRT4_BIE
#define nwr__BIT_MASK CYREG_PRT4_BIT_MASK
#define nwr__BYP CYREG_PRT4_BYP
#define nwr__CTL CYREG_PRT4_CTL
#define nwr__DM0 CYREG_PRT4_DM0
#define nwr__DM1 CYREG_PRT4_DM1
#define nwr__DM2 CYREG_PRT4_DM2
#define nwr__DR CYREG_PRT4_DR
#define nwr__INP_DIS CYREG_PRT4_INP_DIS
#define nwr__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define nwr__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define nwr__LCD_EN CYREG_PRT4_LCD_EN
#define nwr__MASK 0x02u
#define nwr__PORT 4u
#define nwr__PRT CYREG_PRT4_PRT
#define nwr__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define nwr__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define nwr__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define nwr__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define nwr__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define nwr__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define nwr__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define nwr__PS CYREG_PRT4_PS
#define nwr__SHIFT 1u
#define nwr__SLW CYREG_PRT4_SLW

/* d_lsb */
#define d_lsb__0__INTTYPE CYREG_PICU3_INTTYPE0
#define d_lsb__0__MASK 0x01u
#define d_lsb__0__PC CYREG_PRT3_PC0
#define d_lsb__0__PORT 3u
#define d_lsb__0__SHIFT 0u
#define d_lsb__1__INTTYPE CYREG_PICU3_INTTYPE1
#define d_lsb__1__MASK 0x02u
#define d_lsb__1__PC CYREG_PRT3_PC1
#define d_lsb__1__PORT 3u
#define d_lsb__1__SHIFT 1u
#define d_lsb__2__INTTYPE CYREG_PICU3_INTTYPE2
#define d_lsb__2__MASK 0x04u
#define d_lsb__2__PC CYREG_PRT3_PC2
#define d_lsb__2__PORT 3u
#define d_lsb__2__SHIFT 2u
#define d_lsb__3__INTTYPE CYREG_PICU3_INTTYPE3
#define d_lsb__3__MASK 0x08u
#define d_lsb__3__PC CYREG_PRT3_PC3
#define d_lsb__3__PORT 3u
#define d_lsb__3__SHIFT 3u
#define d_lsb__4__INTTYPE CYREG_PICU3_INTTYPE4
#define d_lsb__4__MASK 0x10u
#define d_lsb__4__PC CYREG_PRT3_PC4
#define d_lsb__4__PORT 3u
#define d_lsb__4__SHIFT 4u
#define d_lsb__5__INTTYPE CYREG_PICU3_INTTYPE5
#define d_lsb__5__MASK 0x20u
#define d_lsb__5__PC CYREG_PRT3_PC5
#define d_lsb__5__PORT 3u
#define d_lsb__5__SHIFT 5u
#define d_lsb__6__INTTYPE CYREG_PICU3_INTTYPE6
#define d_lsb__6__MASK 0x40u
#define d_lsb__6__PC CYREG_PRT3_PC6
#define d_lsb__6__PORT 3u
#define d_lsb__6__SHIFT 6u
#define d_lsb__7__INTTYPE CYREG_PICU3_INTTYPE7
#define d_lsb__7__MASK 0x80u
#define d_lsb__7__PC CYREG_PRT3_PC7
#define d_lsb__7__PORT 3u
#define d_lsb__7__SHIFT 7u
#define d_lsb__AG CYREG_PRT3_AG
#define d_lsb__AMUX CYREG_PRT3_AMUX
#define d_lsb__BIE CYREG_PRT3_BIE
#define d_lsb__BIT_MASK CYREG_PRT3_BIT_MASK
#define d_lsb__BYP CYREG_PRT3_BYP
#define d_lsb__CTL CYREG_PRT3_CTL
#define d_lsb__DM0 CYREG_PRT3_DM0
#define d_lsb__DM1 CYREG_PRT3_DM1
#define d_lsb__DM2 CYREG_PRT3_DM2
#define d_lsb__DR CYREG_PRT3_DR
#define d_lsb__INP_DIS CYREG_PRT3_INP_DIS
#define d_lsb__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define d_lsb__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define d_lsb__LCD_EN CYREG_PRT3_LCD_EN
#define d_lsb__MASK 0xFFu
#define d_lsb__PORT 3u
#define d_lsb__PRT CYREG_PRT3_PRT
#define d_lsb__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define d_lsb__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define d_lsb__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define d_lsb__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define d_lsb__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define d_lsb__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define d_lsb__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define d_lsb__PS CYREG_PRT3_PS
#define d_lsb__SHIFT 0u
#define d_lsb__SLW CYREG_PRT3_SLW

/* d_msb */
#define d_msb__0__INTTYPE CYREG_PICU0_INTTYPE0
#define d_msb__0__MASK 0x01u
#define d_msb__0__PC CYREG_PRT0_PC0
#define d_msb__0__PORT 0u
#define d_msb__0__SHIFT 0u
#define d_msb__1__INTTYPE CYREG_PICU0_INTTYPE1
#define d_msb__1__MASK 0x02u
#define d_msb__1__PC CYREG_PRT0_PC1
#define d_msb__1__PORT 0u
#define d_msb__1__SHIFT 1u
#define d_msb__2__INTTYPE CYREG_PICU0_INTTYPE2
#define d_msb__2__MASK 0x04u
#define d_msb__2__PC CYREG_PRT0_PC2
#define d_msb__2__PORT 0u
#define d_msb__2__SHIFT 2u
#define d_msb__3__INTTYPE CYREG_PICU0_INTTYPE3
#define d_msb__3__MASK 0x08u
#define d_msb__3__PC CYREG_PRT0_PC3
#define d_msb__3__PORT 0u
#define d_msb__3__SHIFT 3u
#define d_msb__4__INTTYPE CYREG_PICU0_INTTYPE4
#define d_msb__4__MASK 0x10u
#define d_msb__4__PC CYREG_PRT0_PC4
#define d_msb__4__PORT 0u
#define d_msb__4__SHIFT 4u
#define d_msb__5__INTTYPE CYREG_PICU0_INTTYPE5
#define d_msb__5__MASK 0x20u
#define d_msb__5__PC CYREG_PRT0_PC5
#define d_msb__5__PORT 0u
#define d_msb__5__SHIFT 5u
#define d_msb__6__INTTYPE CYREG_PICU0_INTTYPE6
#define d_msb__6__MASK 0x40u
#define d_msb__6__PC CYREG_PRT0_PC6
#define d_msb__6__PORT 0u
#define d_msb__6__SHIFT 6u
#define d_msb__7__INTTYPE CYREG_PICU0_INTTYPE7
#define d_msb__7__MASK 0x80u
#define d_msb__7__PC CYREG_PRT0_PC7
#define d_msb__7__PORT 0u
#define d_msb__7__SHIFT 7u
#define d_msb__AG CYREG_PRT0_AG
#define d_msb__AMUX CYREG_PRT0_AMUX
#define d_msb__BIE CYREG_PRT0_BIE
#define d_msb__BIT_MASK CYREG_PRT0_BIT_MASK
#define d_msb__BYP CYREG_PRT0_BYP
#define d_msb__CTL CYREG_PRT0_CTL
#define d_msb__DM0 CYREG_PRT0_DM0
#define d_msb__DM1 CYREG_PRT0_DM1
#define d_msb__DM2 CYREG_PRT0_DM2
#define d_msb__DR CYREG_PRT0_DR
#define d_msb__INP_DIS CYREG_PRT0_INP_DIS
#define d_msb__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define d_msb__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define d_msb__LCD_EN CYREG_PRT0_LCD_EN
#define d_msb__MASK 0xFFu
#define d_msb__PORT 0u
#define d_msb__PRT CYREG_PRT0_PRT
#define d_msb__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define d_msb__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define d_msb__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define d_msb__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define d_msb__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define d_msb__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define d_msb__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define d_msb__PS CYREG_PRT0_PS
#define d_msb__SHIFT 0u
#define d_msb__SLW CYREG_PRT0_SLW

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x00u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x01u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x01u

/* GraphicLCDIntf */
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_A0_REG CYREG_B0_UDB06_07_A0
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_A1_REG CYREG_B0_UDB06_07_A1
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_D0_REG CYREG_B0_UDB06_07_D0
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_D1_REG CYREG_B0_UDB06_07_D1
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_F0_REG CYREG_B0_UDB06_07_F0
#define GraphicLCDIntf_GraphLcd16_Lsb__16BIT_F1_REG CYREG_B0_UDB06_07_F1
#define GraphicLCDIntf_GraphLcd16_Lsb__A0_A1_REG CYREG_B0_UDB06_A0_A1
#define GraphicLCDIntf_GraphLcd16_Lsb__A0_REG CYREG_B0_UDB06_A0
#define GraphicLCDIntf_GraphLcd16_Lsb__A1_REG CYREG_B0_UDB06_A1
#define GraphicLCDIntf_GraphLcd16_Lsb__D0_D1_REG CYREG_B0_UDB06_D0_D1
#define GraphicLCDIntf_GraphLcd16_Lsb__D0_REG CYREG_B0_UDB06_D0
#define GraphicLCDIntf_GraphLcd16_Lsb__D1_REG CYREG_B0_UDB06_D1
#define GraphicLCDIntf_GraphLcd16_Lsb__DP_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb__F0_F1_REG CYREG_B0_UDB06_F0_F1
#define GraphicLCDIntf_GraphLcd16_Lsb__F0_REG CYREG_B0_UDB06_F0
#define GraphicLCDIntf_GraphLcd16_Lsb__F1_REG CYREG_B0_UDB06_F1
#define GraphicLCDIntf_GraphLcd16_Lsb__MSK_DP_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb__PER_DP_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB06_07_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_COUNT_COUNT_REG CYREG_B0_UDB06_07_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_MASK_MASK_REG CYREG_B0_UDB06_07_MSK
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_MASK_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_PERIOD_MASK_REG CYREG_B0_UDB06_07_MSK
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__CONTROL_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__CONTROL_REG CYREG_B0_UDB06_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__CONTROL_ST_REG CYREG_B0_UDB06_ST_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__COUNT_REG CYREG_B0_UDB06_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__COUNT_ST_REG CYREG_B0_UDB06_ST_CTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__PER_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Lsb_PO__PERIOD_REG CYREG_B0_UDB06_MSK
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_A0_REG CYREG_B0_UDB07_08_A0
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_A1_REG CYREG_B0_UDB07_08_A1
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_D0_REG CYREG_B0_UDB07_08_D0
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_D1_REG CYREG_B0_UDB07_08_D1
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_F0_REG CYREG_B0_UDB07_08_F0
#define GraphicLCDIntf_GraphLcd16_Msb__16BIT_F1_REG CYREG_B0_UDB07_08_F1
#define GraphicLCDIntf_GraphLcd16_Msb__A0_A1_REG CYREG_B0_UDB07_A0_A1
#define GraphicLCDIntf_GraphLcd16_Msb__A0_REG CYREG_B0_UDB07_A0
#define GraphicLCDIntf_GraphLcd16_Msb__A1_REG CYREG_B0_UDB07_A1
#define GraphicLCDIntf_GraphLcd16_Msb__D0_D1_REG CYREG_B0_UDB07_D0_D1
#define GraphicLCDIntf_GraphLcd16_Msb__D0_REG CYREG_B0_UDB07_D0
#define GraphicLCDIntf_GraphLcd16_Msb__D1_REG CYREG_B0_UDB07_D1
#define GraphicLCDIntf_GraphLcd16_Msb__DP_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb__F0_F1_REG CYREG_B0_UDB07_F0_F1
#define GraphicLCDIntf_GraphLcd16_Msb__F0_REG CYREG_B0_UDB07_F0
#define GraphicLCDIntf_GraphLcd16_Msb__F1_REG CYREG_B0_UDB07_F1
#define GraphicLCDIntf_GraphLcd16_Msb__MSK_DP_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb__PER_DP_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB07_08_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB07_08_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB07_08_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_COUNT_COUNT_REG CYREG_B0_UDB07_08_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_MASK_MASK_REG CYREG_B0_UDB07_08_MSK
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_MASK_PERIOD_REG CYREG_B0_UDB07_08_MSK
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_PERIOD_MASK_REG CYREG_B0_UDB07_08_MSK
#define GraphicLCDIntf_GraphLcd16_Msb_PO__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB07_08_MSK
#define GraphicLCDIntf_GraphLcd16_Msb_PO__CONTROL_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__CONTROL_REG CYREG_B0_UDB07_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__CONTROL_ST_REG CYREG_B0_UDB07_ST_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__COUNT_REG CYREG_B0_UDB07_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__COUNT_ST_REG CYREG_B0_UDB07_ST_CTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__PER_CTL_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define GraphicLCDIntf_GraphLcd16_Msb_PO__PERIOD_REG CYREG_B0_UDB07_MSK
#define GraphicLCDIntf_GraphLcd16_MsbReg__0__MASK 0x01u
#define GraphicLCDIntf_GraphLcd16_MsbReg__0__POS 0
#define GraphicLCDIntf_GraphLcd16_MsbReg__1__MASK 0x02u
#define GraphicLCDIntf_GraphLcd16_MsbReg__1__POS 1
#define GraphicLCDIntf_GraphLcd16_MsbReg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define GraphicLCDIntf_GraphLcd16_MsbReg__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define GraphicLCDIntf_GraphLcd16_MsbReg__2__MASK 0x04u
#define GraphicLCDIntf_GraphLcd16_MsbReg__2__POS 2
#define GraphicLCDIntf_GraphLcd16_MsbReg__3__MASK 0x08u
#define GraphicLCDIntf_GraphLcd16_MsbReg__3__POS 3
#define GraphicLCDIntf_GraphLcd16_MsbReg__4__MASK 0x10u
#define GraphicLCDIntf_GraphLcd16_MsbReg__4__POS 4
#define GraphicLCDIntf_GraphLcd16_MsbReg__5__MASK 0x20u
#define GraphicLCDIntf_GraphLcd16_MsbReg__5__POS 5
#define GraphicLCDIntf_GraphLcd16_MsbReg__6__MASK 0x40u
#define GraphicLCDIntf_GraphLcd16_MsbReg__6__POS 6
#define GraphicLCDIntf_GraphLcd16_MsbReg__7__MASK 0x80u
#define GraphicLCDIntf_GraphLcd16_MsbReg__7__POS 7
#define GraphicLCDIntf_GraphLcd16_MsbReg__MASK 0xFFu
#define GraphicLCDIntf_GraphLcd16_MsbReg__MASK_REG CYREG_B1_UDB07_MSK
#define GraphicLCDIntf_GraphLcd16_MsbReg__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define GraphicLCDIntf_GraphLcd16_MsbReg__STATUS_REG CYREG_B1_UDB07_ST
#define GraphicLCDIntf_LsbReg__0__MASK 0x01u
#define GraphicLCDIntf_LsbReg__0__POS 0
#define GraphicLCDIntf_LsbReg__1__MASK 0x02u
#define GraphicLCDIntf_LsbReg__1__POS 1
#define GraphicLCDIntf_LsbReg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define GraphicLCDIntf_LsbReg__16BIT_STATUS_REG CYREG_B1_UDB06_07_ST
#define GraphicLCDIntf_LsbReg__2__MASK 0x04u
#define GraphicLCDIntf_LsbReg__2__POS 2
#define GraphicLCDIntf_LsbReg__3__MASK 0x08u
#define GraphicLCDIntf_LsbReg__3__POS 3
#define GraphicLCDIntf_LsbReg__4__MASK 0x10u
#define GraphicLCDIntf_LsbReg__4__POS 4
#define GraphicLCDIntf_LsbReg__5__MASK 0x20u
#define GraphicLCDIntf_LsbReg__5__POS 5
#define GraphicLCDIntf_LsbReg__6__MASK 0x40u
#define GraphicLCDIntf_LsbReg__6__POS 6
#define GraphicLCDIntf_LsbReg__7__MASK 0x80u
#define GraphicLCDIntf_LsbReg__7__POS 7
#define GraphicLCDIntf_LsbReg__MASK 0xFFu
#define GraphicLCDIntf_LsbReg__MASK_REG CYREG_B1_UDB06_MSK
#define GraphicLCDIntf_LsbReg__STATUS_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define GraphicLCDIntf_LsbReg__STATUS_REG CYREG_B1_UDB06_ST
#define GraphicLCDIntf_StsReg__0__MASK 0x01u
#define GraphicLCDIntf_StsReg__0__POS 0
#define GraphicLCDIntf_StsReg__1__MASK 0x02u
#define GraphicLCDIntf_StsReg__1__POS 1
#define GraphicLCDIntf_StsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define GraphicLCDIntf_StsReg__16BIT_STATUS_REG CYREG_B0_UDB07_08_ST
#define GraphicLCDIntf_StsReg__MASK 0x03u
#define GraphicLCDIntf_StsReg__MASK_REG CYREG_B0_UDB07_MSK
#define GraphicLCDIntf_StsReg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define GraphicLCDIntf_StsReg__PER_ST_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define GraphicLCDIntf_StsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define GraphicLCDIntf_StsReg__STATUS_CNT_REG CYREG_B0_UDB07_ST_CTL
#define GraphicLCDIntf_StsReg__STATUS_CONTROL_REG CYREG_B0_UDB07_ST_CTL
#define GraphicLCDIntf_StsReg__STATUS_REG CYREG_B0_UDB07_ST

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 80000000U
#define BCLK__BUS_CLK__KHZ 80000U
#define BCLK__BUS_CLK__MHZ 80U
#define CY_PROJECT_NAME "LittlevGL(5v3)_demo_ILI9341"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 21u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E160069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 21u
#define CYDEV_CHIP_MEMBER_4D 16u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 22u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 20u
#define CYDEV_CHIP_MEMBER_4I 26u
#define CYDEV_CHIP_MEMBER_4J 17u
#define CYDEV_CHIP_MEMBER_4K 18u
#define CYDEV_CHIP_MEMBER_4L 25u
#define CYDEV_CHIP_MEMBER_4M 24u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 23u
#define CYDEV_CHIP_MEMBER_4Q 14u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 19u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 15u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 27u
#define CYDEV_CHIP_MEMBER_FM3 31u
#define CYDEV_CHIP_MEMBER_FM4 32u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 28u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 30u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDIO0 3.3
#define CYDEV_VDDIO0_MV 3300
#define CYDEV_VDDIO1 3.3
#define CYDEV_VDDIO1_MV 3300
#define CYDEV_VDDIO2 3.3
#define CYDEV_VDDIO2_MV 3300
#define CYDEV_VDDIO3 3.3
#define CYDEV_VDDIO3_MV 3300
#define CYDEV_VIO0 3.3
#define CYDEV_VIO0_MV 3300
#define CYDEV_VIO1 3.3
#define CYDEV_VIO1_MV 3300
#define CYDEV_VIO2 3.3
#define CYDEV_VIO2_MV 3300
#define CYDEV_VIO3 3.3
#define CYDEV_VIO3_MV 3300
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
