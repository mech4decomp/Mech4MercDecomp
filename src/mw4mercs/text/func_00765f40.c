/*
 * FUN_00765f40 (16 B) — __cdecl, two params.
 * param1 (value) at [esp+4], param2 (index) at [esp+8].
 * Adds value into the int array at 0x8bd508 indexed by param2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bd508;

__declspec(naked) void __cdecl FUN_00765f40(int value, int index)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        add     dword ptr [eax * 4 + g_8bd508], ecx
        ret
    }
}
