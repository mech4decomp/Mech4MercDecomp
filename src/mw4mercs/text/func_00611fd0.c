/*
 * FUN_00611fd0 (41 B) — if the byte at index **(arg+4) in table 0x7f28d8
 * is nonzero, store **(arg+4) to 0x7f2878 and 0xffffffff to 0x7f2874.
 * Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f28d8[];
extern int g_7f2878;
extern int g_7f2874;

__declspec(naked) int FUN_00611fd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax*4 + g_7f28d8]
        mov     cl, byte ptr [edx + 0x4]
        test    cl, cl
        jz      L_skip
        mov     dword ptr [g_7f2878], eax
        mov     dword ptr [g_7f2874], 0xffffffff
    L_skip:
        xor     eax, eax
        ret
    }
}
