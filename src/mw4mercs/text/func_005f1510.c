/*
 * FUN_005f1510 (29 B) — __thiscall method.
 *
 * Calls FUN_004f43e0() on this, then FUN_00552c10(this+0x170, this).
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004f43e0(void);
extern void __stdcall FUN_00552c10(void *a, void *b);

__declspec(naked) void __stdcall FUN_005f1510(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004f43e0
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [esi + 0x178]
        push    esi
        push    eax
        call    FUN_00552c10
        pop     esi
        ret
    }
}
