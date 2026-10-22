/* Auto-generated inline asm transcription for FUN_00566c10 */
#include <windows.h>

__declspec(naked) int FUN_00566c10(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, 0xf00000
        jle     L1
        and     eax, 0xff000000
        sub     eax, 0x9000000
        neg     eax
        sbb     eax, eax
        inc     eax
        ret
L1:
        xor     al, al
        ret
    }
}
