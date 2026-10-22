/*
 * FUN_10045d33 (93 B) - __cdecl. If param_1 < g_10076ba0 and the bit at
 * (g_10076aa0[param_1>>5] + 4 + (param_1&0x1f)*0x24) is set, calls
 * FUN_10043f78/FUN_10045d90/FUN_10043fd7 and returns the middle result;
 * else sets error state via FUN_1004277d/FUN_10042786 and returns -1.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076ba0;       /* count */
extern unsigned int g_10076aa0;       /* bitfield array base */
extern void __cdecl FUN_10043f78(void);   /* rel32 call */
extern void __cdecl FUN_10045d90(void);   /* rel32 call */
extern void __cdecl FUN_10043fd7(void);   /* rel32 call */
extern void __cdecl FUN_1004277d(void);   /* rel32 call */
extern void __cdecl FUN_10042786(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10045d33(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        cmp     esi, dword ptr [g_10076ba0]
        jnc     L_78
        mov     ecx, esi
        mov     eax, esi
        sar     ecx, 5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        test    byte ptr [ecx + eax*4 + 4], 1
        jz      L_78
        push    edi
        push    esi
        call    FUN_10043f78
        push    esi
        call    FUN_10045d90
        push    esi
        mov     edi, eax
        call    FUN_10043fd7
        add     esp, 0xc
        mov     eax, edi
        pop     edi
        pop     esi
        ret
L_78:
        call    FUN_1004277d
        mov     dword ptr [eax], 9
        call    FUN_10042786
        and     dword ptr [eax], 0
        or      eax, 0xffffffff
        pop     esi
        ret
    }
}
