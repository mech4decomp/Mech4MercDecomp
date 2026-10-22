/*
 * FUN_005b3690 (36 B) — __thiscall, RET 8.
 *
 * Clears a byte flag, calls FUN_005b27f0, then forwards two params to
 * FUN_005c1e50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b27f0(void);
extern void __stdcall FUN_005c1e50(void);

__declspec(naked) void __stdcall FUN_005b3690(void *param1, void *param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     byte ptr [esi + 0x30a], 0
        call    FUN_005b27f0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005c1e50
        pop     esi
        ret     8
    }
}
