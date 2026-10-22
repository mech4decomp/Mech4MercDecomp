/*
 * FUN_006F1B50 (40 B) — Calls FUN_0041FD80() on this+0x58. If non-zero,
 * calls it again, stores result in *param_1, returns 1. Else returns 0.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * Disassembly:
 *   56                push    esi
 *   8D 71 58          lea     esi, [ecx + 0x58]
 *   8B CE             mov     ecx, esi
 *   E8 25 E2 D2 FF    call    FUN_0041FD80
 *   85 C0             test    eax, eax
 *   74 13             jz      fail
 *   8B CE             mov     ecx, esi
 *   E8 1A E2 D2 FF    call    FUN_0041FD80
 *   8B 4C 24 08       mov     ecx, [esp + 8]
 *   89 01             mov     [ecx], eax
 *   B0 01             mov     al, 1
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *   32 C0             xor     al, al
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int __fastcall FUN_0041FD80(void *);

__declspec(naked) int __stdcall FUN_006f1b50(void *this, int *out_param)
{
    __asm {
        push    esi
        lea     esi, dword ptr [ecx + 0x58]
        mov     ecx, esi
        call    FUN_0041FD80
        test    eax, eax
        jz      fail
        mov     ecx, esi
        call    FUN_0041FD80
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        mov     al, 1
        pop     esi
        ret     4
fail:
        xor     al, al
        pop     esi
        ret     4
    }
}
