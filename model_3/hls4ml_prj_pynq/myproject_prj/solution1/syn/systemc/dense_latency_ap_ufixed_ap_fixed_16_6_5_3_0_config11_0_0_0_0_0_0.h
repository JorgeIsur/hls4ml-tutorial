// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0_HH_
#define _dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0 : public sc_module {
    // Port declarations 37
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<6> > data_0_V_read;
    sc_in< sc_lv<6> > data_1_V_read;
    sc_in< sc_lv<6> > data_2_V_read;
    sc_in< sc_lv<6> > data_3_V_read;
    sc_in< sc_lv<6> > data_4_V_read;
    sc_in< sc_lv<6> > data_5_V_read;
    sc_in< sc_lv<6> > data_6_V_read;
    sc_in< sc_lv<6> > data_8_V_read;
    sc_in< sc_lv<6> > data_9_V_read;
    sc_in< sc_lv<6> > data_10_V_read;
    sc_in< sc_lv<6> > data_11_V_read;
    sc_in< sc_lv<6> > data_12_V_read;
    sc_in< sc_lv<6> > data_13_V_read;
    sc_in< sc_lv<6> > data_17_V_read;
    sc_in< sc_lv<6> > data_18_V_read;
    sc_in< sc_lv<6> > data_19_V_read;
    sc_in< sc_lv<6> > data_20_V_read;
    sc_in< sc_lv<6> > data_21_V_read;
    sc_in< sc_lv<6> > data_22_V_read;
    sc_in< sc_lv<6> > data_24_V_read;
    sc_in< sc_lv<6> > data_25_V_read;
    sc_in< sc_lv<6> > data_26_V_read;
    sc_in< sc_lv<6> > data_28_V_read;
    sc_in< sc_lv<6> > data_29_V_read;
    sc_in< sc_lv<6> > data_31_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0(sc_module_name name);
    SC_HAS_PROCESS(dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0);

    ~dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > data_5_V_read_4_reg_1847;
    sc_signal< sc_lv<11> > trunc_ln_reg_1852;
    sc_signal< sc_lv<10> > lshr_ln708_2_reg_1857;
    sc_signal< sc_lv<10> > lshr_ln708_3_reg_1862;
    sc_signal< sc_lv<10> > lshr_ln708_7_reg_1867;
    sc_signal< sc_lv<9> > trunc_ln708_122_reg_1872;
    sc_signal< sc_lv<10> > lshr_ln708_9_reg_1877;
    sc_signal< sc_lv<10> > lshr_ln708_10_reg_1882;
    sc_signal< sc_lv<11> > trunc_ln708_125_fu_897_p4;
    sc_signal< sc_lv<11> > trunc_ln708_125_reg_1887;
    sc_signal< sc_lv<10> > lshr_ln708_12_reg_1892;
    sc_signal< sc_lv<10> > lshr_ln708_15_reg_1897;
    sc_signal< sc_lv<12> > add_ln703_fu_1099_p2;
    sc_signal< sc_lv<12> > add_ln703_reg_1902;
    sc_signal< sc_lv<12> > add_ln703_4_fu_1105_p2;
    sc_signal< sc_lv<12> > add_ln703_4_reg_1907;
    sc_signal< sc_lv<12> > add_ln703_14_fu_1111_p2;
    sc_signal< sc_lv<12> > add_ln703_14_reg_1912;
    sc_signal< sc_lv<11> > add_ln703_16_fu_1117_p2;
    sc_signal< sc_lv<11> > add_ln703_16_reg_1917;
    sc_signal< sc_lv<12> > add_ln703_19_fu_1123_p2;
    sc_signal< sc_lv<12> > add_ln703_19_reg_1922;
    sc_signal< sc_lv<12> > add_ln703_21_fu_1129_p2;
    sc_signal< sc_lv<12> > add_ln703_21_reg_1927;
    sc_signal< sc_lv<12> > add_ln703_30_fu_1135_p2;
    sc_signal< sc_lv<12> > add_ln703_30_reg_1932;
    sc_signal< sc_lv<12> > add_ln703_32_fu_1141_p2;
    sc_signal< sc_lv<12> > add_ln703_32_reg_1937;
    sc_signal< sc_lv<12> > add_ln703_33_fu_1147_p2;
    sc_signal< sc_lv<12> > add_ln703_33_reg_1942;
    sc_signal< sc_lv<11> > add_ln703_38_fu_1153_p2;
    sc_signal< sc_lv<11> > add_ln703_38_reg_1947;
    sc_signal< sc_lv<13> > add_ln703_5_fu_1503_p2;
    sc_signal< sc_lv<13> > add_ln703_5_reg_1952;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<11> > add_ln703_6_fu_1509_p2;
    sc_signal< sc_lv<11> > add_ln703_6_reg_1957;
    sc_signal< sc_lv<11> > add_ln703_7_fu_1515_p2;
    sc_signal< sc_lv<11> > add_ln703_7_reg_1962;
    sc_signal< sc_lv<12> > add_ln703_10_fu_1521_p2;
    sc_signal< sc_lv<12> > add_ln703_10_reg_1967;
    sc_signal< sc_lv<11> > add_ln703_11_fu_1527_p2;
    sc_signal< sc_lv<11> > add_ln703_11_reg_1972;
    sc_signal< sc_lv<13> > add_ln703_15_fu_1536_p2;
    sc_signal< sc_lv<13> > add_ln703_15_reg_1977;
    sc_signal< sc_lv<13> > add_ln703_20_fu_1545_p2;
    sc_signal< sc_lv<13> > add_ln703_20_reg_1982;
    sc_signal< sc_lv<13> > add_ln703_22_fu_1554_p2;
    sc_signal< sc_lv<13> > add_ln703_22_reg_1987;
    sc_signal< sc_lv<12> > add_ln703_25_fu_1570_p2;
    sc_signal< sc_lv<12> > add_ln703_25_reg_1992;
    sc_signal< sc_lv<12> > add_ln703_27_fu_1586_p2;
    sc_signal< sc_lv<12> > add_ln703_27_reg_1997;
    sc_signal< sc_lv<14> > add_ln703_35_fu_1621_p2;
    sc_signal< sc_lv<14> > add_ln703_35_reg_2002;
    sc_signal< sc_lv<12> > add_ln703_37_fu_1637_p2;
    sc_signal< sc_lv<12> > add_ln703_37_reg_2007;
    sc_signal< sc_lv<13> > add_ln703_40_fu_1656_p2;
    sc_signal< sc_lv<13> > add_ln703_40_reg_2012;
    sc_signal< sc_lv<6> > ap_port_reg_data_2_V_read;
    sc_signal< sc_lv<6> > ap_port_reg_data_9_V_read;
    sc_signal< sc_lv<6> > ap_port_reg_data_10_V_read;
    sc_signal< sc_lv<6> > ap_port_reg_data_11_V_read;
    sc_signal< sc_lv<6> > ap_port_reg_data_17_V_read;
    sc_signal< sc_lv<6> > ap_port_reg_data_20_V_read;
    sc_signal< sc_lv<6> > ap_port_reg_data_29_V_read;
    sc_signal< sc_lv<6> > mul_ln708_fu_264_p0;
    sc_signal< sc_lv<6> > mul_ln708_1_fu_265_p0;
    sc_signal< sc_lv<11> > zext_ln1118_18_fu_756_p1;
    sc_signal< sc_lv<11> > shl_ln_fu_301_p3;
    sc_signal< sc_lv<11> > zext_ln708_fu_297_p1;
    sc_signal< sc_lv<11> > sub_ln708_fu_309_p2;
    sc_signal< sc_lv<10> > lshr_ln_fu_315_p4;
    sc_signal< sc_lv<11> > shl_ln708_s_fu_333_p3;
    sc_signal< sc_lv<11> > zext_ln1118_fu_329_p1;
    sc_signal< sc_lv<11> > sub_ln708_1_fu_341_p2;
    sc_signal< sc_lv<10> > lshr_ln708_s_fu_347_p4;
    sc_signal< sc_lv<12> > zext_ln1118_1_fu_361_p1;
    sc_signal< sc_lv<12> > sub_ln1118_fu_365_p2;
    sc_signal< sc_lv<11> > shl_ln1118_s_fu_381_p3;
    sc_signal< sc_lv<12> > zext_ln1118_2_fu_389_p1;
    sc_signal< sc_lv<12> > sub_ln1118_1_fu_393_p2;
    sc_signal< sc_lv<11> > trunc_ln708_s_fu_399_p4;
    sc_signal< sc_lv<11> > shl_ln1118_1_fu_413_p3;
    sc_signal< sc_lv<12> > zext_ln1118_3_fu_421_p1;
    sc_signal< sc_lv<12> > sub_ln1118_2_fu_425_p2;
    sc_signal< sc_lv<11> > trunc_ln708_111_fu_431_p4;
    sc_signal< sc_lv<11> > mul_ln708_fu_264_p2;
    sc_signal< sc_lv<11> > shl_ln708_3_fu_464_p3;
    sc_signal< sc_lv<11> > zext_ln1118_6_fu_460_p1;
    sc_signal< sc_lv<11> > sub_ln708_3_fu_472_p2;
    sc_signal< sc_lv<12> > zext_ln1118_7_fu_488_p1;
    sc_signal< sc_lv<12> > sub_ln1118_4_fu_492_p2;
    sc_signal< sc_lv<11> > trunc_ln708_113_fu_498_p4;
    sc_signal< sc_lv<11> > shl_ln1118_3_fu_516_p3;
    sc_signal< sc_lv<12> > zext_ln1118_9_fu_524_p1;
    sc_signal< sc_lv<12> > sub_ln1118_5_fu_528_p2;
    sc_signal< sc_lv<11> > trunc_ln708_114_fu_534_p4;
    sc_signal< sc_lv<11> > zext_ln1118_8_fu_512_p1;
    sc_signal< sc_lv<11> > sub_ln708_4_fu_548_p2;
    sc_signal< sc_lv<10> > lshr_ln708_4_fu_554_p4;
    sc_signal< sc_lv<11> > shl_ln1118_6_fu_568_p3;
    sc_signal< sc_lv<12> > zext_ln1118_12_fu_576_p1;
    sc_signal< sc_lv<12> > sub_ln1118_8_fu_580_p2;
    sc_signal< sc_lv<11> > trunc_ln708_117_fu_586_p4;
    sc_signal< sc_lv<11> > shl_ln1118_7_fu_604_p3;
    sc_signal< sc_lv<12> > zext_ln1118_14_fu_612_p1;
    sc_signal< sc_lv<12> > sub_ln1118_9_fu_616_p2;
    sc_signal< sc_lv<11> > trunc_ln708_118_fu_622_p4;
    sc_signal< sc_lv<11> > zext_ln1118_13_fu_600_p1;
    sc_signal< sc_lv<11> > sub_ln708_7_fu_636_p2;
    sc_signal< sc_lv<11> > shl_ln1118_9_fu_652_p3;
    sc_signal< sc_lv<12> > zext_ln1118_16_fu_660_p1;
    sc_signal< sc_lv<12> > sub_ln1118_11_fu_664_p2;
    sc_signal< sc_lv<11> > trunc_ln708_120_fu_670_p4;
    sc_signal< sc_lv<11> > shl_ln1118_10_fu_684_p3;
    sc_signal< sc_lv<12> > zext_ln1118_17_fu_692_p1;
    sc_signal< sc_lv<12> > sub_ln1118_12_fu_696_p2;
    sc_signal< sc_lv<11> > trunc_ln708_121_fu_702_p4;
    sc_signal< sc_lv<9> > shl_ln708_7_fu_716_p3;
    sc_signal< sc_lv<7> > shl_ln708_8_fu_728_p3;
    sc_signal< sc_lv<10> > zext_ln708_10_fu_724_p1;
    sc_signal< sc_lv<10> > zext_ln708_11_fu_736_p1;
    sc_signal< sc_lv<10> > sub_ln708_8_fu_740_p2;
    sc_signal< sc_lv<11> > shl_ln1118_11_fu_761_p3;
    sc_signal< sc_lv<12> > zext_ln1118_19_fu_769_p1;
    sc_signal< sc_lv<12> > sub_ln1118_13_fu_773_p2;
    sc_signal< sc_lv<11> > trunc_ln708_123_fu_779_p4;
    sc_signal< sc_lv<11> > sub_ln708_10_fu_793_p2;
    sc_signal< sc_lv<11> > mul_ln708_1_fu_265_p2;
    sc_signal< sc_lv<11> > shl_ln1118_12_fu_823_p3;
    sc_signal< sc_lv<12> > zext_ln1118_21_fu_831_p1;
    sc_signal< sc_lv<12> > sub_ln1118_14_fu_835_p2;
    sc_signal< sc_lv<11> > trunc_ln708_124_fu_841_p4;
    sc_signal< sc_lv<11> > zext_ln1118_20_fu_819_p1;
    sc_signal< sc_lv<11> > sub_ln708_11_fu_855_p2;
    sc_signal< sc_lv<10> > lshr_ln708_11_fu_861_p4;
    sc_signal< sc_lv<11> > shl_ln1118_13_fu_879_p3;
    sc_signal< sc_lv<12> > zext_ln1118_23_fu_887_p1;
    sc_signal< sc_lv<12> > sub_ln1118_15_fu_891_p2;
    sc_signal< sc_lv<11> > zext_ln1118_22_fu_875_p1;
    sc_signal< sc_lv<11> > sub_ln708_12_fu_911_p2;
    sc_signal< sc_lv<11> > shl_ln1118_14_fu_927_p3;
    sc_signal< sc_lv<12> > zext_ln1118_24_fu_935_p1;
    sc_signal< sc_lv<12> > sub_ln1118_16_fu_939_p2;
    sc_signal< sc_lv<11> > trunc_ln708_126_fu_945_p4;
    sc_signal< sc_lv<11> > shl_ln708_10_fu_963_p3;
    sc_signal< sc_lv<11> > zext_ln708_19_fu_959_p1;
    sc_signal< sc_lv<11> > sub_ln708_13_fu_971_p2;
    sc_signal< sc_lv<10> > lshr_ln708_13_fu_977_p4;
    sc_signal< sc_lv<11> > shl_ln708_11_fu_995_p3;
    sc_signal< sc_lv<11> > zext_ln1118_25_fu_991_p1;
    sc_signal< sc_lv<11> > sub_ln708_14_fu_1003_p2;
    sc_signal< sc_lv<10> > lshr_ln708_14_fu_1009_p4;
    sc_signal< sc_lv<12> > zext_ln1118_26_fu_1023_p1;
    sc_signal< sc_lv<12> > sub_ln1118_17_fu_1027_p2;
    sc_signal< sc_lv<11> > trunc_ln708_127_fu_1033_p4;
    sc_signal< sc_lv<11> > shl_ln1118_16_fu_1051_p3;
    sc_signal< sc_lv<12> > zext_ln1118_29_fu_1059_p1;
    sc_signal< sc_lv<12> > sub_ln1118_19_fu_1063_p2;
    sc_signal< sc_lv<11> > trunc_ln708_129_fu_1069_p4;
    sc_signal< sc_lv<11> > zext_ln1118_28_fu_1047_p1;
    sc_signal< sc_lv<11> > sub_ln708_15_fu_1083_p2;
    sc_signal< sc_lv<12> > sext_ln203_5_fu_544_p1;
    sc_signal< sc_lv<12> > sext_ln203_9_fu_632_p1;
    sc_signal< sc_lv<12> > sext_ln1118_fu_712_p1;
    sc_signal< sc_lv<12> > sext_ln1118_5_fu_789_p1;
    sc_signal< sc_lv<12> > sext_ln1118_6_fu_851_p1;
    sc_signal< sc_lv<12> > zext_ln203_1_fu_357_p1;
    sc_signal< sc_lv<11> > zext_ln708_4_fu_564_p1;
    sc_signal< sc_lv<11> > zext_ln708_21_fu_1019_p1;
    sc_signal< sc_lv<12> > sext_ln1116_1_fu_680_p1;
    sc_signal< sc_lv<12> > sext_ln708_1_fu_955_p1;
    sc_signal< sc_lv<12> > sext_ln1118_9_fu_1079_p1;
    sc_signal< sc_lv<12> > zext_ln203_fu_325_p1;
    sc_signal< sc_lv<12> > sext_ln203_1_fu_409_p1;
    sc_signal< sc_lv<12> > sext_ln203_2_fu_441_p1;
    sc_signal< sc_lv<12> > sext_ln203_4_fu_508_p1;
    sc_signal< sc_lv<12> > sext_ln203_8_fu_596_p1;
    sc_signal< sc_lv<12> > sext_ln1118_7_fu_907_p1;
    sc_signal< sc_lv<12> > sext_ln1116_2_fu_1043_p1;
    sc_signal< sc_lv<11> > zext_ln708_17_fu_871_p1;
    sc_signal< sc_lv<11> > zext_ln708_20_fu_987_p1;
    sc_signal< sc_lv<7> > shl_ln708_2_fu_1170_p3;
    sc_signal< sc_lv<11> > shl_ln708_1_fu_1162_p3;
    sc_signal< sc_lv<11> > zext_ln708_1_fu_1178_p1;
    sc_signal< sc_lv<11> > sub_ln708_2_fu_1182_p2;
    sc_signal< sc_lv<10> > lshr_ln708_1_fu_1188_p4;
    sc_signal< sc_lv<11> > shl_ln1118_2_fu_1205_p3;
    sc_signal< sc_lv<12> > zext_ln1118_5_fu_1212_p1;
    sc_signal< sc_lv<12> > sub_ln1118_3_fu_1216_p2;
    sc_signal< sc_lv<11> > trunc_ln708_112_fu_1222_p4;
    sc_signal< sc_lv<11> > shl_ln1118_4_fu_1239_p3;
    sc_signal< sc_lv<12> > zext_ln1118_10_fu_1247_p1;
    sc_signal< sc_lv<12> > sub_ln1118_6_fu_1251_p2;
    sc_signal< sc_lv<11> > trunc_ln708_115_fu_1257_p4;
    sc_signal< sc_lv<11> > shl_ln708_4_fu_1275_p3;
    sc_signal< sc_lv<11> > zext_ln708_5_fu_1271_p1;
    sc_signal< sc_lv<11> > sub_ln708_5_fu_1283_p2;
    sc_signal< sc_lv<10> > lshr_ln708_5_fu_1289_p4;
    sc_signal< sc_lv<11> > shl_ln1118_5_fu_1303_p3;
    sc_signal< sc_lv<12> > zext_ln1118_11_fu_1311_p1;
    sc_signal< sc_lv<12> > sub_ln1118_7_fu_1315_p2;
    sc_signal< sc_lv<11> > trunc_ln708_116_fu_1321_p4;
    sc_signal< sc_lv<10> > shl_ln708_5_fu_1335_p3;
    sc_signal< sc_lv<7> > shl_ln708_6_fu_1347_p3;
    sc_signal< sc_lv<11> > zext_ln708_7_fu_1343_p1;
    sc_signal< sc_lv<11> > zext_ln708_8_fu_1355_p1;
    sc_signal< sc_lv<11> > sub_ln708_6_fu_1359_p2;
    sc_signal< sc_lv<10> > lshr_ln708_6_fu_1365_p4;
    sc_signal< sc_lv<11> > shl_ln1118_8_fu_1382_p3;
    sc_signal< sc_lv<12> > zext_ln1118_15_fu_1390_p1;
    sc_signal< sc_lv<12> > sub_ln1118_10_fu_1394_p2;
    sc_signal< sc_lv<11> > trunc_ln708_119_fu_1400_p4;
    sc_signal< sc_lv<10> > sext_ln708_fu_1414_p1;
    sc_signal< sc_lv<11> > shl_ln708_9_fu_1425_p3;
    sc_signal< sc_lv<11> > zext_ln708_13_fu_1421_p1;
    sc_signal< sc_lv<11> > sub_ln708_9_fu_1433_p2;
    sc_signal< sc_lv<10> > lshr_ln708_8_fu_1439_p4;
    sc_signal< sc_lv<11> > shl_ln1118_15_fu_1462_p3;
    sc_signal< sc_lv<12> > zext_ln1118_27_fu_1470_p1;
    sc_signal< sc_lv<12> > sub_ln1118_18_fu_1474_p2;
    sc_signal< sc_lv<11> > trunc_ln708_128_fu_1480_p4;
    sc_signal< sc_lv<13> > sext_ln703_6_fu_1500_p1;
    sc_signal< sc_lv<13> > sext_ln703_fu_1497_p1;
    sc_signal< sc_lv<11> > zext_ln708_2_fu_1202_p1;
    sc_signal< sc_lv<11> > zext_ln708_3_fu_1236_p1;
    sc_signal< sc_lv<11> > zext_ln708_14_fu_1449_p1;
    sc_signal< sc_lv<12> > sext_ln203_3_fu_1232_p1;
    sc_signal< sc_lv<12> > sext_ln203_7_fu_1331_p1;
    sc_signal< sc_lv<11> > zext_ln708_6_fu_1299_p1;
    sc_signal< sc_lv<13> > sext_ln703_12_fu_1533_p1;
    sc_signal< sc_lv<13> > sext_ln203_6_fu_1267_p1;
    sc_signal< sc_lv<13> > sext_ln703_16_fu_1542_p1;
    sc_signal< sc_lv<13> > sext_ln1116_fu_1410_p1;
    sc_signal< sc_lv<13> > sext_ln703_18_fu_1551_p1;
    sc_signal< sc_lv<13> > sext_ln1116_3_fu_1490_p1;
    sc_signal< sc_lv<11> > zext_ln708_9_fu_1379_p1;
    sc_signal< sc_lv<11> > zext_ln708_12_fu_1417_p1;
    sc_signal< sc_lv<11> > add_ln703_24_fu_1560_p2;
    sc_signal< sc_lv<12> > zext_ln703_5_fu_1566_p1;
    sc_signal< sc_lv<12> > zext_ln203_3_fu_1375_p1;
    sc_signal< sc_lv<11> > zext_ln708_18_fu_1459_p1;
    sc_signal< sc_lv<11> > add_ln703_26_fu_1576_p2;
    sc_signal< sc_lv<12> > sext_ln703_21_fu_1582_p1;
    sc_signal< sc_lv<12> > zext_ln708_15_fu_1453_p1;
    sc_signal< sc_lv<13> > sext_ln703_25_fu_1592_p1;
    sc_signal< sc_lv<13> > sext_ln203_fu_1159_p1;
    sc_signal< sc_lv<13> > add_ln703_31_fu_1595_p2;
    sc_signal< sc_lv<13> > sext_ln703_28_fu_1608_p1;
    sc_signal< sc_lv<13> > sext_ln703_27_fu_1605_p1;
    sc_signal< sc_lv<13> > add_ln703_34_fu_1611_p2;
    sc_signal< sc_lv<14> > sext_ln703_29_fu_1617_p1;
    sc_signal< sc_lv<14> > sext_ln703_26_fu_1601_p1;
    sc_signal< sc_lv<11> > zext_ln708_16_fu_1456_p1;
    sc_signal< sc_lv<11> > add_ln703_36_fu_1627_p2;
    sc_signal< sc_lv<12> > zext_ln703_7_fu_1633_p1;
    sc_signal< sc_lv<12> > zext_ln203_2_fu_1198_p1;
    sc_signal< sc_lv<11> > zext_ln708_22_fu_1494_p1;
    sc_signal< sc_lv<11> > add_ln703_39_fu_1646_p2;
    sc_signal< sc_lv<13> > sext_ln703_31_fu_1652_p1;
    sc_signal< sc_lv<13> > zext_ln703_9_fu_1643_p1;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<12> > zext_ln703_1_fu_1671_p1;
    sc_signal< sc_lv<12> > zext_ln703_fu_1668_p1;
    sc_signal< sc_lv<12> > add_ln703_8_fu_1674_p2;
    sc_signal< sc_lv<14> > zext_ln703_2_fu_1680_p1;
    sc_signal< sc_lv<14> > sext_ln703_7_fu_1665_p1;
    sc_signal< sc_lv<14> > add_ln703_9_fu_1684_p2;
    sc_signal< sc_lv<13> > zext_ln703_3_fu_1697_p1;
    sc_signal< sc_lv<13> > sext_ln1118_8_fu_1662_p1;
    sc_signal< sc_lv<13> > add_ln703_12_fu_1700_p2;
    sc_signal< sc_lv<14> > sext_ln703_10_fu_1706_p1;
    sc_signal< sc_lv<14> > sext_ln703_9_fu_1694_p1;
    sc_signal< sc_lv<14> > acc_1_V_fu_1710_p2;
    sc_signal< sc_lv<12> > zext_ln703_4_fu_1723_p1;
    sc_signal< sc_lv<12> > add_ln703_17_fu_1726_p2;
    sc_signal< sc_lv<14> > sext_ln703_14_fu_1732_p1;
    sc_signal< sc_lv<14> > sext_ln703_13_fu_1720_p1;
    sc_signal< sc_lv<14> > acc_2_V_fu_1736_p2;
    sc_signal< sc_lv<14> > sext_ln703_19_fu_1749_p1;
    sc_signal< sc_lv<14> > sext_ln703_17_fu_1746_p1;
    sc_signal< sc_lv<14> > add_ln703_23_fu_1752_p2;
    sc_signal< sc_lv<14> > sext_ln703_22_fu_1765_p1;
    sc_signal< sc_lv<14> > zext_ln703_6_fu_1762_p1;
    sc_signal< sc_lv<14> > add_ln703_28_fu_1768_p2;
    sc_signal< sc_lv<15> > sext_ln703_23_fu_1774_p1;
    sc_signal< sc_lv<15> > sext_ln703_20_fu_1758_p1;
    sc_signal< sc_lv<15> > acc_3_V_fu_1778_p2;
    sc_signal< sc_lv<14> > sext_ln703_32_fu_1794_p1;
    sc_signal< sc_lv<14> > zext_ln703_8_fu_1791_p1;
    sc_signal< sc_lv<14> > add_ln703_41_fu_1797_p2;
    sc_signal< sc_lv<15> > sext_ln703_33_fu_1803_p1;
    sc_signal< sc_lv<15> > sext_ln703_30_fu_1788_p1;
    sc_signal< sc_lv<15> > acc_4_V_fu_1807_p2;
    sc_signal< sc_lv<16> > sext_ln703_8_fu_1690_p1;
    sc_signal< sc_lv<16> > sext_ln703_11_fu_1716_p1;
    sc_signal< sc_lv<16> > sext_ln703_15_fu_1742_p1;
    sc_signal< sc_lv<16> > sext_ln703_24_fu_1784_p1;
    sc_signal< sc_lv<16> > sext_ln703_34_fu_1813_p1;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_lv<11> > mul_ln708_fu_264_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<11> ap_const_lv11_1B;
    static const sc_lv<11> ap_const_lv11_17;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<11> ap_const_lv11_20;
    static const sc_lv<11> ap_const_lv11_3E0;
    static const sc_lv<11> ap_const_lv11_700;
    static const sc_lv<11> ap_const_lv11_660;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<12> ap_const_lv12_D20;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_1_V_fu_1710_p2();
    void thread_acc_2_V_fu_1736_p2();
    void thread_acc_3_V_fu_1778_p2();
    void thread_acc_4_V_fu_1807_p2();
    void thread_add_ln703_10_fu_1521_p2();
    void thread_add_ln703_11_fu_1527_p2();
    void thread_add_ln703_12_fu_1700_p2();
    void thread_add_ln703_14_fu_1111_p2();
    void thread_add_ln703_15_fu_1536_p2();
    void thread_add_ln703_16_fu_1117_p2();
    void thread_add_ln703_17_fu_1726_p2();
    void thread_add_ln703_19_fu_1123_p2();
    void thread_add_ln703_20_fu_1545_p2();
    void thread_add_ln703_21_fu_1129_p2();
    void thread_add_ln703_22_fu_1554_p2();
    void thread_add_ln703_23_fu_1752_p2();
    void thread_add_ln703_24_fu_1560_p2();
    void thread_add_ln703_25_fu_1570_p2();
    void thread_add_ln703_26_fu_1576_p2();
    void thread_add_ln703_27_fu_1586_p2();
    void thread_add_ln703_28_fu_1768_p2();
    void thread_add_ln703_30_fu_1135_p2();
    void thread_add_ln703_31_fu_1595_p2();
    void thread_add_ln703_32_fu_1141_p2();
    void thread_add_ln703_33_fu_1147_p2();
    void thread_add_ln703_34_fu_1611_p2();
    void thread_add_ln703_35_fu_1621_p2();
    void thread_add_ln703_36_fu_1627_p2();
    void thread_add_ln703_37_fu_1637_p2();
    void thread_add_ln703_38_fu_1153_p2();
    void thread_add_ln703_39_fu_1646_p2();
    void thread_add_ln703_40_fu_1656_p2();
    void thread_add_ln703_41_fu_1797_p2();
    void thread_add_ln703_4_fu_1105_p2();
    void thread_add_ln703_5_fu_1503_p2();
    void thread_add_ln703_6_fu_1509_p2();
    void thread_add_ln703_7_fu_1515_p2();
    void thread_add_ln703_8_fu_1674_p2();
    void thread_add_ln703_9_fu_1684_p2();
    void thread_add_ln703_fu_1099_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_lshr_ln708_11_fu_861_p4();
    void thread_lshr_ln708_13_fu_977_p4();
    void thread_lshr_ln708_14_fu_1009_p4();
    void thread_lshr_ln708_1_fu_1188_p4();
    void thread_lshr_ln708_4_fu_554_p4();
    void thread_lshr_ln708_5_fu_1289_p4();
    void thread_lshr_ln708_6_fu_1365_p4();
    void thread_lshr_ln708_8_fu_1439_p4();
    void thread_lshr_ln708_s_fu_347_p4();
    void thread_lshr_ln_fu_315_p4();
    void thread_mul_ln708_1_fu_265_p0();
    void thread_mul_ln708_1_fu_265_p2();
    void thread_mul_ln708_fu_264_p0();
    void thread_mul_ln708_fu_264_p00();
    void thread_mul_ln708_fu_264_p2();
    void thread_sext_ln1116_1_fu_680_p1();
    void thread_sext_ln1116_2_fu_1043_p1();
    void thread_sext_ln1116_3_fu_1490_p1();
    void thread_sext_ln1116_fu_1410_p1();
    void thread_sext_ln1118_5_fu_789_p1();
    void thread_sext_ln1118_6_fu_851_p1();
    void thread_sext_ln1118_7_fu_907_p1();
    void thread_sext_ln1118_8_fu_1662_p1();
    void thread_sext_ln1118_9_fu_1079_p1();
    void thread_sext_ln1118_fu_712_p1();
    void thread_sext_ln203_1_fu_409_p1();
    void thread_sext_ln203_2_fu_441_p1();
    void thread_sext_ln203_3_fu_1232_p1();
    void thread_sext_ln203_4_fu_508_p1();
    void thread_sext_ln203_5_fu_544_p1();
    void thread_sext_ln203_6_fu_1267_p1();
    void thread_sext_ln203_7_fu_1331_p1();
    void thread_sext_ln203_8_fu_596_p1();
    void thread_sext_ln203_9_fu_632_p1();
    void thread_sext_ln203_fu_1159_p1();
    void thread_sext_ln703_10_fu_1706_p1();
    void thread_sext_ln703_11_fu_1716_p1();
    void thread_sext_ln703_12_fu_1533_p1();
    void thread_sext_ln703_13_fu_1720_p1();
    void thread_sext_ln703_14_fu_1732_p1();
    void thread_sext_ln703_15_fu_1742_p1();
    void thread_sext_ln703_16_fu_1542_p1();
    void thread_sext_ln703_17_fu_1746_p1();
    void thread_sext_ln703_18_fu_1551_p1();
    void thread_sext_ln703_19_fu_1749_p1();
    void thread_sext_ln703_20_fu_1758_p1();
    void thread_sext_ln703_21_fu_1582_p1();
    void thread_sext_ln703_22_fu_1765_p1();
    void thread_sext_ln703_23_fu_1774_p1();
    void thread_sext_ln703_24_fu_1784_p1();
    void thread_sext_ln703_25_fu_1592_p1();
    void thread_sext_ln703_26_fu_1601_p1();
    void thread_sext_ln703_27_fu_1605_p1();
    void thread_sext_ln703_28_fu_1608_p1();
    void thread_sext_ln703_29_fu_1617_p1();
    void thread_sext_ln703_30_fu_1788_p1();
    void thread_sext_ln703_31_fu_1652_p1();
    void thread_sext_ln703_32_fu_1794_p1();
    void thread_sext_ln703_33_fu_1803_p1();
    void thread_sext_ln703_34_fu_1813_p1();
    void thread_sext_ln703_6_fu_1500_p1();
    void thread_sext_ln703_7_fu_1665_p1();
    void thread_sext_ln703_8_fu_1690_p1();
    void thread_sext_ln703_9_fu_1694_p1();
    void thread_sext_ln703_fu_1497_p1();
    void thread_sext_ln708_1_fu_955_p1();
    void thread_sext_ln708_fu_1414_p1();
    void thread_shl_ln1118_10_fu_684_p3();
    void thread_shl_ln1118_11_fu_761_p3();
    void thread_shl_ln1118_12_fu_823_p3();
    void thread_shl_ln1118_13_fu_879_p3();
    void thread_shl_ln1118_14_fu_927_p3();
    void thread_shl_ln1118_15_fu_1462_p3();
    void thread_shl_ln1118_16_fu_1051_p3();
    void thread_shl_ln1118_1_fu_413_p3();
    void thread_shl_ln1118_2_fu_1205_p3();
    void thread_shl_ln1118_3_fu_516_p3();
    void thread_shl_ln1118_4_fu_1239_p3();
    void thread_shl_ln1118_5_fu_1303_p3();
    void thread_shl_ln1118_6_fu_568_p3();
    void thread_shl_ln1118_7_fu_604_p3();
    void thread_shl_ln1118_8_fu_1382_p3();
    void thread_shl_ln1118_9_fu_652_p3();
    void thread_shl_ln1118_s_fu_381_p3();
    void thread_shl_ln708_10_fu_963_p3();
    void thread_shl_ln708_11_fu_995_p3();
    void thread_shl_ln708_1_fu_1162_p3();
    void thread_shl_ln708_2_fu_1170_p3();
    void thread_shl_ln708_3_fu_464_p3();
    void thread_shl_ln708_4_fu_1275_p3();
    void thread_shl_ln708_5_fu_1335_p3();
    void thread_shl_ln708_6_fu_1347_p3();
    void thread_shl_ln708_7_fu_716_p3();
    void thread_shl_ln708_8_fu_728_p3();
    void thread_shl_ln708_9_fu_1425_p3();
    void thread_shl_ln708_s_fu_333_p3();
    void thread_shl_ln_fu_301_p3();
    void thread_sub_ln1118_10_fu_1394_p2();
    void thread_sub_ln1118_11_fu_664_p2();
    void thread_sub_ln1118_12_fu_696_p2();
    void thread_sub_ln1118_13_fu_773_p2();
    void thread_sub_ln1118_14_fu_835_p2();
    void thread_sub_ln1118_15_fu_891_p2();
    void thread_sub_ln1118_16_fu_939_p2();
    void thread_sub_ln1118_17_fu_1027_p2();
    void thread_sub_ln1118_18_fu_1474_p2();
    void thread_sub_ln1118_19_fu_1063_p2();
    void thread_sub_ln1118_1_fu_393_p2();
    void thread_sub_ln1118_2_fu_425_p2();
    void thread_sub_ln1118_3_fu_1216_p2();
    void thread_sub_ln1118_4_fu_492_p2();
    void thread_sub_ln1118_5_fu_528_p2();
    void thread_sub_ln1118_6_fu_1251_p2();
    void thread_sub_ln1118_7_fu_1315_p2();
    void thread_sub_ln1118_8_fu_580_p2();
    void thread_sub_ln1118_9_fu_616_p2();
    void thread_sub_ln1118_fu_365_p2();
    void thread_sub_ln708_10_fu_793_p2();
    void thread_sub_ln708_11_fu_855_p2();
    void thread_sub_ln708_12_fu_911_p2();
    void thread_sub_ln708_13_fu_971_p2();
    void thread_sub_ln708_14_fu_1003_p2();
    void thread_sub_ln708_15_fu_1083_p2();
    void thread_sub_ln708_1_fu_341_p2();
    void thread_sub_ln708_2_fu_1182_p2();
    void thread_sub_ln708_3_fu_472_p2();
    void thread_sub_ln708_4_fu_548_p2();
    void thread_sub_ln708_5_fu_1283_p2();
    void thread_sub_ln708_6_fu_1359_p2();
    void thread_sub_ln708_7_fu_636_p2();
    void thread_sub_ln708_8_fu_740_p2();
    void thread_sub_ln708_9_fu_1433_p2();
    void thread_sub_ln708_fu_309_p2();
    void thread_trunc_ln708_111_fu_431_p4();
    void thread_trunc_ln708_112_fu_1222_p4();
    void thread_trunc_ln708_113_fu_498_p4();
    void thread_trunc_ln708_114_fu_534_p4();
    void thread_trunc_ln708_115_fu_1257_p4();
    void thread_trunc_ln708_116_fu_1321_p4();
    void thread_trunc_ln708_117_fu_586_p4();
    void thread_trunc_ln708_118_fu_622_p4();
    void thread_trunc_ln708_119_fu_1400_p4();
    void thread_trunc_ln708_120_fu_670_p4();
    void thread_trunc_ln708_121_fu_702_p4();
    void thread_trunc_ln708_123_fu_779_p4();
    void thread_trunc_ln708_124_fu_841_p4();
    void thread_trunc_ln708_125_fu_897_p4();
    void thread_trunc_ln708_126_fu_945_p4();
    void thread_trunc_ln708_127_fu_1033_p4();
    void thread_trunc_ln708_128_fu_1480_p4();
    void thread_trunc_ln708_129_fu_1069_p4();
    void thread_trunc_ln708_s_fu_399_p4();
    void thread_zext_ln1118_10_fu_1247_p1();
    void thread_zext_ln1118_11_fu_1311_p1();
    void thread_zext_ln1118_12_fu_576_p1();
    void thread_zext_ln1118_13_fu_600_p1();
    void thread_zext_ln1118_14_fu_612_p1();
    void thread_zext_ln1118_15_fu_1390_p1();
    void thread_zext_ln1118_16_fu_660_p1();
    void thread_zext_ln1118_17_fu_692_p1();
    void thread_zext_ln1118_18_fu_756_p1();
    void thread_zext_ln1118_19_fu_769_p1();
    void thread_zext_ln1118_1_fu_361_p1();
    void thread_zext_ln1118_20_fu_819_p1();
    void thread_zext_ln1118_21_fu_831_p1();
    void thread_zext_ln1118_22_fu_875_p1();
    void thread_zext_ln1118_23_fu_887_p1();
    void thread_zext_ln1118_24_fu_935_p1();
    void thread_zext_ln1118_25_fu_991_p1();
    void thread_zext_ln1118_26_fu_1023_p1();
    void thread_zext_ln1118_27_fu_1470_p1();
    void thread_zext_ln1118_28_fu_1047_p1();
    void thread_zext_ln1118_29_fu_1059_p1();
    void thread_zext_ln1118_2_fu_389_p1();
    void thread_zext_ln1118_3_fu_421_p1();
    void thread_zext_ln1118_5_fu_1212_p1();
    void thread_zext_ln1118_6_fu_460_p1();
    void thread_zext_ln1118_7_fu_488_p1();
    void thread_zext_ln1118_8_fu_512_p1();
    void thread_zext_ln1118_9_fu_524_p1();
    void thread_zext_ln1118_fu_329_p1();
    void thread_zext_ln203_1_fu_357_p1();
    void thread_zext_ln203_2_fu_1198_p1();
    void thread_zext_ln203_3_fu_1375_p1();
    void thread_zext_ln203_fu_325_p1();
    void thread_zext_ln703_1_fu_1671_p1();
    void thread_zext_ln703_2_fu_1680_p1();
    void thread_zext_ln703_3_fu_1697_p1();
    void thread_zext_ln703_4_fu_1723_p1();
    void thread_zext_ln703_5_fu_1566_p1();
    void thread_zext_ln703_6_fu_1762_p1();
    void thread_zext_ln703_7_fu_1633_p1();
    void thread_zext_ln703_8_fu_1791_p1();
    void thread_zext_ln703_9_fu_1643_p1();
    void thread_zext_ln703_fu_1668_p1();
    void thread_zext_ln708_10_fu_724_p1();
    void thread_zext_ln708_11_fu_736_p1();
    void thread_zext_ln708_12_fu_1417_p1();
    void thread_zext_ln708_13_fu_1421_p1();
    void thread_zext_ln708_14_fu_1449_p1();
    void thread_zext_ln708_15_fu_1453_p1();
    void thread_zext_ln708_16_fu_1456_p1();
    void thread_zext_ln708_17_fu_871_p1();
    void thread_zext_ln708_18_fu_1459_p1();
    void thread_zext_ln708_19_fu_959_p1();
    void thread_zext_ln708_1_fu_1178_p1();
    void thread_zext_ln708_20_fu_987_p1();
    void thread_zext_ln708_21_fu_1019_p1();
    void thread_zext_ln708_22_fu_1494_p1();
    void thread_zext_ln708_2_fu_1202_p1();
    void thread_zext_ln708_3_fu_1236_p1();
    void thread_zext_ln708_4_fu_564_p1();
    void thread_zext_ln708_5_fu_1271_p1();
    void thread_zext_ln708_6_fu_1299_p1();
    void thread_zext_ln708_7_fu_1343_p1();
    void thread_zext_ln708_8_fu_1355_p1();
    void thread_zext_ln708_9_fu_1379_p1();
    void thread_zext_ln708_fu_297_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif