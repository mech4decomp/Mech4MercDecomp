/*
 * FUN_5e0284e0 (77 B) - writes a value into a 2D lookup table.
 *
 * param_1 (esp+4) = value, param_2 (esp+8) = index, param_3 (esp+0xc) = row.
 * If DAT_5e77a834 == 0: 16-bit store at row*DAT_5e77a840 + index*2 + DAT_5e77a844
 * else: 32-bit store (value duplicated into hi/lo 16 bits) at
 *       row*DAT_5e77a840 + index*4 + DAT_5e77a844 and + DAT_5e77a838.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a840;   /* DAT_5e77a840 (row stride) */
extern int g_5e77a834;   /* DAT_5e77a834 (16/32-bit flag) */
extern int g_5e77a844;   /* DAT_5e77a844 (base) */
extern int g_5e77a838;   /* DAT_5e77a838 (second base) */

__declspec(naked) void FUN_5e0284e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0xc]
        imul    edx, dword ptr [g_5e77a840]
        cmp     dword ptr [g_5e77a834], 0
        jnz     L_8509
        lea     edx, [edx + eax*2]
        add     edx, dword ptr [g_5e77a844]
        mov     eax, dword ptr [esp + 0x4]
        mov     word ptr [edx], ax
        ret
    L_8509:
        lea     edx, [edx + eax*4]
        add     edx, dword ptr [g_5e77a844]
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, eax
        shl     ecx, 0x10
        and     eax, 0xffff
        or      eax, ecx
        mov     dword ptr [edx], eax
        add     edx, dword ptr [g_5e77a838]
        mov     dword ptr [edx], eax
        ret
    }
}
