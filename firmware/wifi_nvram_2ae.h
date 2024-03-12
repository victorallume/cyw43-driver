/**
 * Character array of NVRAM image
 * Generated from https://github.com/murata-wireless/cyw-fmac-nvram/blob/b5a9984658e16db6bd50ba6b585231dc6760e1eb/cyfmac4373-sdio.2AE.txt
 */

static const uint8_t wifi_nvram_4343[] CYW43_RESOURCE_ATTRIBUTE =
"NVRAMRev=$Rev: 727958 $\x00"
"sromrev=11\x00"
"vendid=0x14e4\x00"
// 11ac Dual Band Device ID
"devid=0x4418\x00"
"manfid=0x2d0\x00"
"prodid=0x0885\x00"
"macaddr=00:90:4c:2d:92:38\x00"
"nocrc=1\x00"

//  SSID
"boardtype=0x885\x00"
"boardrev=0x1200\x00"
"xtalfreq=37400\x00"

// X BFL_BTCOEXIST   = 0x00000001   This board implements Bluetooth coexistence
"boardflags=0x00000001\x00"
// Board flags 2:
// X BFL2_BT_SHARE_ANT0     = 0x00800000   share core0 antenna with BT
"boardflags2=0x00800000\x00"
// Board flags 3:
// femctrl table is read from nvram and Av/Vmid read from NVRAM
// Read RCAL from OTP : Bit 13
"boardflags3=0x48202100\x00"

// Margin to account for drift in LPO frequency in units of 0.025%
"ext_lpo_margin_frac=0\x00"

// New throttle scheme variables
// temp at which throttling to kick in
"tempthresh=105\x00"
// delta between throttle on & off
"temps_hysteresis=20\x00"
// decides how many steps/depth for throttle; (0) means (100-(0))/ 5  = 20 steps
"temps_txduty_lowlimit=0\x00"
// seconds , delta between temp sense update for throttle algo, every 1 secs check will happen for doing throttle
"temps_period=1\x00"

"phycal_tempdelta=15\x00"
"rxgains2gelnagaina0=0\x00"
"rxgains2gtrisoa0=0\x00"
"rxgains2gtrelnabypa0=0\x00"
"rxgains5gelnagaina0=0\x00"
"rxgains5gtrisoa0=0\x00"
"rxgains5gtrelnabypa0=0\x00"
"pdgain5g=3\x00"
"pdgain2g=3\x00"
"antswitch=0x6\x00"
"rxchain=1\x00"
"txchain=1\x00"
"aa2g=3\x00"
"aa5g=3\x00"
"tssipos5g=1\x00"
"tssipos2g=1\x00"
"femctrl=0\x00"
"pa2ga0=-188,5529,-658\x00"
"pa5ga0=-153,5976,-697,-153,5784,-684,-155,5691,-677,-167,5748,-688\x00"
"pdoffsetcckma0=0xf\x00"
"pdoffset2g40ma0=0x9\x00"
"pdoffset40ma0=0xffff\x00"
"pdoffset80ma0=0xeeee\x00"
"extpagain5g=2\x00"
"extpagain2g=2\x00"
"AvVmid_c0=1,130,0,160,0,160,0,160,0,160\x00"
"maxp2ga0=78\x00"
"maxp5ga0=70,70,70,70\x00"
"cckbw202gpo=0x2222\x00"
"dot11agofdmhrbw202gpo=0x4400\x00"
"ofdmlrbw202gpo=0x0000\x00"
"mcsbw202gpo=0x88888444\x00"
"mcsbw402gpo=0x88655333\x00"
"mcsbw205glpo=0xA6444440\x00"
"mcsbw205gmpo=0xA6444440\x00"
"mcsbw205ghpo=0xA6444440\x00"
"mcsbw405glpo=0xAA666664\x00"
"mcsbw405gmpo=0xAA666664\x00"
"mcsbw405ghpo=0xAA666664\x00"
"mcsbw805glpo=0xAA666666\x00"
"mcsbw805gmpo=0xAA666666\x00"
"mcsbw805ghpo=0xAA666666\x00"

