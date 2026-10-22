/* Auto-generated inline asm transcription for FUN_00566bf0 */
#include <windows.h>

__declspec(naked) int FUN_00566bf0(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        and     eax, 0xff000000
        sub     eax, 0x9000000
        neg     eax
        sbb     eax, eax
        inc     eax
        ret
    }
}
