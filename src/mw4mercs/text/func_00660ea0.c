/*
 * FUN_00660ea0 (18 B) — __thiscall constructor: calls FUN_006a22a0(),
 * installs vtable 0x795404, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22a0(void);

__declspec(naked) void FUN_00660ea0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        mov     dword ptr [esi], 0x795404
        mov     eax, esi
        pop     esi
        ret
    }
}
