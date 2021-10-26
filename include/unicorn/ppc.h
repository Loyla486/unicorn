/* Unicorn Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2015-2017 */
/* This file is released under LGPL2.
   See COPYING.LGPL2 in root directory for more details
*/

#ifndef UNICORN_PPC_H
#define UNICORN_PPC_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _MSC_VER
#pragma warning(disable : 4201)
#endif

typedef enum uc_cpu_ppc {
    UC_CPU_PPC_401A1,
    UC_CPU_PPC_401B2,
    UC_CPU_PPC_401C2,
    UC_CPU_PPC_401D2,
    UC_CPU_PPC_401E2,
    UC_CPU_PPC_401F2,
    UC_CPU_PPC_401G2,
    UC_CPU_PPC_COBRA,
    UC_CPU_PPC_403GA,
    UC_CPU_PPC_403GB,
    UC_CPU_PPC_403GC,
    UC_CPU_PPC_403GCX,
    UC_CPU_PPC_405D2,
    UC_CPU_PPC_405D4,
    UC_CPU_PPC_405CRA,
    UC_CPU_PPC_405CRB,
    UC_CPU_PPC_405CRC,
    UC_CPU_PPC_405EP,
    UC_CPU_PPC_405EZ,
    UC_CPU_PPC_405GPA,
    UC_CPU_PPC_405GPB,
    UC_CPU_PPC_405GPC,
    UC_CPU_PPC_405GPD,
    UC_CPU_PPC_405GPR,
    UC_CPU_PPC_405LP,
    UC_CPU_PPC_NPE405H,
    UC_CPU_PPC_NPE405H2,
    UC_CPU_PPC_NPE405L,
    UC_CPU_PPC_NPE4GS3,
    UC_CPU_PPC_STB03,
    UC_CPU_PPC_STB04,
    UC_CPU_PPC_STB25,
    UC_CPU_PPC_X2VP4,
    UC_CPU_PPC_X2VP20,
    UC_CPU_PPC_440_XILINX,
    UC_CPU_PPC_440EPA,
    UC_CPU_PPC_440EPB,
    UC_CPU_PPC_440GPB,
    UC_CPU_PPC_440GPC,
    UC_CPU_PPC_440GRX,
    UC_CPU_PPC_440GXA,
    UC_CPU_PPC_440GXB,
    UC_CPU_PPC_440GXC,
    UC_CPU_PPC_440GXF,
    UC_CPU_PPC_440SP,
    UC_CPU_PPC_440SP2,
    UC_CPU_PPC_440SPE,
    UC_CPU_PPC_460EXB,
    UC_CPU_PPC_MPC5XX,
    UC_CPU_PPC_MPC8XX,
    UC_CPU_PPC_G2,
    UC_CPU_PPC_G2H4,
    UC_CPU_PPC_G2GP,
    UC_CPU_PPC_G2LS,
    UC_CPU_PPC_MPC603,
    UC_CPU_PPC_G2_HIP3,
    UC_CPU_PPC_G2_HIP4,
    UC_CPU_PPC_G2LE,
    UC_CPU_PPC_G2LEGP,
    UC_CPU_PPC_G2LELS,
    UC_CPU_PPC_G2LEGP1,
    UC_CPU_PPC_G2LEGP3,
    UC_CPU_PPC_E200Z5,
    UC_CPU_PPC_E200Z6,
    UC_CPU_PPC_E300C1,
    UC_CPU_PPC_E300C2,
    UC_CPU_PPC_E300C3,
    UC_CPU_PPC_E300C4,
    UC_CPU_PPC_E500V1_V10,
    UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_E500V2_V30,
    UC_CPU_PPC_E500MC,
    UC_CPU_PPC_E5500,
    UC_CPU_PPC_E6500,
    UC_CPU_PPC_E600,
    UC_CPU_PPC_601_V0,
    UC_CPU_PPC_601_V1,
    UC_CPU_PPC_601_V2,
    UC_CPU_PPC_602,
    UC_CPU_PPC_603,
    UC_CPU_PPC_603E_V11,
    UC_CPU_PPC_603E_V12,
    UC_CPU_PPC_603E_V13,
    UC_CPU_PPC_603E_V14,
    UC_CPU_PPC_603E_V22,
    UC_CPU_PPC_603E_V3,
    UC_CPU_PPC_603E_V4,
    UC_CPU_PPC_603E_V41,
    UC_CPU_PPC_603E7T,
    UC_CPU_PPC_603E7V,
    UC_CPU_PPC_603E7V1,
    UC_CPU_PPC_603E7V2,
    UC_CPU_PPC_603E7,
    UC_CPU_PPC_603P,
    UC_CPU_PPC_604,
    UC_CPU_PPC_604E_V10,
    UC_CPU_PPC_604E_V22,
    UC_CPU_PPC_604E_V24,
    UC_CPU_PPC_604R,
    UC_CPU_PPC_7X0_V10,
    UC_CPU_PPC_7X0_V20,
    UC_CPU_PPC_7X0_V21,
    UC_CPU_PPC_7X0_V22,
    UC_CPU_PPC_7X0_V30,
    UC_CPU_PPC_7X0_V31,
    UC_CPU_PPC_740E,
    UC_CPU_PPC_750E,
    UC_CPU_PPC_7X0P,
    UC_CPU_PPC_750CL_V10,
    UC_CPU_PPC_750CL_V20,
    UC_CPU_PPC_750CX_V10,
    UC_CPU_PPC_750CX_V20,
    UC_CPU_PPC_750CX_V21,
    UC_CPU_PPC_750CX_V22,
    UC_CPU_PPC_750CXE_V21,
    UC_CPU_PPC_750CXE_V22,
    UC_CPU_PPC_750CXE_V23,
    UC_CPU_PPC_750CXE_V24,
    UC_CPU_PPC_750CXE_V24B,
    UC_CPU_PPC_750CXE_V30,
    UC_CPU_PPC_750CXE_V31,
    UC_CPU_PPC_750CXE_V31B,
    UC_CPU_PPC_750CXR,
    UC_CPU_PPC_750FL,
    UC_CPU_PPC_750FX_V10,
    UC_CPU_PPC_750FX_V20,
    UC_CPU_PPC_750FX_V21,
    UC_CPU_PPC_750FX_V22,
    UC_CPU_PPC_750FX_V23,
    UC_CPU_PPC_750GL,
    UC_CPU_PPC_750GX_V10,
    UC_CPU_PPC_750GX_V11,
    UC_CPU_PPC_750GX_V12,
    UC_CPU_PPC_750L_V20,
    UC_CPU_PPC_750L_V21,
    UC_CPU_PPC_750L_V22,
    UC_CPU_PPC_750L_V30,
    UC_CPU_PPC_750L_V32,
    UC_CPU_PPC_7X5_V10,
    UC_CPU_PPC_7X5_V11,
    UC_CPU_PPC_7X5_V20,
    UC_CPU_PPC_7X5_V21,
    UC_CPU_PPC_7X5_V22,
    UC_CPU_PPC_7X5_V23,
    UC_CPU_PPC_7X5_V24,
    UC_CPU_PPC_7X5_V25,
    UC_CPU_PPC_7X5_V26,
    UC_CPU_PPC_7X5_V27,
    UC_CPU_PPC_7X5_V28,
    UC_CPU_PPC_7400_V10,
    UC_CPU_PPC_7400_V11,
    UC_CPU_PPC_7400_V20,
    UC_CPU_PPC_7400_V21,
    UC_CPU_PPC_7400_V22,
    UC_CPU_PPC_7400_V26,
    UC_CPU_PPC_7400_V27,
    UC_CPU_PPC_7400_V28,
    UC_CPU_PPC_7400_V29,
    UC_CPU_PPC_7410_V10,
    UC_CPU_PPC_7410_V11,
    UC_CPU_PPC_7410_V12,
    UC_CPU_PPC_7410_V13,
    UC_CPU_PPC_7410_V14,
    UC_CPU_PPC_7448_V10,
    UC_CPU_PPC_7448_V11,
    UC_CPU_PPC_7448_V20,
    UC_CPU_PPC_7448_V21,
    UC_CPU_PPC_7450_V10,
    UC_CPU_PPC_7450_V11,
    UC_CPU_PPC_7450_V12,
    UC_CPU_PPC_7450_V20,
    UC_CPU_PPC_7450_V21,
    UC_CPU_PPC_74X1_V23,
    UC_CPU_PPC_74X1_V210,
    UC_CPU_PPC_74X5_V10,
    UC_CPU_PPC_74X5_V21,
    UC_CPU_PPC_74X5_V32,
    UC_CPU_PPC_74X5_V33,
    UC_CPU_PPC_74X5_V34,
    UC_CPU_PPC_74X7_V10,
    UC_CPU_PPC_74X7_V11,
    UC_CPU_PPC_74X7_V12,
    UC_CPU_PPC_74X7A_V10,
    UC_CPU_PPC_74X7A_V11,
    UC_CPU_PPC_74X7A_V12,
    UC_CPU_PPC_IOP480 = UC_CPU_PPC_401B2,
    UC_CPU_PPC_X2VP20 = UC_CPU_PPC_440GXF,
    UC_CPU_PPC_440GRA = UC_CPU_PPC_440EPB,
    UC_CPU_PPC_440EPX = UC_CPU_PPC_440GRX,
    UC_CPU_PPC_MPC5200_V10 = UC_CPU_PPC_G2LEGP1,
    UC_CPU_PPC_MPC5200_V11 = UC_CPU_PPC_G2LEGP1,
    UC_CPU_PPC_MPC5200_V12 = UC_CPU_PPC_G2LEGP1,
    UC_CPU_PPC_MPC5200B_V20 = UC_CPU_PPC_G2LEGP1,
    UC_CPU_PPC_MPC5200B_V21 = UC_CPU_PPC_G2LEGP1,
    UC_CPU_PPC_MPC834X = UC_CPU_PPC_E300C1,
    UC_CPU_PPC_MPC837X = UC_CPU_PPC_E300C4,
    UC_CPU_PPC_E500 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8533_V10 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8533_V11 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8533E_V10 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8533E_V11 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8540_V10 = UC_CPU_PPC_E500V1_V10,
    UC_CPU_PPC_MPC8540_V20 = UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_MPC8540_V21 = UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_MPC8541_V10 = UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_MPC8541_V11 = UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_MPC8541E_V10 = UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_MPC8541E_V11 = UC_CPU_PPC_E500V1_V20,
    UC_CPU_PPC_MPC8543_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8543_V11 = UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_MPC8543_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8543_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8543E_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8543E_V11 = UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_MPC8543E_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8543E_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8544_V10 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8544_V11 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8544E_V11 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8544E_V10 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8545_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8545_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8545_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8545E_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8545E_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8545E_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8547E_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8547E_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8547E_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8548_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8548_V11 = UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_MPC8548_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8548_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8548E_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8548E_V11 = UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_MPC8548E_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8548E_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8555_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8555_V11 = UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_MPC8555E_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8555E_V11 = UC_CPU_PPC_E500V2_V11,
    UC_CPU_PPC_MPC8560_V10 = UC_CPU_PPC_E500V2_V10,
    UC_CPU_PPC_MPC8560_V20 = UC_CPU_PPC_E500V2_V20,
    UC_CPU_PPC_MPC8560_V21 = UC_CPU_PPC_E500V2_V21,
    UC_CPU_PPC_MPC8567 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8567E = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8568 = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8568E = UC_CPU_PPC_E500V2_V22,
    UC_CPU_PPC_MPC8572 = UC_CPU_PPC_E500V2_V30,
    UC_CPU_PPC_MPC8572E = UC_CPU_PPC_E500V2_V30,
    UC_CPU_PPC_MPC8610 = UC_CPU_PPC_E600,
    UC_CPU_PPC_MPC8641 = UC_CPU_PPC_E600,
    UC_CPU_PPC_MPC8641D = UC_CPU_PPC_E600,
} uc_cpu_ppc;

