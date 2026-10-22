/*
 * FUN_0073B370 (65 B) — __cdecl (RET 0). Copies g_8aaeb4/g_7b73d8 into
 * g_8aae10/g_8aae0c, sets several globals to 1, zeroes g_8aaeb4, and
 * stores 1 into three byte globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8aaeb4;
extern int  g_7b73d8;
extern int  g_8aaef4;
extern int  g_8aae10;
extern int  g_8aae0c;
extern char g_87bc0a;
extern char g_87bc09;
extern char g_87bc14;

__declspec(naked) void FUN_0073B370(void)
{
    __asm {
        mov     ecx, dword ptr [g_8aaeb4]
        mov     edx, dword ptr [g_7b73d8]
        mov     eax, 1
        mov     dword ptr [g_8aaef4], eax
        mov     dword ptr [g_8aae10], ecx
        mov     dword ptr [g_8aae0c], edx
        mov     dword ptr [g_8aaeb4], 0
        mov     dword ptr [g_7b73d8], eax
        mov     byte ptr [g_87bc0a], al
        mov     byte ptr [g_87bc09], al
        mov     byte ptr [g_87bc14], al
        ret
    }
}
