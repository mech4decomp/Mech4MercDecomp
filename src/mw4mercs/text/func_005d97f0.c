/*
 * FUN_005d97f0 (32 B) — __thiscall. Dispatches two virtual calls on the
 * object at this->[0x28]: first with (this) at vtable+0x190, then with
 * (0,0) at vtable+0x188.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d97f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x28]
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x190]
        mov     ecx, dword ptr [esi + 0x28]
        mov     edx, dword ptr [ecx]
        push    0
        push    0
        call    dword ptr [edx + 0x188]
        pop     esi
        ret
    }
}