typedef enum uc_cpu_ppc64 {
    UC_CPU_PPC64_620,
    UC_CPU_PPC64_630,
    UC_CPU_PPC64_631,
    UC_CPU_PPC64_POWER4,
    UC_CPU_PPC64_POWER4P,
    UC_CPU_PPC64_POWER5,
    UC_CPU_PPC64_POWER5P_V21,
    UC_CPU_PPC64_POWER6,
    UC_CPU_PPC64_POWER_SERVER_MASK,
    UC_CPU_PPC64_POWER7_BASE,
    UC_CPU_PPC64_POWER7_V23,
    UC_CPU_PPC64_POWER7P_BASE,
    UC_CPU_PPC64_POWER7P_V21,
    UC_CPU_PPC64_POWER8E_BASE,
    UC_CPU_PPC64_POWER8E_V21,
    UC_CPU_PPC64_POWER8_BASE,
    UC_CPU_PPC64_POWER8_V20,
    UC_CPU_PPC64_POWER8NVL_BASE,
    UC_CPU_PPC64_POWER8NVL_V10,
    UC_CPU_PPC64_POWER9_BASE,
    UC_CPU_PPC64_POWER9_DD1,
    UC_CPU_PPC64_POWER9_DD20,
    UC_CPU_PPC64_POWER10_BASE,
    UC_CPU_PPC64_POWER10_DD1,
    UC_CPU_PPC64_970_V22,
    UC_CPU_PPC64_970FX_V10,
    UC_CPU_PPC64_970FX_V20,
    UC_CPU_PPC64_970FX_V21,
    UC_CPU_PPC64_970FX_V30,
    UC_CPU_PPC64_970FX_V31,
    UC_CPU_PPC64_970MP_V10,
    UC_CPU_PPC64_970MP_V11,
    UC_CPU_PPC64_CELL_V10,
    UC_CPU_PPC64_CELL_V20,
    UC_CPU_PPC64_CELL_V30,
    UC_CPU_PPC64_CELL_V31,
    UC_CPU_PPC64_RS64,
    UC_CPU_PPC64_RS64II,
    UC_CPU_PPC64_RS64III,
    UC_CPU_PPC64_RS64IV,
    UC_CPU_PPC64_CELL = UC_CPU_PPC64_CELL_V32,
    UC_CPU_PPC64_CELL_V32 = UC_CPU_PPC64_CELL_V31,
} uc_cpu_ppc64;

