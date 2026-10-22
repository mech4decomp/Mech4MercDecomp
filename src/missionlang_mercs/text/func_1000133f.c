/*
 * FUN_1000133f (19 B) — init a block: set vtable ptr at +0x50 and flag at +0x14.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1000133f(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax + 0x50], 0x100051b0
        mov     dword ptr [eax + 0x14], 1
        ret
    }
}
