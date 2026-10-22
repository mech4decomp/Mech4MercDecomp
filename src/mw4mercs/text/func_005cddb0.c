/*
 * FUN_005cddb0 (20 B) — __thiscall. Calls virtual method at vtable+0x1c4,
 * then calls FUN_005dbb10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cddb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov     ecx, esi
        _emit 0xE8
        _emit 0x4E
        _emit 0xDD
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }
}