//> PPC registers
typedef enum uc_ppc_reg {
    UC_PPC_REG_INVALID = 0,
    //> General purpose registers
    UC_PPC_REG_PC,

    UC_PPC_REG_0,
    UC_PPC_REG_1,
    UC_PPC_REG_2,
    UC_PPC_REG_3,
    UC_PPC_REG_4,
    UC_PPC_REG_5,
    UC_PPC_REG_6,
    UC_PPC_REG_7,
    UC_PPC_REG_8,
    UC_PPC_REG_9,
    UC_PPC_REG_10,
    UC_PPC_REG_11,
    UC_PPC_REG_12,
    UC_PPC_REG_13,
    UC_PPC_REG_14,
    UC_PPC_REG_15,
    UC_PPC_REG_16,
    UC_PPC_REG_17,
    UC_PPC_REG_18,
    UC_PPC_REG_19,
    UC_PPC_REG_20,
    UC_PPC_REG_21,
    UC_PPC_REG_22,
    UC_PPC_REG_23,
    UC_PPC_REG_24,
    UC_PPC_REG_25,
    UC_PPC_REG_26,
    UC_PPC_REG_27,
    UC_PPC_REG_28,
    UC_PPC_REG_29,
    UC_PPC_REG_30,
    UC_PPC_REG_31,
} uc_ppc_reg;

#ifdef __cplusplus
}
#endif

#endif
