/*
 * FUN_10007dc0 (45 B) - __thiscall XML prolog validator. Calls
 * FUN_10007980(this, param_1, 1); if it succeeds, calls FUN_10007d10(this).
 * Returns 1 if both succeed, else 0.
 *
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10007dc0 (45 B, __thiscall, ECX = this, one stack param, RET 0x4) -
 * XML prolog validator. Calls FUN_10007980(this, param, 1); if it succeeds,
 * CFLAGS: /O2
 */

extern void __cdecl FUN_10007980(void);
extern void __cdecl FUN_10007d10(void);

__declspec(naked) void __cdecl FUN_10007dc0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    1
        mov     esi, ecx
        push    eax
        call    FUN_10007980
        test    al, al
        jz      loc_7de7
        mov     ecx, esi
        call    FUN_10007d10
        test    al, al
        jz      loc_7de7
        mov     eax, 1
        pop     esi
        ret     4
loc_7de7:
        xor     eax, eax
        pop     esi
        ret     4
    }
}
