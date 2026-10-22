/*
 * FUN_00676990 (42 B) — __thiscall counter/iterator advance.
 *
 * Calls FUN_00676520(this->[8]), increments this->[8] and this->[0xc],
 * and resets this->[8] to 0 if it equals this->[0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00676520(int a);

__declspec(naked) void __fastcall FUN_00676990(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 8]
        push    eax
        call    FUN_00676520
        mov     eax, dword ptr [esi + 8]
        mov     edx, dword ptr [esi + 0xC]
        mov     ecx, dword ptr [esi + 0x10]
        inc     eax
        inc     edx
        cmp     eax, ecx
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0xC], edx
        jnz     L_done
        mov     dword ptr [esi + 8], 0
L_done:
        pop     esi
        ret
    }
}
