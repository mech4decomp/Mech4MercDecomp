/* Auto-generated inline asm transcription for FUN_00566c30 */
#include <windows.h>

__declspec(naked) int FUN_00566c30(int param_1)
{
    

extern int DAT_007dde2c;
extern void __cdecl FUN_100566be4(void);
extern void __cdecl FUN_1005666b3(void);
extern void __cdecl FUN_006fabcd(void);
__asm {
push    ebp
        mov     ebp, esp
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        jz      L1
        push    esi
        call FUN_100566be4
        add     esp, 0x4
        test    al, al
        jnz     L1
        push    0x77f770
        call FUN_1005666b3
        push    eax
        call FUN_006fabcd
        add     esp, 0x8
        test    eax, eax
        jz      L1
        int     3
L1:
        mov     eax, esi
        and     eax, 0xffffff
        pop     esi
        pop     ebp
        ret
    }


}
