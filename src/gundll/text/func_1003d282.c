/*
 * FUN_1003d282 (43 B) — __cdecl.
 * Scans a table (base g_1007685c, stride 0x14, count g_10076858) for an
 * entry whose [entry+0xc] is within 0x100000 of param_1. Returns 0 if
 * not found.
 *
 * CFLAGS: /O1
 */

extern int g_10076858;
extern int g_1007685c;

__declspec(naked) void FUN_1003d282(void)
{
    __asm {
        mov     eax, dword ptr [g_10076858]
        lea     ecx, [eax + eax*4]
        mov     eax, dword ptr [g_1007685c]
        lea     ecx, [eax + ecx*4]
    loop_:
        cmp     eax, ecx
        jae     xor_ret
        mov     edx, dword ptr [esp + 0x4]
        sub     edx, dword ptr [eax + 0xc]
        cmp     edx, 0x100000
        jb      end_ret
        add     eax, 0x14
        jmp     loop_
    xor_ret:
        xor     eax, eax
    end_ret:
        ret
    }
}
