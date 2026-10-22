/*
 * FUN_006E29B0 (41 B) — Conditional grow/resize. If
 * (*this)[-12] > 1 or param_1 > (*this)[-4], calls FUN_006E28E0()
 * then FUN_006E2890(param_1).
 *
 * __thiscall (ECX = this), RET 4.
 *
 * Disassembly:
 *   56                push    esi
 *   8B F1             mov     esi, ecx
 *   8B 06             mov     eax, [esi]
 *   83 78 F4 01       cmp     dword ptr [eax - 0xc], 1
 *   57                push    edi
 *   8B 7C 24 0C       mov     edi, [esp + 0xc]
 *   7F 05             jg      grow
 *   3B 78 FC          cmp     edi, [eax - 4]
 *   7E 0F             jle      skip
 *   8B CE             mov     ecx, esi
 *   E8 14 FF FF FF    call    FUN_006E28E0
 *   57                push    edi
 *   8B CE             mov     ecx, esi
 *   E8 BC FE FF FF    call    FUN_006E2890
 *   5F                pop     edi
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006E28E0(void);
void __fastcall FUN_006E2890(int);

__declspec(naked) void __stdcall FUN_006e29b0(void *this, int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     dword ptr [eax - 0xc], 1
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        jg      grow
        cmp     edi, dword ptr [eax - 4]
        jle     skip
grow:
        mov     ecx, esi
        call    FUN_006E28E0
        push    edi
        mov     ecx, esi
        call    FUN_006E2890
skip:
        pop     edi
        pop     esi
        ret     4
    }
}
