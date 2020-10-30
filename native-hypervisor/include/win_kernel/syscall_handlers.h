#ifndef __SYSCALL_HANDLERS_H_
#define __SYSCALL_HANDLERS_H_

#include <types.h>
#include <vmm/vmm.h>

#define NT_OPEN_PROCESS 0x26

typedef STATUS (*SYSCALL_HANDLER)(IN QWORD_PTR);

#define REGISTER_SYSCALL_HANDLER(idx, hand) syscallsData[idx].handler = hand

typedef struct _SYSCALL_DATA
{
    SYSCALL_HANDLER handler;
    BYTE params;
    QWORD hookedInstructionAddress;
    QWORD returnHookAddress;
    BYTE hookedInstrucion[X86_MAX_INSTRUCTION_LEN];
    QWORD hookedInstructionLength;
} SYSCALL_DATA, *PSYSCALL_DATA;

STATUS HandleNtOpenPrcoess(IN QWORD_PTR params);

extern QWORD __ntDataStart;

#endif