"ppr_hitemp_offset=70,10\x00"
//            idx 0: PPR temp thresh, default 150
//            idx 1: PPR temp thresh hysteresis, default 15
"cckbw202gpo_ht=0x0000\x00"
//            CCK high temp offset, 0.5dBm/step, rate(11,5.5,2,1Mbps)
"ofdmbw202gpo_ht=0x00000000\x00"
//        2G OFDM temp offset, 0.5dBm/step, rate(54,48,36,24,18,12,9,6Mbps)
"mcsbw202gpo_ht=0x22222222\x00"
//        2G BW20 VHT/HT temp offset, 0.5dBm/step, rate(C9,C8,M7,M6,M5,M4,M3,M2-0)
"ofdmbw205gpo_ht=0x22222222\x00"
//        5G OFDM temp offset, 0.5dBm/step, rate(54,48,36,24,18,12,9,6Mbps)
"mcsbw205gpo_ht=0x22222222\x00"
//        5G BW20 VHT/HT temp offset, 0.5dBm/step, rate(C9,C8,M7,M6,M5,M4,M3,M2-0)
"mcsbw405gpo_ht=0x22222222\x00"
//        5G BW40 VHT/HT temp offset, 0.5dBm/step, rate(C9,C8,M7,M6,M5,M4,M3,M2-0)
"mcsbw805gpo_ht=0x22222222\x00"
//        5G BW80 VHT/HT temp offset, 0.5dBm/step, rate(C9,C8,M7,M6,M5,M4,M3,M2-0)

// RF switch control
"swctrlmap_2g=0x00000000,0x00000000,0x00000000,0x000000,0x1ff\x00"
"swctrlmap_5g=0x10101010,0x40404040,0x00000000,0x000000,0x1ff\x00"
"swctrlmapext_2g=0x00000000,0x00000000,0x00000000,0x000000,0x000\x00"
"swctrlmapext_5g=0x00000000,0x00000000,0x00000000,0x000000,0x000\x00"
"fem_table_init_val=0x1131,0x1131\x00"
"nb_papdcalidx=0x280f\x00"
"nb_txattn=0x0303\x00"
"nb_rxattn=0x0303\x00"
"nb_bbmult=0x3948\x00"
"nb_eps_offset=0x01e601ea\x00"
// Enable Analytic PAPD mode
"papdmode=1\x00"
// RSSI adjust
"rssi_delta_2g_c0=-2,-2,-2,-2\x00"
"rssi_delta_5gl_c0=-2,-2,-2,-2,-1,-1\x00"
"rssi_delta_5gml_c0=-2,-2,-3,-3,-1,-1\x00"
"rssi_delta_5gmu_c0=0,0,-1,-1,0,0\x00"
"rssi_delta_5gh_c0=-1,-1,-2,-2,0,0\x00"

// WoWL_GPIO/HOST_WAKE settings
//wowl_gpio=0
//wowl_polarity=1

// ATE related
// First read from OTP , if value is 0 then force rcal value to static in driver
"ATErcalmode=0\x00"

"swdiv_en=1\x00" //To enable SW-DIV feature
"swdiv_gpio=0\x00"
"swdiv_swctrl_en=2\x00"
"swdiv_swctrl_ant0=0\x00"
"swdiv_swctrl_ant1=1\x00"
"swdiv_antmap2g_main=1\x00"
"swdiv_antmap5g_main=1\x00"

"swdiv_snrlim=290\x00" //Only enable sw_div if the snr on present antenna is less than 290/8=36.25
"swdiv_thresh=2000\x00" //No.of rxpkts threshold
"swdiv_snrthresh=24\x00" //Difference between antenna's snr is greater than 24/8=3dB, then shift the antennas
"swdiv_timeon=10\x00"
"swdiv_timeoff=1\x00"
"swdiv_snr2g20=232\x00"
"swdiv_snr2g40=257\x00"
"swdiv_snr5g20=296\x00"
"swdiv_snr5g40=312\x00"
"swdiv_snr5g80=296\x00"

"swdiv_ap_dead_check=1\x00" //Enable sending of null frames at a periodicity of 1 sec to check whether the present antenna is dead
"swdiv_ap_div=1\x00" //Enabling ap_diversity

//Enables idac_main_mode only when PA LDO Voltage is 2.9.
//In this mode pa5g_idac_main will be programmed to a high value(32)
//Done for EVM improvement 
"idac_main_mode=1\x00"
//PA LDO Voltage 2.9V
"paldo3p3_voltage=4\x00"
//2G-5G xtal settings made similar
"xtal_ldo_ctl=1\x00"
//To enable industrial grade related tunings
"e_grade=1\x00"
// Enable FDSS
"fdss_level_2g=4\x00"
"fdss_level_5g=4\x00"
"fdss_interp_en=1\x00"
"\x00\x00";