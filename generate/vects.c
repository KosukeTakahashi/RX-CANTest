                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
/************************************************************************/
/*    File Version: V1.00                                               */
/*    History: 1.10  (2013-08-19)  [Hardware Manual Revision : 1.00]    */
/*    Date Modified: 08/19/2013                                         */
/************************************************************************/

#include "interrupt_handlers.h"

typedef void (*fp) (void);
extern void PowerON_Reset (void);
extern void stack (void);

#define FVECT_SECT          __attribute__ ((section (".fvectors")))

const void *HardwareVectors[] FVECT_SECT  = {
//;0xffffff80  Reserved
    (fp)0,
//;0xffffff84  Reserved
    (fp)0,
//;0xffffff88  Reserved
    (fp)0,
//;0xffffff8C  Reserved
    (fp)0,
//;0xffffff90  Reserved
    (fp)0,
//;0xffffff94  Reserved
    (fp)0,
//;0xffffff98  Reserved
    (fp)0,
//;0xffffff9C  Reserved
    (fp)0,
//;0xffffffA0  Reserved
    (fp)0xFFFFFFFF,
//;0xffffffA4  Reserved
    (fp)0xFFFFFFFF,
//;0xffffffA8  Reserved
    (fp)0xFFFFFFFF,
//;0xffffffAC  Reserved
    (fp)0xFFFFFFFF,
//;0xffffffB0  Reserved
    (fp)0,
//;0xffffffB4  Reserved
    (fp)0,
//;0xffffffB8  Reserved
    (fp)0,
//;0xffffffBC  Reserved
    (fp)0,
//;0xffffffC0  Reserved
    (fp)0,
//;0xffffffC4  Reserved
    (fp)0,
//;0xffffffC8  Reserved
    (fp)0,
//;0xffffffCC  Reserved
    (fp)0,
//;0xffffffd0  Exception(Supervisor Instruction)
    INT_Excep_SuperVisorInst,
//;0xffffffd4  Exception(Access Instruction)
    INT_Excep_AccessInst,
//;0xffffffd8  Reserved
    (fp)0,
//;0xffffffdc  Exception(Undefined Instruction)
    INT_Excep_UndefinedInst,
//;0xffffffe0  Reserved
    (fp)0,
//;0xffffffe4  Exception(Floating Point)
    INT_Excep_FloatingPoint,
//;0xffffffe8  Reserved
    (fp)0,
//;0xffffffec  Reserved
    (fp)0,
//;0xfffffff0  Reserved
    (fp)0,
//;0xfffffff4  Reserved
    (fp)0,
//;0xfffffff8  NMI
    INT_NonMaskableInterrupt,
//;0xfffffffc  RESET
//;<<VECTOR DATA START (POWER ON RESET)>>
//;Power On Reset PC
    PowerON_Reset                                                                                                                  
//;<<VECTOR DATA END (POWER ON RESET)>>
};

#define RVECT_SECT          __attribute__ ((section (".rvectors")))

