/* Auto-generated inline asm transcription for FUN_00566b90 */
#include <windows.h>

__declspec(naked) int FUN_00566b90(int param_1)
{
    

extern int DAT_007dde2c;
extern void __cdecl FUN_1005666bc(void);
extern void __cdecl FUN_006fabd6(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_1004151fb(void);
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        jnz     L1
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L2
        push    0x77f740
        call FUN_1005666bc
        push    eax
        call FUN_006fabd6
        add     esp, 0x8
        test    eax, eax
        jz      L2
        int     3
L2:
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
L1:
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_1004151fb
        cmp     al, 0x1
        jnz     L3
        mov     eax, dword ptr [esi + 0x170]
        pop     esi
        pop     ebp
        ret
L3:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}
