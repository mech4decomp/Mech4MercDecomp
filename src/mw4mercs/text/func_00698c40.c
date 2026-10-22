/*
 * FUN_00698c40 (30 B) — __thiscall sub-object destructor: sets the
 * vtable pointer (0x799830), frees the member at +0x1c via
 * FUN_004084e0 (operator delete), then calls FUN_00415380 (base/other
 * destructor, __thiscall on `this`).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00698c40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        mov     dword ptr [esi], 0x799830
        call    FUN_004084e0
        add     esp, 0x4
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
