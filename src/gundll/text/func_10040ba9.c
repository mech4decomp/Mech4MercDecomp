/*
 * FUN_10040ba9 (41 B) — __cdecl.
 * if (param_1 < g_10076ba0) return (g_10076aa0[param_1>>5][(param_1&0x1f)*9+1] & 0x40);
 * else return 0;
 *
 * CFLAGS: /O1
 */

extern int g_10076ba0;
extern int g_10076aa0;

__declspec(naked) void FUN_10040ba9(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, dword ptr [g_10076ba0]
        jb      in_range
        xor     eax, eax
        ret
    in_range:
        mov     ecx, eax
        and     eax, 0x1f
        sar     ecx, 5
        lea     eax, [eax + eax*8]
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        mov     al, byte ptr [ecx + eax*4 + 0x4]
        and     eax, 0x40
        ret
    }
}
