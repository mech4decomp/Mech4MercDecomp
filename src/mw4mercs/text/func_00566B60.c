/* Auto-generated inline asm transcription for FUN_00566b60 */
#include <windows.h>

__declspec(naked) int FUN_00566b60(int param_1)
{
    

extern void __cdecl FUN_1005669cf(void);
extern int DAT_007f23b0;
extern void __cdecl FUN_100415218(void);
__asm {
mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        call FUN_1005669cf
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007f23b0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415218
        cmp     al, 0x1
        jnz     L1
        mov     eax, esi
        pop     esi
        ret
L1:
        xor     eax, eax
        pop     esi
        ret
    }


}
