/*
 * FUN_005c00f0 (31 B) — __thiscall (ECX = this).
 *
 * Calls FUN_005587b0(this->[0x35c]->[0x3b0], 0), then FUN_005d6440(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005587b0(void);
extern void FUN_005d6440(void);

__declspec(naked) void __stdcall FUN_005c00f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x35c]
        mov     ecx, dword ptr [eax + 0x3b0]
        push    0
        call    FUN_005587b0
        mov     ecx, esi
        call    FUN_005d6440
        pop     esi
        ret
    }
}
