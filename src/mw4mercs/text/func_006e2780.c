/*
 * FUN_006E2780 (42 B) — Calls FUN_006E2840(), then FUN_006E2B60(&param_1),
 * stores param_2 at this+0x04, calls FUN_006E29E0() on &param_1,
 * returns this.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Disassembly:
 *   56                push    esi
 *   8B F1             mov     esi, ecx
 *   E8 B8 00 00 00    call    FUN_006E2840
 *   8D 44 24 08       lea     eax, [esp + 8]
 *   50                push    eax
 *   8B CE             mov     ecx, esi
 *   E8 CC 03 00 00    call    FUN_006E2B60
 *   8B 4C 24 0C       mov     ecx, [esp + 0xc]
 *   89 4E 04          mov     [esi + 4], ecx
 *   8D 4C 24 08       lea     ecx, [esp + 8]
 *   E8 3C 02 00 00    call    FUN_006E29E0
 *   8B C6             mov     eax, esi
 *   5E                pop     esi
 *   C2 08 00          ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006E2840(void);
void __fastcall FUN_006E2B60(int *);
void __fastcall FUN_006E29E0(int *);

__declspec(naked) void * __stdcall FUN_006e2780(void *this, int param_1, int param_2)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006E2840
        lea     eax, dword ptr [esp + 8]
        push    eax
        mov     ecx, esi
        call    FUN_006E2B60
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 4], ecx
        lea     ecx, dword ptr [esp + 8]
        call    FUN_006E29E0
        mov     eax, esi
        pop     esi
        ret     8
    }
}
