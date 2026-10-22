/*
 * FUN_10007ED0 (46 B) - __thiscall (ECX = this, one stack param, RET 0x4).
 * Calls FUN_10007E00 to validate; if it fails, returns 0. Otherwise computes
 * a length (( [this+0x14] - saved_ptr ) / 2) and passes it to FUN_10006f70,
 * returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Validates via FUN_10007E00(this); on success computes a length
 * ((this->f14 - saved) / 2) and calls FUN_10006f70(param, saved, len),
 * returning 1; otherwise returns 0 (the validation result, already in AL).
 * CFLAGS: /O2
 */

extern void __cdecl FUN_10007E00(void);
extern void __cdecl FUN_10006f70(void);

__declspec(naked) void __cdecl FUN_10007ED0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        call    FUN_10007E00
        test    al, al
        jnz     L5
        pop     edi
        pop     esi
        ret     0x4
L5:
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 0xc]
        sub     eax, edi
        sar     eax, 0x1
        push    eax
        push    edi
        call    FUN_10006f70
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x4
    }
}
