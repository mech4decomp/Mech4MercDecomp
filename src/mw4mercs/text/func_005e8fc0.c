/*
 * FUN_005e8fc0 (40 B) — Destructor.
 *
 * Sets vtable pointer at [this] to 0x7897a8, calls FUN_0041fc90 on
 * this+0x194 and this+0x174, then FUN_004d9db0 on this.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void *param);
extern void __stdcall FUN_004d9db0(void *param);

__declspec(naked) void __stdcall FUN_005e8fc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x194]
        mov     dword ptr [esi], 0x7897a8
        call    FUN_0041fc90
        lea     ecx, [esi + 0x174]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_004d9db0
        pop     esi
        ret
    }
}
