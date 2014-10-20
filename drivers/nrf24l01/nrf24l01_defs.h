/*
 * nrf24l01_defs.h
 *
 *  Created on: 2014.10.20.
 *      Author: Grimgrin
 */

#ifndef NRF24L01_DEFS_H_
#define NRF24L01_DEFS_H_

#include "../../inc/types.h"

/* Register addresses */

#define NRF_REG_CONFIG			(0x00)
#define NRF_REG_EN_AA			(0x01)
#define NRF_REG_EN_RXADDR		(0x02)
#define NRF_REG_SETUP_AW		(0x03)
#define NRF_REG_SETUP_RETR		(0x04)
#define NRF_REG_RF_CH			(0x05)
#define NRF_REG_RF_SETUP		(0x06)
#define NRF_REG_STATUS			(0x07)
#define NRF_REG_OBSERVER_TX		(0x08)
#define NRF_REG_CD				(0x09)
#define NRF_REG_RX_ADDR_P0		(0x0A)
#define NRF_REG_RX_ADDR_P1		(0x0B)
#define NRF_REG_RX_ADDR_P2		(0x0C)
#define NRF_REG_RX_ADDR_P3		(0x0D)
#define NRF_REG_RX_ADDR_P4		(0x0E)
#define NRF_REG_RX_ADDR_P5		(0x0F)
#define NRF_REG_TX_ADDR			(0x10)
#define NRF_REG_RX_PW_P0		(0x11)
#define NRF_REG_RX_PW_P1		(0x12)
#define NRF_REG_RX_PW_P2		(0x13)
#define NRF_REG_RX_PW_P3		(0x14)
#define NRF_REG_RX_PW_P4		(0x15)
#define NRF_REG_RX_PW_P5		(0x16)
#define NRF_REG_FIFO_STATUS		(0x17)
#define NRF_REG_DYNPD			(0x1C)
#define NRF_REG_FEATURE			(0x1D)

/* Register bitmasks */

/* CONFIG register */
#define NRF_BIT_PRIM_RX			(BIT_0)
#define NRF_BIT_PWR_UP			(BIT_1)
#define NRF_BIT_CRCO			(BIT_2)
#define NRF_BIT_EN_CRC			(BIT_3)
#define NRF_BIT_MASK_MAX_RT		(BIT_4)
#define NRF_BIT_MASK_TX_DS		(BIT_5)
#define NRF_BIT_MASK_RX_DR		(BIT_6)

/* EN_AA register */
#define NRF_BIT_ENAA_P0			(BIT_0)
#define NRF_BIT_ENAA_P1			(BIT_1)
#define NRF_BIT_ENAA_P2			(BIT_2)
#define NRF_BIT_ENAA_P3			(BIT_3)
#define NRF_BIT_ENAA_P4			(BIT_4)
#define NRF_BIT_ENAA_P5			(BIT_5)

/* EN_RXADDR register */
#define NRF_BIT_ERX_P0			(BIT_0)
#define NRF_BIT_ERX_P1			(BIT_1)
#define NRF_BIT_ERX_P2			(BIT_2)
#define NRF_BIT_ERX_P3			(BIT_3)
#define NRF_BIT_ERX_P4			(BIT_4)
#define NRF_BIT_ERX_P5			(BIT_5)

/* SETUP_AW register */
#define NRF_BIT_AW_ILLEGAL		(0x00u)
#define NRF_BIT_AW_BIT0			(BIT_0)
#define NRF_BIT_AW_BIT1			(BIT_1)
#define NRF_BITF_AW				(0x03u)
#define NRF_BITF_AW__3_BYTES	(0x01u)
#define NRF_BITF_AW__4_BYTES	(0x02u)
#define NRF_BITF_AW__5_BYTES	(0x03u)

/* SETUP_PETR register */
#define NRF_BITF_ARC			(0x0f)
#define NRF_BITF_ARD			(0xf0)

/* RF_CH register */
#define NRF_BITF_RF_CH			(0x3f)

/* RF_SETUP register */
#define NRF_BIT_LNA_HCURR		(BIT_0)
#define NRF_BITF_RF_PWR			(0x06u)
#define NRF_BITF_RF_PWR__18dBm	(0x00u)
#define NRF_BITF_RF_PWR__12dBm	(0x02u)
#define NRF_BITF_RF_PWR__6dBm	(0x04u)
#define NRF_BITF_RF_PWR__0dBm	(0x06u)
#define NRF_BITF_RF_PWR_BIT0	(BIT_1)
#define NRF_BITF_RF_PWR_BIT1	(BIT_2)
#define NRF_BIT_RF_DR			(BIT_3)
#define NRF_BIT_RF_DR_1Mbps		(0x00u)
#define NRF_BIT_RF_DR_2Mbps		(BIT_3)
#define NRF_BIT_PLL_LOCK		(BIT_4)

/* STATUS register */
#define NRF_BIT_TX_FULL			(BIT_0)
#define NRF_BITF_RX_P_NO		(0x0eu)
#define NRF_BIT_MAX_RT			(BIT_4)
#define NRF_BIT_TX_DS			(BIT_5)
#define NRF_BIT_RX_DR			(BIT_6)































#endif /* NRF24L01_DEFS_H_ */
