/*
 * FUN_006A1BA0 (18 B) — Vtable 0x799CD8 slot 16: wrapper calling FUN_006A02E0.
 *
 * Passes two stack params through to FUN_006A02E0.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Disassembly:
 *   8B 44 24 08       mov     eax, [esp+8]
 *   8B 54 24 04       mov     edx, [esp+4]
 *   50                push    eax
 *   52                push    edx
 *   E8 xx xx xx xx    call    FUN_006A02E0
 *   C2 08 00          ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a02e0(void);

__declspec(naked) void __stdcall FUN_006a1ba0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a02e0
        ret     8
    }
}
