/*
 * FUN_005e6de0 (29 B) — __fastcall method (ECX = this).
 *
 * Sets vtable pointer 0x78929c at +0x0, calls FUN_0041fc90() on this+0x214,
 * then FUN_005eef70() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fc90(void);
extern void FUN_005eef70(void);

__declspec(naked) void func_005e6de0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x214]
        mov     dword ptr [esi], 0x78929c
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005eef70
        pop     esi
        ret
    }
}
