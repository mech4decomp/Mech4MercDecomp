/*
 * FUN_00523C50 (88 B) — __stdcall, 3 params (ret 0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */
extern void __cdecl FUN_0052e150(void);
extern void __cdecl FUN_006f8f80(void);
extern void __cdecl FUN_00540090(void);

__declspec(naked) void FUN_00523c50(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007DAB44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [DAT_007dab40]   ; mov edx, [0x007DAB40]
        push    ebx
        xor     ecx, edx
        mov     ebx, dword ptr [ecx+0xC]
        push    esi
        xor     ebx, 0x85739531
        push    edi
        xor     esi, esi
        lea     edi, [ebx+0x205D24]
    l_loop:
        mov     ecx, edi
        call    FUN_0052e150
        push    1
        push    0
        lea     edx, [esi+0x100]
        push    edx
        call    FUN_006f8f80
        inc     esi
        add     edi, 0x22AC
        cmp     esi, 0x18
        jl      l_loop
        mov     ecx, ebx
        call    FUN_00540090
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     0xC
    }
}
