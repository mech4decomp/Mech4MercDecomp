/*
 * FUN_005bfa20 (37 B) — Constructor.
 *
 * Sets vtable pointer [this] = 0x787258, then calls three sub-object
 * initializers: FUN_004179f0(this+0x14), FUN_00417980(this+0x14),
 * FUN_00415380(this).
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179f0(void);
extern void FUN_00417980(void);
extern void FUN_00415380(void);

__declspec(naked) void FUN_005bfa20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        mov     dword ptr [esi], 0x787258
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
