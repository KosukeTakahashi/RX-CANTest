                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
/************************************************************************/
/*    File Version: V1.00                                               */
/*    History: 1.10a (2013-08-19) [Hardware Manual Revision : 1.00]     */
/*    Date Modified: 08/19/2013                                         */
/************************************************************************/

#ifndef INTERRUPT_HANDLERS_H
#define INTERRUPT_HANDLERS_H

// Exception(Supervisor Instruction)
void INT_Excep_SuperVisorInst(void) __attribute__ ((interrupt));

// Exception(Access Instruction)
void INT_Excep_AccessInst(void) __attribute__ ((interrupt));

// Exception(Undefined Instruction)
void INT_Excep_UndefinedInst(void) __attribute__ ((interrupt));

// Exception(Floating Point)
void INT_Excep_FloatingPoint(void) __attribute__ ((interrupt));

// NMI
void INT_NonMaskableInterrupt(void) __attribute__ ((interrupt));

// Dummy
void INT_Dummy(void) __attribute__ ((interrupt));

// BRK
void INT_Excep_BRK(void) __attribute__ ((interrupt));

// BSC BUSERR
void INT_Excep_BSC_BUSERR(void) __attribute__ ((interrupt));

// FCUIF FIFERR
void INT_Excep_FCUIF_FIFERR(void) __attribute__ ((interrupt));

// FCUIF FRDYI
void INT_Excep_FCUIF_FRDYI(void) __attribute__ ((interrupt));

// ICU SWINT
void INT_Excep_ICU_SWINT(void) __attribute__ ((interrupt));
// CMT0 CMI0
void INT_Excep_CMT0_CMI0(void) __attribute__ ((interrupt));

// CMT1 CMI1
void INT_Excep_CMT1_CMI1(void) __attribute__ ((interrupt));

// CMT2 CMI2
void INT_Excep_CMT2_CMI2(void) __attribute__ ((interrupt));

// CMT3 CMI3
void INT_Excep_CMT3_CMI3(void) __attribute__ ((interrupt));
// RSPI0 SPEI0
void INT_Excep_RSPI0_SPEI0(void) __attribute__ ((interrupt));

// RSPI0 SPRI0
void INT_Excep_RSPI0_SPRI0(void) __attribute__ ((interrupt));

// RSPI0 SPTI0
void INT_Excep_RSPI0_SPTI0(void) __attribute__ ((interrupt));

// RSPI0 SPII0
void INT_Excep_RSPI0_SPII0(void) __attribute__ ((interrupt));

// CAN0 ERS0
void INT_Excep_CAN0_ERS0(void) __attribute__ ((interrupt));

// CAN0 RXF0
void INT_Excep_CAN0_RXF0(void) __attribute__ ((interrupt));

// CAN0 TXF0
void INT_Excep_CAN0_TXF0(void) __attribute__ ((interrupt));

// CAN0 RXM0
void INT_Excep_CAN0_RXM0(void) __attribute__ ((interrupt));

// CAN0 TXM0
void INT_Excep_CAN0_TXM0(void) __attribute__ ((interrupt));
// ICU IRQ0
void INT_Excep_ICU_IRQ0(void) __attribute__ ((interrupt));

// ICU IRQ1
void INT_Excep_ICU_IRQ1(void) __attribute__ ((interrupt));

// ICU IRQ2
void INT_Excep_ICU_IRQ2(void) __attribute__ ((interrupt));

// ICU IRQ3
void INT_Excep_ICU_IRQ3(void) __attribute__ ((interrupt));

// ICU IRQ4
void INT_Excep_ICU_IRQ4(void) __attribute__ ((interrupt));

// ICU IRQ5
void INT_Excep_ICU_IRQ5(void) __attribute__ ((interrupt));

// ICU IRQ6
void INT_Excep_ICU_IRQ6(void) __attribute__ ((interrupt));

// ICU IRQ7
void INT_Excep_ICU_IRQ7(void) __attribute__ ((interrupt));

// WDT WOVI
void INT_Excep_WDT_WOVI(void) __attribute__ ((interrupt));

// AD0 ADI0
void INT_Excep_AD0_ADI0(void) __attribute__ ((interrupt));

// S12AD0 S12ADI0
void INT_Excep_S12AD0_S12ADI0(void) __attribute__ ((interrupt));

// S12AD1 S12ADI1
void INT_Excep_S12AD1_S12ADI1(void) __attribute__ ((interrupt));

// CMPB CMPI
void INT_Excep_CMPB_CMPI(void) __attribute__ ((interrupt));

// MTU0 TGIA0
void INT_Excep_MTU0_TGIA0(void) __attribute__ ((interrupt));

