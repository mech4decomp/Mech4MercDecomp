/*
 * FUN_00688510 (30 B) — Vtable 0x798C44 slot 19: copy 3 dwords from param
 * to this+0x20/0x24/0x28, then call FUN_006B0740 (no-op).
 *
 * __thiscall (ECX = this), RET 4 (one stack param: source*).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp+4]       ; source
 *   8B 10             mov     edx, [eax]          ; dword 0
 *   89 51 20          mov     [ecx+0x20], edx
 *   8B 50 04          mov     edx, [eax+4]        ; dword 1
 *   89 51 24          mov     [ecx+0x24], edx
 *   8B 50 08          mov     edx, [eax+8]        ; dword 2
 *   50                push    eax
 *   89 51 28          mov     [ecx+0x28], edx
 *   E8 xx xx xx xx    call    FUN_006B0740        ; no-op
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006b0740(void);

__declspec(naked) void __stdcall FUN_00688510(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x20], edx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 0x24], edx
        mov     edx, dword ptr [eax + 8]
        push    eax
        mov     dword ptr [ecx + 0x28], edx
        call    FUN_006b0740
        ret     4
    }
}
