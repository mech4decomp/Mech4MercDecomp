/* FUN_00591A50 - 39 bytes, __cdecl */
/* Destructor: calls FUN_00501B40 on global ptr, frees it, sets global to NULL */

#include <windows.h>

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);

extern int DAT_007F1FAC;

__declspec(naked) void FUN_00591a50(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, dword ptr [DAT_007F1FAC]
        TEST ESI, ESI
        JZ   skip_cleanup
        MOV  ECX, ESI
        CALL FUN_00501b40
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
skip_cleanup:
        MOV  dword ptr [DAT_007F1FAC], 0
        POP  ESI
        RET
    }
}