// MTU0 TGIB0
void INT_Excep_MTU0_TGIB0(void) __attribute__ ((interrupt));

// MTU0 TGIC0
void INT_Excep_MTU0_TGIC0(void) __attribute__ ((interrupt));

// MTU0 TGID0
void INT_Excep_MTU0_TGID0(void) __attribute__ ((interrupt));

// MTU0 TCIV0
void INT_Excep_MTU0_TCIV0(void) __attribute__ ((interrupt));

// MTU0 TGIE0
void INT_Excep_MTU0_TGIE0(void) __attribute__ ((interrupt));

// MTU0 TGIF0
void INT_Excep_MTU0_TGIF0(void) __attribute__ ((interrupt));
// MTU1 TGIA1
void INT_Excep_MTU1_TGIA1(void) __attribute__ ((interrupt));

// MTU1 TGIB1
void INT_Excep_MTU1_TGIB1(void) __attribute__ ((interrupt));

// MTU1 TCIV1
void INT_Excep_MTU1_TCIV1(void) __attribute__ ((interrupt));

// MTU1 TCIU1
void INT_Excep_MTU1_TCIU1(void) __attribute__ ((interrupt));

// MTU2 TGIA2
void INT_Excep_MTU2_TGIA2(void) __attribute__ ((interrupt));

// MTU2 TGIB2
void INT_Excep_MTU2_TGIB2(void) __attribute__ ((interrupt));

// MTU2 TCIV2
void INT_Excep_MTU2_TCIV2(void) __attribute__ ((interrupt));

// MTU2 TCIU2
void INT_Excep_MTU2_TCIU2(void) __attribute__ ((interrupt));

// MTU3 TGIA3
void INT_Excep_MTU3_TGIA3(void) __attribute__ ((interrupt));

// MTU3 TGIB3
void INT_Excep_MTU3_TGIB3(void) __attribute__ ((interrupt));

// MTU3 TGIC3
void INT_Excep_MTU3_TGIC3(void) __attribute__ ((interrupt));

// MTU3 TGID3
void INT_Excep_MTU3_TGID3(void) __attribute__ ((interrupt));

// MTU3 TCIV3
void INT_Excep_MTU3_TCIV3(void) __attribute__ ((interrupt));

// MTU4 TGIA4
void INT_Excep_MTU4_TGIA4(void) __attribute__ ((interrupt));

// MTU4 TGIB4
void INT_Excep_MTU4_TGIB4(void) __attribute__ ((interrupt));

// MTU4 TGIC4
void INT_Excep_MTU4_TGIC4(void) __attribute__ ((interrupt));

// MTU4 TGID4
void INT_Excep_MTU4_TGID4(void) __attribute__ ((interrupt));

// MTU4 TCIV4
void INT_Excep_MTU4_TCIV4(void) __attribute__ ((interrupt));

// MTU5 TGIU5
void INT_Excep_MTU5_TGIU5(void) __attribute__ ((interrupt));

// MTU5 TGIV5
void INT_Excep_MTU5_TGIV5(void) __attribute__ ((interrupt));

// MTU5 TGIW5
void INT_Excep_MTU5_TGIW5(void) __attribute__ ((interrupt));

// MTU6 TGIA6
void INT_Excep_MTU6_TGIA6(void) __attribute__ ((interrupt));

// MTU6 TGIB6
void INT_Excep_MTU6_TGIB6(void) __attribute__ ((interrupt));

// MTU6 TGIC6
void INT_Excep_MTU6_TGIC6(void) __attribute__ ((interrupt));

// MTU6 TGID6
void INT_Excep_MTU6_TGID6(void) __attribute__ ((interrupt));

// MTU6 TCIV6
void INT_Excep_MTU6_TCIV6(void) __attribute__ ((interrupt));

// MTU7 TGIA7
void INT_Excep_MTU7_TGIA7(void) __attribute__ ((interrupt));

// MTU7 TGIB7
void INT_Excep_MTU7_TGIB7(void) __attribute__ ((interrupt));

// MTU7 TGIC7
void INT_Excep_MTU7_TGIC7(void) __attribute__ ((interrupt));

// MTU7 TGID7
void INT_Excep_MTU7_TGID7(void) __attribute__ ((interrupt));

// MTU7 TCIV7
void INT_Excep_MTU7_TCIV7(void) __attribute__ ((interrupt));

// POE OEI1
void INT_Excep_POE_OEI1(void) __attribute__ ((interrupt));

// POE OEI2
void INT_Excep_POE_OEI2(void) __attribute__ ((interrupt));

// POE OEI3
void INT_Excep_POE_OEI3(void) __attribute__ ((interrupt));

// POE OEI4
void INT_Excep_POE_OEI4(void) __attribute__ ((interrupt));

