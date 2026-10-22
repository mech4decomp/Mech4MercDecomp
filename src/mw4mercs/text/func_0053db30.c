/*
 * FUN_0053db30 (96 B) — __thiscall (ECX = this).
 * Iterates over a 0xFF-entry table at this+0x353C (stride 0x2038), calling
 * FUN_0053db90 for each active entry, then clears a flag at this+0x225C+0x2F4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0053db90(void);

extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void func_0053db30(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        xor     esi, esi
        lea     edi, [ebx + 0x353C]

    loop_check:
        cmp     byte ptr [edi], 0
        jz      loop_next
        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, [ecx + 0x28]
        cmp     esi, eax
        jz      loop_next
        push    esi
        mov     ecx, ebx
        call    FUN_0053db90

    loop_next:
        inc     esi
        add     edi, 0x2038
        cmp     esi, 0xFF
        jl      loop_check

        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x20]
        pop     edi
        xor     ecx, 0x85739531
        mov     edx, [ecx + 0x225C]
        pop     esi
        mov     byte ptr [edx + 0x2F4], 0
        pop     ebx
        ret
    }
}
