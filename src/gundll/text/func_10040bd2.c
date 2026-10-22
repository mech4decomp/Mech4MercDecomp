/*
 * FUN_10040BD2 (168 B) - __cdecl.
 * Initializes the global handle table: sizes the allocation (0x200 default,
 * else max(0x14, current g_10076840)), allocates via FUN_1003c027 into
 * g_10075820, fills a vtable-pointer array (0x10054720..0x100549a0) and a
 * bitmap table (0x10054730..0x10054790) from g_10076aa0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_1003c027(void);   /* rel32 call (alloc) */
extern void __cdecl FUN_100374e6(unsigned long);   /* rel32 call (__amsg_exit) */
extern int g_10076840;
extern int g_10075820;
extern unsigned int g_10076aa0;   /* DAT_10076aa0 handle table base */

__declspec(naked) void __cdecl FUN_10040BD2(void)
{
    __asm {
        mov     eax, dword ptr [g_10076840]
        push    esi
        push    0x14
        test    eax, eax
        pop     esi
        jne     L_be6
        mov     eax, 0x200
        jmp     L_bec
    L_be6:
        cmp     eax, esi
        jge     L_bf1
        mov     eax, esi
    L_bec:
        mov     dword ptr [g_10076840], eax
    L_bf1:
        push    4
        push    eax
        call    FUN_1003c027
        pop     ecx
        mov     dword ptr [g_10075820], eax
        test    eax, eax
        pop     ecx
        jne     L_c25
        push    4
        push    esi
        mov     dword ptr [g_10076840], esi
        call    FUN_1003c027
        pop     ecx
        mov     dword ptr [g_10075820], eax
        test    eax, eax
        pop     ecx
        jne     L_c25
        push    0x1a
        call    FUN_100374e6
        pop     ecx
    L_c25:
        xor     ecx, ecx
        mov     eax, 0x10054720
    L_c2c:
        mov     edx, dword ptr [g_10075820]
        mov     dword ptr [ecx + edx], eax
        add     eax, 0x20
        add     ecx, 4
        cmp     eax, 0x100549a0
        jl      L_c2c
        xor     ecx, ecx
        mov     edx, 0x10054730
    L_c49:
        mov     esi, ecx
        mov     eax, ecx
        sar     esi, 5
        and     eax, 0x1f
        mov     esi, dword ptr [esi*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        mov     eax, dword ptr [esi + eax*4]
        cmp     eax, -1
        je      L_c69
        test    eax, eax
        jne     L_c6c
    L_c69:
        or      dword ptr [edx], 0xffffffff
    L_c6c:
        add     edx, 0x20
        inc     ecx
        cmp     edx, 0x10054790
        jl      L_c49
        pop     esi
        ret
    }
}
