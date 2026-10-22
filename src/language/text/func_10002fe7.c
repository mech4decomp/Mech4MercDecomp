/*
 * FUN_10002fe7 (43 B, __cdecl) — linear scan of the 0x14-byte string-table
 * entries; returns the entry whose [entry+0xc] is within 0x100000 of
 * param_1, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008da8;   /* entry count */
extern int g_10008dac;   /* table base */

__declspec(naked) int FUN_10002fe7(void)
{
    __asm {
        mov     eax, dword ptr [g_10008da8]
        lea     ecx, [eax + eax*4]
        mov     eax, dword ptr [g_10008dac]
        lea     ecx, [eax + ecx*4]
L_2ff7:
        cmp     eax, ecx
        jnc     L_300f
        mov     edx, dword ptr [esp + 4]
        sub     edx, dword ptr [eax + 0xc]
        cmp     edx, 0x100000
        jc      L_3011
        add     eax, 0x14
        jmp     L_2ff7
L_300f:
        xor     eax, eax
L_3011:
        ret
    }
}
