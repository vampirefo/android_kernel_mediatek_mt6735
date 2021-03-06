/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

#ifndef TOUCHPANEL_H__
#define TOUCHPANEL_H__

/* Pre-defined definition */
#define TPD_TYPE_CAPACITIVE
#define TPD_POWER_SOURCE	MT6328_POWER_LDO_VGP1         
#define TPD_I2C_BUS		1
#define TPD_I2C_ADDR		0x39
#define TPD_WAKEUP_TRIAL	60
#define TPD_WAKEUP_DELAY	100

//#define FTM_BUTTON 1
//#define TPD_HAVE_TREMBLE_ELIMINATION

/* Define the virtual button mapping */
//#define TPD_HAVE_BUTTON
/*
#define TPD_BUTTON_HEIGH        (150)
#define TPD_KEY_COUNT           3
#define TPD_KEYS                { KEY_MENU, KEY_HOMEPAGE,KEY_BACK}
#define TPD_KEYS_DIM            {{120,1870,200,TPD_BUTTON_HEIGH},{360,1870,200,TPD_BUTTON_HEIGH},{600,1870,200,TPD_BUTTON_HEIGH}}

*/

#define CUSTOM_MAX_WIDTH (1080)
#define CUSTOM_MAX_HEIGHT (1920)

#define TPD_KEY_COUNT           3
#define TPD_KEYS                { KEY_MENU, KEY_HOMEPAGE, KEY_BACK}


#define TPD_YMAX        (CUSTOM_MAX_HEIGHT+80)
#define TPD_Y_OFFSET		30

#define TPD_B1_FP	0		//Button 1 pad space
#define TPD_B1_W		CUSTOM_MAX_WIDTH/3	//Button 1 Width
#define TPD_B2_FP	0		//Button 2 pad space
#define TPD_B2_W		CUSTOM_MAX_WIDTH/3		//Button 2 Width
#define TPD_B3_FP	0		//Button 3 pad space
#define TPD_B3_W		CUSTOM_MAX_WIDTH/3		//Button 3 Width

#define TPD_BUTTON1_X_CENTER	(TPD_B1_FP + TPD_B1_W/2)
#define TPD_BUTTON2_X_CENTER	(TPD_B1_FP + TPD_B1_W + TPD_B2_FP + TPD_B2_W/2)
#define TPD_BUTTON3_X_CENTER	(TPD_B1_FP + TPD_B1_W + TPD_B2_FP + TPD_B2_W + TPD_B3_FP + TPD_B3_W/2)

#define TPD_BUTTON_SIZE_HEIGHT  150
// //50
#define TPD_BUTTON_Y_CENTER   	(CUSTOM_MAX_HEIGHT + TPD_Y_OFFSET + (TPD_YMAX - CUSTOM_MAX_HEIGHT - TPD_Y_OFFSET)/2)

#define TPD_KEYS_DIM		{{TPD_BUTTON1_X_CENTER, TPD_BUTTON_Y_CENTER, TPD_B1_W, TPD_BUTTON_SIZE_HEIGHT},	\
				 			{TPD_BUTTON2_X_CENTER, TPD_BUTTON_Y_CENTER, TPD_B2_W, TPD_BUTTON_SIZE_HEIGHT},	\
							{TPD_BUTTON3_X_CENTER, TPD_BUTTON_Y_CENTER, TPD_B3_W, TPD_BUTTON_SIZE_HEIGHT}}







/* Define the touch dimension */
#ifdef TPD_HAVE_BUTTON
#define TPD_TOUCH_HEIGH_RATIO	80
#define TPD_DISPLAY_HEIGH_RATIO	73
#endif

/* Define the 0D button mapping */
#ifdef FTM_BUTTON  //TPD_HAVE_BUTTON
#define TPD_0D_BUTTON		{}
#else
#define TPD_0D_BUTTON		{KEY_MENU, KEY_HOMEPAGE, KEY_BACK, KEY_SEARCH}
#endif

#define GTP_CHARGER_SWITCH_SYNA 
//#define DO_STARTUP_FW_UPDATE
//#define SYNAPTIPCS_FACTORY_FW_UPDATE
#define DEVICE_NAME "S3508"
#endif /* TOUCHPANEL_H__ */

#if 0
#define CTP_DBG(fmt, arg...) \
	printk("[CTP-synaptics] %s (line:%d) :" fmt "\r\n", __func__, __LINE__, ## arg)
#else
#define CTP_DBG(fmt, arg...) do {} while (0)
#endif
