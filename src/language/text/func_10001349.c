/*
 * FUN_10001349 (19 B) — init a block: set vtable/data ptr at +0x50 to
 * 0x100061b0 and flag at +0x14 to 1.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10001349 (19 B) -- __cdecl.
 * Init an object block: hook the class data ptr at +0x50 to 0x100061b0 and
 * set the flag at +0x14.
 */

__declspec(naked) void __cdecl FUN_10001349(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax + 0x50], 0x100061b0
        mov     dword ptr [eax + 0x14], 1
        ret
    }
}
