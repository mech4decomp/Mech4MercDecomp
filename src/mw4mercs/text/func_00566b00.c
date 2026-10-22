/* Auto-generated inline asm transcription for FUN_00566b00 */
#include <windows.h>

__declspec(naked) int FUN_00566b00(int param_1)
{
    

extern void __cdecl FUN_1005669cd(void);
extern int DAT_007f23d8;
extern void __cdecl FUN_100415216(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_10056669a(void);
extern void __cdecl FUN_006fabb4(void);
__asm {
push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        push    eax
        call FUN_1005669cd
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415216
        cmp     al, 0x1
        jnz     L1
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
L1:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L2
        push    0x77f68c
        call FUN_10056669a
        push    eax
        call FUN_006fabb4
        add     esp, 0x8
        test    eax, eax
        jz      L2
        int     3
L2:
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
    }


}