const fp RelocatableVectors[] RVECT_SECT  = {
//0000h    Reserved
    (fp)0,
//0004h    Reserved
    (fp)0,
//0008h    Reserved
    (fp)0,
//000Ch    Reserved
    (fp)0,
//0010h    Reserved
    (fp)0,
//0014h    Reserved
    (fp)0,
//0018h    Reserved
    (fp)0,
//001Ch    Reserved
    (fp)0,
//0020h    Reserved
    (fp)0,
//0024h    Reserved
    (fp)0,
//0028h    Reserved
    (fp)0,
//002Ch    Reserved
    (fp)0,
//0030h    Reserved
    (fp)0,
//0034h    Reserved
    (fp)0,
//0038h    Reserved
    (fp)0,
//003Ch    Reserved
    (fp)0,
//0040h BSC BUSERR
    (fp)INT_Excep_BSC_BUSERR,
//0044h Reserved
    (fp)0,
//0048h Reserved
    (fp)0,
//004Ch Reserved
    (fp)0,
//0050h Reserved
    (fp)0,
// FCUIF FIFERR
    (fp)INT_Excep_FCUIF_FIFERR,
//0058h Reserved
    (fp)0,
// FCUIF FRDYI
    (fp)INT_Excep_FCUIF_FRDYI,
//0060h Reserved
    (fp)0,
//0064h Reserved
    (fp)0,
//0068h Reserved
    (fp)0,
// ICU SWINT
    (fp)INT_Excep_ICU_SWINT,
// CMT0 CMI0
    (fp)INT_Excep_CMT0_CMI0,
// CMT1 CMI1
    (fp)INT_Excep_CMT1_CMI1,
// CMT2 CMI2
    (fp)INT_Excep_CMT2_CMI2,
// CMT3 CMI3
    (fp)INT_Excep_CMT3_CMI3,
//0080h Reserved
    (fp)0,
//0084h Reserved
    (fp)0,
//0088h Reserved
    (fp)0,
//008Ch Reserved
    (fp)0,
//0090h Reserved
    (fp)0,
//0094h Reserved
    (fp)0,
//0098h Reserved
    (fp)0,
//009Ch Reserved
    (fp)0,
//00A0h Reserved
    (fp)0,
//00A4h Reserved
    (fp)0,
//00A8h Reserved
    (fp)0,
//00ACh Reserved    
    (fp)0,
//00B0h RSPI0 SPEI0
    (fp)INT_Excep_RSPI0_SPEI0,
//00B4h RSPI0 SPRI0
    (fp)INT_Excep_RSPI0_SPRI0,
//00B8h RSPI0 SPTI0
    (fp)INT_Excep_RSPI0_SPTI0,
//00BCh RSPI0 SPII0
    (fp)INT_Excep_RSPI0_SPII0,
//00C0h Reserved
    (fp)0,
//00C4h Reserved
    (fp)0,
//00C8h Reserved
    (fp)0,
//00CCh Reserved
    (fp)0,
//00D0h Reserved
    (fp)0,
//00D4h Reserved
    (fp)0,
//00D8h Reserved
    (fp)0,
//00DCh Reserved
    (fp)0,
//00E0h CAN0 ERS0
    (fp)INT_Excep_CAN0_ERS0,
//00E4h CAN0 RXF0
    (fp)INT_Excep_CAN0_RXF0,
//00E8h CAN0 TXF0
    (fp)INT_Excep_CAN0_TXF0,
//00ECh CAN0 RXM0
    (fp)INT_Excep_CAN0_RXM0,
//00F0h CAN0 TXM0
    (fp)INT_Excep_CAN0_TXM0,
//00F4h Reserved
    (fp)0,
//00F8h Reserved
    (fp)0,
//00FCh Reserved
    (fp)0,
//0100h ICU IRQ0
    (fp)INT_Excep_ICU_IRQ0,
//0104h ICU IRQ1
    (fp)INT_Excep_ICU_IRQ1,
//0108h ICU IRQ2
    (fp)INT_Excep_ICU_IRQ2,
//010Ch ICU IRQ3
    (fp)INT_Excep_ICU_IRQ3,
//0110h ICU IRQ4
    (fp)INT_Excep_ICU_IRQ4,
//0114h ICU IRQ5
    (fp)INT_Excep_ICU_IRQ5,
//0118h ICU IRQ6
    (fp)INT_Excep_ICU_IRQ6,
//011Ch ICU IRQ7
    (fp)INT_Excep_ICU_IRQ7,
//0120h Reserved
    (fp)0,
//0124h Reserved
    (fp)0,
//0128h Reserved
    (fp)0,
//012Ch Reserved
    (fp)0,
//0130h Reserved
    (fp)0,
//0134h Reserved
    (fp)0,
//0138h Reserved
    (fp)0,
//013Ch Reserved
    (fp)0,
//0140h Reserved
    (fp)0,
//0144h Reserved
    (fp)0,
//0148h Reserved
    (fp)0,
//014Ch Reserved
    (fp)0,
//0150h Reserved
    (fp)0,
//0154h Reserved
    (fp)0,
//0158h Reserved
    (fp)0,
//015Ch Reserved
    (fp)0,
//0160h Reserved
    (fp)0,
//0164h Reserved
    (fp)0,
//0168h Reserved
    (fp)0,
//016Ch Reserved
    (fp)0,
//0170h Reserved
    (fp)0,
//0174h Reserved
    (fp)0,
//0178h Reserved
    (fp)0,
//017Ch Reserved    
    (fp)0,
//0180h WDT WOVI
    (fp)INT_Excep_WDT_WOVI,
//0184h    Reserved
    (fp)0,
//0188h AD0 ADI0
    (fp)INT_Excep_AD0_ADI0,
//018Ch Reserved
    (fp)0,
//0190h Reserved
    (fp)0,
//0194h    Reserved
    (fp)0,
// S12AD0 S12ADI0
    (fp)INT_Excep_S12AD0_S12ADI0,
// S12AD1 S12ADI1
    (fp)INT_Excep_S12AD1_S12ADI1,
//01A0h Reserved
    (fp)0,
//01A4h Reserved    
    (fp)0,    
//01A8h CMPB CMPI
    (fp)INT_Excep_CMPB_CMPI,
//01ACh Reserved
    (fp)0,    
//01B0h Reserved
    (fp)0,    
//01B4h Reserved
    (fp)0,    
//01B8h Reserved
    (fp)0,    
//01BCh Reserved
    (fp)0,    
//01C0h Reserved
    (fp)0,    
//01C4h Reserved    
    (fp)0,    
//01C8h MTU0 TGIA0
    (fp)INT_Excep_MTU0_TGIA0,
//01CCh MTU0 TGIB0
    (fp)INT_Excep_MTU0_TGIB0,
//01D0h MTU0 TGIC0
    (fp)INT_Excep_MTU0_TGIC0,
//01D4h MTU0 TGID0
    (fp)INT_Excep_MTU0_TGID0,
//01D8h MTU0 TCIV0
    (fp)INT_Excep_MTU0_TCIV0,
//01DCh MTU0 TGIE0
    (fp)INT_Excep_MTU0_TGIE0,
//01E0h MTU0 TGIF0
    (fp)INT_Excep_MTU0_TGIF0,
//01E4h MTU1 TGIA1
    (fp)INT_Excep_MTU1_TGIA1,
//01E8h MTU1 TGIB1
    (fp)INT_Excep_MTU1_TGIB1,
//01ECh MTU1 TCIV1
    (fp)INT_Excep_MTU1_TCIV1,
//01F0h MTU1 TCIU1
    (fp)INT_Excep_MTU1_TCIU1,
//01F4h MTU2 TGIA2
    (fp)INT_Excep_MTU2_TGIA2,
//01F8h MTU2 TGIB2
    (fp)INT_Excep_MTU2_TGIB2,
//01FCh MTU2 TCIV2
    (fp)INT_Excep_MTU2_TCIV2,
//0200h MTU2 TCIU2
    (fp)INT_Excep_MTU2_TCIU2,
//0204h MTU3 TGIA3
    (fp)INT_Excep_MTU3_TGIA3,
//0208h MTU3 TGIB3
    (fp)INT_Excep_MTU3_TGIB3,
//020Ch MTU3 TGIC3
    (fp)INT_Excep_MTU3_TGIC3,
//0210h MTU3 TGID3
    (fp)INT_Excep_MTU3_TGID3,
//0214h MTU3 TCIV3
    (fp)INT_Excep_MTU3_TCIV3,
//0218h MTU4 TGIA4
    (fp)INT_Excep_MTU4_TGIA4,
//021Ch MTU4 TGIB4
    (fp)INT_Excep_MTU4_TGIB4,
//0220h MTU4 TGIC4
    (fp)INT_Excep_MTU4_TGIC4,
//0224h MTU4 TGID4
    (fp)INT_Excep_MTU4_TGID4,
//0228h MTU4 TCIV4
    (fp)INT_Excep_MTU4_TCIV4,
//022Ch MTU5 TGIU5
    (fp)INT_Excep_MTU5_TGIU5,
//0230h MTU5 TGIV5
    (fp)INT_Excep_MTU5_TGIV5,
//0234h MTU5 TGIW5
    (fp)INT_Excep_MTU5_TGIW5,
//0238h MTU6 TGIA6
    (fp)INT_Excep_MTU6_TGIA6,
//023Ch MTU6 TGIB6
    (fp)INT_Excep_MTU6_TGIB6,
//0240h MTU6 TGIC6
    (fp)INT_Excep_MTU6_TGIC6,
//0244h MTU6 TGID6
    (fp)INT_Excep_MTU6_TGID6,
//0248h MTU6 TCIV6
    (fp)INT_Excep_MTU6_TCIV6,
//024Ch Reserved
    (fp)0,
//0250h    Reserved
    (fp)0,
//0254h MTU7 TGIA7
    (fp)INT_Excep_MTU7_TGIA7,
//0258h MTU7 TGIB7
    (fp)INT_Excep_MTU7_TGIB7,
//025Ch MTU7 TGIC7
    (fp)INT_Excep_MTU7_TGIC7,
//0260h MTU7 TGID7
    (fp)INT_Excep_MTU7_TGID7,
//0264h MTU7 TCIV7
    (fp)INT_Excep_MTU7_TCIV7,
//0268h Reserved
    (fp)0,
//026Ch Reserved
    (fp)0,
//0270h Reserved
    (fp)0,
//0274h Reserved
    (fp)0,
//0278h Reserved
    (fp)0,
//027Ch Reserved
    (fp)0,
//0280h Reserved
    (fp)0,
//0284h Reserved
    (fp)0,
//0288h Reserved
    (fp)0,
//028Ch Reserved
    (fp)0,
//0290h Reserved
    (fp)0,
//0294h Reserved
    (fp)0,
//0298h Reserved
    (fp)0,
//029Ch Reserved
    (fp)0,
//02A0h Reserved
    (fp)0,
//02A4h Reserved    
    (fp)0,
//02A8h POE OEI1
    (fp)INT_Excep_POE_OEI1,
//02ACh POE OEI2
    (fp)INT_Excep_POE_OEI2,
//02B0h POE OEI3
    (fp)INT_Excep_POE_OEI3,
//02B4h POE OEI4
    (fp)INT_Excep_POE_OEI4,
//02B8h GPT0 GTCIA0
    (fp)INT_Excep_GPT0_GTCIA0,
//02BCh GPT0 GTCIB0
    (fp)INT_Excep_GPT0_GTCIB0,
//02C0h GPT0 GTCIC0
    (fp)INT_Excep_GPT0_GTCIC0,
//02C4h GPT0 GTCIE0
    (fp)INT_Excep_GPT0_GTCIE0,
//02C8h GPT0 GTCIV0
    (fp)INT_Excep_GPT0_GTCIV0,
//02CCh GPT0 LOCO1
    (fp)INT_Excep_GPT0_LOCO1,
//02D0h GPT1 GTCIA1
    (fp)INT_Excep_GPT1_GTCIA1,
//02D4h GPT1 GTCIB1
    (fp)INT_Excep_GPT1_GTCIB1,
//02D8h GPT1 GTCIC1
    (fp)INT_Excep_GPT1_GTCIC1,
//02DCh GPT1 GTCIE1
    (fp)INT_Excep_GPT1_GTCIE1,
//02E0h GPT1 GTCIV1
    (fp)INT_Excep_GPT1_GTCIV1,
//02E4h Reserved
    (fp)0,
//02E8h GPT2 GTCIA2
    (fp)INT_Excep_GPT2_GTCIA2,
//02ECh GPT2 GTCIB2
    (fp)INT_Excep_GPT2_GTCIB2,
//02F0h GPT2 GTCIC2
    (fp)INT_Excep_GPT2_GTCIC2,
//02F4h GPT2 GTCIE2
    (fp)INT_Excep_GPT2_GTCIE2,
//02F8h GPT2 GTCIV2
    (fp)INT_Excep_GPT2_GTCIV2,
//02FCh Reserved
    (fp)0,
//0300h GPT3 GTCIA3
    (fp)INT_Excep_GPT3_GTCIA3,
//0304h GPT3 GTCIB3
    (fp)INT_Excep_GPT3_GTCIB3,
//0308h GPT3 GTCIC3
    (fp)INT_Excep_GPT3_GTCIC3,
//030Ch GPT3 GTCIE3
    (fp)INT_Excep_GPT3_GTCIE3,
//0310h GPT3 GTCIV3
    (fp)INT_Excep_GPT3_GTCIV3,
//0314h Reserved
    (fp)0,
//0318h Reserved
    (fp)0,
//031Ch Reserved
    (fp)0,
//0320h Reserved
    (fp)0,
//0324h Reserved
    (fp)0,
//0328h Reserved
    (fp)0,
//032Ch Reserved
    (fp)0,
//0330h Reserved
    (fp)0,
//0334h Reserved
    (fp)0,
//0338h Reserved
    (fp)0,
//033Ch Reserved
    (fp)0,
//0340h Reserved
    (fp)0,
//0344h Reserved
    (fp)0,
//0348h Reserved
    (fp)0,
//034Ch Reserved
    (fp)0,
//0350h Reserved
    (fp)0,
//0354h Reserved    
    (fp)0,
//0358h SCI0 ERI0
    (fp)INT_Excep_SCI0_ERI0,
//035Ch SCI0 RXI0
    (fp)INT_Excep_SCI0_RXI0,
//0360h SCI0 TXI0
    (fp)INT_Excep_SCI0_TXI0,
//0364h SCI0 TEI0
    (fp)INT_Excep_SCI0_TEI0,
//0368h SCI1 ERI1
    (fp)INT_Excep_SCI1_ERI1,
//036Ch SCI1 RXI1
    (fp)INT_Excep_SCI1_RXI1,
//0370h SCI1 TXI1
    (fp)INT_Excep_SCI1_TXI1,
//0374h SCI1 TEI1
    (fp)INT_Excep_SCI1_TEI1,
//0378h SCI2 ERI2
    (fp)INT_Excep_SCI2_ERI2,
//037Ch SCI2 RXI2
    (fp)INT_Excep_SCI2_RXI2,
//0380h SCI2 TXI2
    (fp)INT_Excep_SCI2_TXI2,
//0384h SCI2 TEI2
    (fp)INT_Excep_SCI2_TEI2,
//0388h Reserved
    (fp)0,
//038Ch Reserved
    (fp)0,
//0390h Reserved
    (fp)0,
//0394h Reserved
    (fp)0,
//0398h Reserved
    (fp)0,
//039Ch Reserved
    (fp)0,
//03A0h Reserved
    (fp)0,
//03A4h Reserved
    (fp)0,
//03A8h Reserved
    (fp)0,
//03ACh Reserved
    (fp)0,
//03B0h Reserved
    (fp)0,
//03B4h Reserved
    (fp)0,
//03B8h Reserved
    (fp)0,
//03BCh Reserved
    (fp)0,
//03C0h Reserved
    (fp)0,
//03C4h Reserved
    (fp)0,
//03C8h Reserved
    (fp)0,
//03CCh Reserved
    (fp)0,
//03D0h Reserved
    (fp)0,
//03D4h Reserved
    (fp)0,    
//03D8h RIIC0 ICEEI0
    (fp)INT_Excep_RIIC0_ICEEI0,
//03DCh RIIC0 ICRXI0
    (fp)INT_Excep_RIIC0_ICRXI0,
//03E0h RIIC0 ICTXI0
    (fp)INT_Excep_RIIC0_ICTXI0,
//03E4h RIIC0 ICTEI0
    (fp)INT_Excep_RIIC0_ICTEI0,
//03E8h Reserved
    (fp)0,    
//03ECh Reserved
    (fp)0,    
//03F0h Reserved
    (fp)0,    
//03F4h Reserved    
    (fp)0,    
//03F8h LIN0 LIN0
    (fp)INT_Excep_LIN0_LIN0,
//03FCh    Reserved
    (fp)0,    
};
