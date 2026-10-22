/*
 * FUN_006ae250 (14 B) — __cdecl, RET 0.
 *
 * Table lookup: return *(int*)(0x82db4c + (arg << 5)). ABL record handler
 * helper (indexed array of 0x20-byte entries).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_82db4c[];

__declspec(naked) void __cdecl func_006ae250(int arg)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        shl     eax, 0x5
        mov     eax, dword ptr [eax + g_82db4c]
        ret
    }
}
