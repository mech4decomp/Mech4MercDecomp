/*
 * FUN_005b12e0 (27 B) — __thiscall (ECX = this), RET 0x4.
 * Calls FUN_005b4370(param1) then FUN_005b12c0(param1).
 *
 * Disassembly:
 *   56                push    esi
 *   57                push    edi
 *   8B 7C 24 0C       mov     edi, [esp+0xc]
 *   8B F1             mov     esi, ecx
 *   57                push    edi
 *   E8 82 30 00 00    call    FUN_005b4370
 *   57                push    edi
 *   8B CE             mov     ecx, esi
 *   E8 CA FF FF FF    call    FUN_005b12c0
 *   5F                pop     edi
 *   5E                pop     esi
 *   C2 04 00          ret     0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b4370(int);
extern void __fastcall FUN_005b12c0(void);

__declspec(naked) void __fastcall FUN_005b12e0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005b4370
        push    edi
        mov     ecx, esi
        call    FUN_005b12c0
        pop     edi
        pop     esi
        ret     0x4
    }
}
