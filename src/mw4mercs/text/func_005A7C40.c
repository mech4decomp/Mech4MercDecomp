/*
 * FUN_005A7C40 (97 B) — __thiscall, ecx=this. Loads a string, processes it,
 * stores a result, and calls two update methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00412570(void);
extern void *__cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005a7e40(void);
extern void __cdecl FUN_005f0820(void);

__declspec(naked) void FUN_005A7C40(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005f07c0
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x190]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412570
        lea     ecx, [esp + 8]
        push    ecx
        lea     ecx, [edi + 0x28c]
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      l_1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_1:
        mov     ecx, esi
        mov     dword ptr [esi + 0x17c], edi
        call    FUN_005a7e40
        mov     ecx, esi
        call    FUN_005f0820
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