// GPT0 GTCIA0
void INT_Excep_GPT0_GTCIA0(void) __attribute__ ((interrupt));

// GPT0 GTCIB0
void INT_Excep_GPT0_GTCIB0(void) __attribute__ ((interrupt));

// GPT0 GTCIC0
void INT_Excep_GPT0_GTCIC0(void) __attribute__ ((interrupt));

// GPT0 GTCIE0
void INT_Excep_GPT0_GTCIE0(void) __attribute__ ((interrupt));

// GPT0 GTCIV0
void INT_Excep_GPT0_GTCIV0(void) __attribute__ ((interrupt));

// GPT0 LOCO1
void INT_Excep_GPT0_LOCO1(void) __attribute__ ((interrupt));

// GPT1 GTCIA1
void INT_Excep_GPT1_GTCIA1(void) __attribute__ ((interrupt));

// GPT1 GTCIB1
void INT_Excep_GPT1_GTCIB1(void) __attribute__ ((interrupt));

// GPT1 GTCIC1
void INT_Excep_GPT1_GTCIC1(void) __attribute__ ((interrupt));

// GPT1 GTCIE1
void INT_Excep_GPT1_GTCIE1(void) __attribute__ ((interrupt));

// GPT1 GTCIV1
void INT_Excep_GPT1_GTCIV1(void) __attribute__ ((interrupt));
// GPT2 GTCIA2
void INT_Excep_GPT2_GTCIA2(void) __attribute__ ((interrupt));

// GPT2 GTCIB2
void INT_Excep_GPT2_GTCIB2(void) __attribute__ ((interrupt));

// GPT2 GTCIC2
void INT_Excep_GPT2_GTCIC2(void) __attribute__ ((interrupt));

// GPT2 GTCIE2
void INT_Excep_GPT2_GTCIE2(void) __attribute__ ((interrupt));

// GPT2 GTCIV2
void INT_Excep_GPT2_GTCIV2(void) __attribute__ ((interrupt));

// GPT3 GTCIA3
void INT_Excep_GPT3_GTCIA3(void) __attribute__ ((interrupt));

// GPT3 GTCIB3
void INT_Excep_GPT3_GTCIB3(void) __attribute__ ((interrupt));

// GPT3 GTCIC3
void INT_Excep_GPT3_GTCIC3(void) __attribute__ ((interrupt));

// GPT3 GTCIE3
void INT_Excep_GPT3_GTCIE3(void) __attribute__ ((interrupt));

// GPT3 GTCIV3
void INT_Excep_GPT3_GTCIV3(void) __attribute__ ((interrupt));

// SCI0 ERI0
void INT_Excep_SCI0_ERI0(void) __attribute__ ((interrupt));

// SCI0 RXI0
void INT_Excep_SCI0_RXI0(void) __attribute__ ((interrupt));

// SCI0 TXI0
void INT_Excep_SCI0_TXI0(void) __attribute__ ((interrupt));

// SCI0 TEI0
void INT_Excep_SCI0_TEI0(void) __attribute__ ((interrupt));

// SCI1 ERI1
void INT_Excep_SCI1_ERI1(void) __attribute__ ((interrupt));

// SCI1 RXI1
void INT_Excep_SCI1_RXI1(void) __attribute__ ((interrupt));

// SCI1 TXI1
void INT_Excep_SCI1_TXI1(void) __attribute__ ((interrupt));

// SCI1 TEI1
void INT_Excep_SCI1_TEI1(void) __attribute__ ((interrupt));

// SCI2 ERI2
void INT_Excep_SCI2_ERI2(void) __attribute__ ((interrupt));

// SCI2 RXI2
void INT_Excep_SCI2_RXI2(void) __attribute__ ((interrupt));

// SCI2 TXI2
void INT_Excep_SCI2_TXI2(void) __attribute__ ((interrupt));

// SCI2 TEI2
void INT_Excep_SCI2_TEI2(void) __attribute__ ((interrupt));

// RIIC0 ICEEI0
void INT_Excep_RIIC0_ICEEI0(void) __attribute__ ((interrupt));

// RIIC0 ICRXI0
void INT_Excep_RIIC0_ICRXI0(void) __attribute__ ((interrupt));

// RIIC0 ICTXI0
void INT_Excep_RIIC0_ICTXI0(void) __attribute__ ((interrupt));

// RIIC0 ICTEI0
void INT_Excep_RIIC0_ICTEI0(void) __attribute__ ((interrupt));

// LIN0 LIN0
void INT_Excep_LIN0_LIN0(void) __attribute__ ((interrupt));

//;Power On Reset PC
extern void PowerON_Reset(void) __attribute__ ((interrupt)); 
#endif
