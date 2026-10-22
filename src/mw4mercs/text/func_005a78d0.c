/*
 * FUN_005a78d0 (33 B) — Thiscall function that initializes sub-object.
 *
 * Calls FUN_0041fd80 on this+0x180. If it returns 0, calls FUN_005a7cb0.
 * Then ORs 0x40 into this+0x10.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_005a7cb0(void);

__declspec(naked) void __stdcall FUN_005a78d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x180]
        call    FUN_0041fd80
        test    eax, eax
        jnz     skip_call
        mov     ecx, esi
        call    FUN_005a7cb0
skip_call:
        or      dword ptr [esi + 0x10], 0x40
        pop     esi
        ret     0x4
    }
}
