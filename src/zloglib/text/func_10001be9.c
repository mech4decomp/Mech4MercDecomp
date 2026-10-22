/*
 * ZlogLib.dll - FUN_10001be9 (0x10001BE9, 63 B, __cdecl)
 * Log message dispatch: if log active and string non-empty, route to
 * FUN_10001201 with level 1 and/or 2 depending on config flags.
 * Transcribed from ZlogLib.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001be9 (63 B) -- log message dispatcher. If logging active and the
 * string is non-empty, route to FUN_10001201 (level params in ref: config
 * flags choose 1 and/or 2).
 */

extern unsigned int g_10006c0c;
extern unsigned int g_10004014;
extern unsigned int g_10004304;
extern void __cdecl FUN_10001201(void);

__declspec(naked) void FUN_10001be9(void)
{
    __asm {
        cmp dword ptr [g_10006c0c], 0x0
        push esi
        jz L_c26
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jz L_c26
        cmp byte ptr [esi], 0x0
        jz L_c26
        cmp dword ptr [g_10004014], 0x0
        jz L_c13
        push 0x1
        push esi
        call FUN_10001201
        pop ecx
        pop ecx
    L_c13:
        cmp dword ptr [g_10004304], 0x0
        jz L_c26
        push 0x2
        push esi
        call FUN_10001201
        pop ecx
        pop ecx
    L_c26:
        pop esi
        ret
    }
}
