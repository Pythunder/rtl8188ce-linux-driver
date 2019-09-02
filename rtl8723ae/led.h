/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright( c ) 2009-2012  Realtek Corporation.*/

#ifndef __RTL92CE_LED_H__
#define __RTL92CE_LED_H__

void rtl8723e_init_sw_leds( struct ieee80211_hw *hw );
void rtl8723e_sw_led_on( struct ieee80211_hw *hw, struct rtl_led *pled );
void rtl8723e_sw_led_off( struct ieee80211_hw *hw, struct rtl_led *pled );
void rtl8723e_led_control( struct ieee80211_hw *hw, enum led_ctl_mode ledaction );

#endif
