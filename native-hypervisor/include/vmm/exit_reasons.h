#ifndef __EXIT_REASONS_H_
#define __EXIT_REASONS_H_


#define EXIT_REASON_EXCEPTION_NMI       0
#define EXIT_REASON_EXTERNAL_INTERRUPT  1
#define EXIT_REASON_TRIPLE_FAULT        2
#define EXIT_REASON_INIT                3
#define EXIT_REASON_SIPI                4
#define EXIT_REASON_IO_SMI              5
#define EXIT_REASON_OTHER_SMI           6
#define EXIT_REASON_PENDING_VIRT_INTR   7
#define EXIT_REASON_PENDING_VIRT_NMI    8
#define EXIT_REASON_TASK_SWITCH         9
#define EXIT_REASON_CPUID               10
#define EXIT_REASON_GETSEC              11
#define EXIT_REASON_HLT                 12
#define EXIT_REASON_INVD                13
#define EXIT_REASON_INVLPG              14
#define EXIT_REASON_RDPMC               15
#define EXIT_REASON_RDTSC               16
#define EXIT_REASON_RSM                 17
#define EXIT_REASON_VMCALL              18
#define EXIT_REASON_VMCLEAR             19
#define EXIT_REASON_VMLAUNCH            20
#define EXIT_REASON_VMPTRLD             21
#define EXIT_REASON_VMPTRST             22
#define EXIT_REASON_VMREAD              23
#define EXIT_REASON_VMRESUME            24
#define EXIT_REASON_VMWRITE             25
#define EXIT_REASON_VMXOFF              26
#define EXIT_REASON_VMXON               27
#define EXIT_REASON_CR_ACCESS           28
#define EXIT_REASON_DR_ACCESS           29
#define EXIT_REASON_IO_INSTRUCTION      30
#define EXIT_REASON_MSR_READ            31
#define EXIT_REASON_MSR_WRITE           32
#define EXIT_REASON_INVALID_GUEST_STATE 33
#define EXIT_REASON_MSR_LOADING         34
#define EXIT_REASON_MWAIT_INSTRUCTION   36
#define EXIT_REASON_MONITOR_TRAP_FLAG   37
#define EXIT_REASON_MONITOR_INSTRUCTION 39
#define EXIT_REASON_PAUSE_INSTRUCTION   40
#define EXIT_REASON_MCE_DURING_VMENTRY  41
#define EXIT_REASON_TPR_BELOW_THRESHOLD 43
#define EXIT_REASON_APIC_ACCESS         44
#define EXIT_REASON_ACCESS_GDTR_OR_IDTR 46
#define EXIT_REASON_ACCESS_LDTR_OR_TR   47
#define EXIT_REASON_EPT_VIOLATION       48
#define EXIT_REASON_EPT_MISCONFIG       49
#define EXIT_REASON_INVEPT              50
#define EXIT_REASON_RDTSCP              51
#define EXIT_REASON_VMX_PREEMPTION_TIMER_EXPIRED     52
#define EXIT_REASON_INVVPID             53
#define EXIT_REASON_WBINVD              54
#define EXIT_REASON_XSETBV              55
#define EXIT_REASON_APIC_WRITE          56
#define EXIT_REASON_RDRAND              57
#define EXIT_REASON_INVPCID             58
#define EXIT_REASON_RDSEED              61
#define EXIT_REASON_PML_FULL            62
#define EXIT_REASON_XSAVES              63
#define EXIT_REASON_XRSTORS             64
#define EXIT_REASON_PCOMMIT             65
#define EXIT_REASON_UMWAIT              67
#define EXIT_REASON_TPAUSE              68

#define VM_ENTRY_FAILURE_MASK           (1 << 31)

/* CR access data */
#define CR_ACCESS_CR_NUMBER_MASK    0xf
#define CR_ACCESS_TYPE_MASK        (3 << 4)
#define CR_ACCESS_TYPE_MOV_TO_CR   0
#define CR_ACCESS_TYPE_MOV_FROM_CR (1 << 4)
#define CR_ACCESS_TYPE_CLTS        (2 << 4)
#define CR_ACCESS_TYPE_LMSW        (3 << 4)
#define CR_ACCESS_LMSW_OP_MASK     (1 << 6)
#define CR_ACCESS_LMSW_OP_REGISTER 0
#define CR_ACCESS_LMSW_OP_MEMORY   (1 << 6)
#define CR_ACCESS_REGISTER_MASK    (0xf << 8)
#define CR_ACCESS_REGISTER_RAX     (0 << 8)
#define CR_ACCESS_REGISTER_RBX     (3 << 8)
#define CR_ACCESS_REGISTER_RCX     (1 << 8)
#define CR_ACCESS_REGISTER_RDX     (2 << 8)
#define CR_ACCESS_REGISTER_RSP     (4 << 8)
#define CR_ACCESS_REGISTER_RBP     (5 << 8)
#define CR_ACCESS_REGISTER_RSI     (6 << 8)
#define CR_ACCESS_REGISTER_RDI     (7 << 8)
#define CR_ACCESS_REGISTER_R8      (8 << 8)
#define CR_ACCESS_REGISTER_R9      (9 << 8)
#define CR_ACCESS_REGISTER_R10     (10 << 8)
#define CR_ACCESS_REGISTER_R11     (11 << 8)
#define CR_ACCESS_REGISTER_R12     (12 << 8)
#define CR_ACCESS_REGISTER_R13     (13 << 8)
#define CR_ACCESS_REGISTER_R14     (14 << 8)
#define CR_ACCESS_REGISTER_R15     (15 << 8)
#define CR_ACCESS_LMSW             (0xffff << 16)

#endif