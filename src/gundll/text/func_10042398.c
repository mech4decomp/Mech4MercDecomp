/*
 * FUN_10042398 (21 B) - __cdecl.
 * Looks up a 16-bit flag for a byte index in the table at g_10051984 and
 * returns bit 0x8000 of it.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10051984;   /* flag table base */

__declspec(naked) void __cdecl FUN_10042398(void)
{
    __asm {
        movzx   eax, byte ptr [esp + 4]
        mov     ecx, dword ptr [g_10051984]
        mov     ax, word ptr [ecx + eax*2]
        and     eax, 0x8000
        ret
    }
}
