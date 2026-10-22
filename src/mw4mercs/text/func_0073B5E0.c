/*
 * FUN_0073B5E0 (47 B @ 0x73b5e0) - __cdecl. Toggles a global flag and clears
 * two related globals. (Block 0x73A900 is 259 B and contains several more
 * sibling functions at 0x73B610/0x73B640/0x73B670/0x73B690/0x73B6C0.)
 *
 * CFLAGS: /O1
 */

extern int g_008aaed4;
extern int g_008aaedc;
extern int g_008aaed8;
extern int g_008aaef0;

__declspec(naked) void FUN_0073B5E0(void)
{
    __asm {
        mov     edx, dword ptr [g_008aaed4]
        xor     eax, eax
        xor     ecx, ecx
        cmp     edx, ecx
        sete    al
        cmp     eax, ecx
        mov     dword ptr [g_008aaed4], eax
        je      L_73b604
        mov     dword ptr [g_008aaedc], ecx
        mov     dword ptr [g_008aaed8], ecx
L_73b604:
        mov     dword ptr [g_008aaef0], 1
        ret
    }
}
