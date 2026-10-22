/*
 * FUN_006D3AB0 (30 B) — Scalar deleting destructor.
 *
 * Calls FUN_00416e50 (base destructor), then if (flags & 1) frees via
 * FUN_004084e0. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00416e50(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006d3ab0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 0x08], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
