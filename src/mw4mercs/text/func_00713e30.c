/*
 * FUN_00713E30 (528 B) — State machine dispatching to FUN_0074a670 based on
 * global flags (DAT_0087c2ac / DAT_0087c2a8 / DAT_0087c1d4) and cached
 * state (DAT_007b70bc / DAT_007b70b8).
 *
 * __stdcall, RET 4 (1 param: int param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_87c2ac;                          /* DAT_0087c2ac */
extern unsigned int g_87c1d4;                          /* DAT_0087c1d4 */
extern unsigned int g_7b70bc;                          /* DAT_007b70bc */
extern unsigned int g_85a248;                          /* DAT_0085a248 */
extern unsigned int g_7b70b8;                          /* DAT_007b70b8 */
extern unsigned int g_87c2a8;                          /* DAT_0087c2a8 */

extern void __cdecl FUN_0074a670(void);

__declspec(naked) void __stdcall FUN_00713e30(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, 0x1
        cmp     eax, ebx
        push    esi
        mov     esi, 0x2
        jnz     L_ee8
        mov     eax, dword ptr [g_87c2ac]
        test    eax, eax
        jz      L_ef0
        mov     eax, dword ptr [g_87c1d4]
        test    eax, eax
        mov     eax, dword ptr [g_7b70bc]
        jz      L_ea4
        cmp     eax, ebx
        jz      L_e7c
        mov     eax, dword ptr [g_85a248]
        push    esi
        push    ebx
        push    0x0
        push    eax
        call    FUN_0074a670
        mov     dword ptr [g_7b70bc], ebx
L_e7c:
        cmp     dword ptr [g_7b70b8], ebx
        jz      L_1403b
        mov     ecx, dword ptr [g_85a248]
        push    esi
        push    0x4
        push    0x0
        push    ecx
        call    FUN_0074a670
        pop     esi
        mov     dword ptr [g_7b70b8], ebx
        pop     ebx
        ret     0x4
L_ea4:
        cmp     eax, esi
        jz      L_ebf
        mov     edx, dword ptr [g_85a248]
        push    0x3
        push    ebx
        push    0x0
        push    edx
        call    FUN_0074a670
        mov     dword ptr [g_7b70bc], esi
L_ebf:
        mov     eax, dword ptr [g_7b70b8]
L_ec4:
        cmp     eax, esi
        jz      L_1403b
        mov     eax, dword ptr [g_85a248]
        push    0x3
        push    0x4
        push    0x0
        push    eax
        call    FUN_0074a670
        mov     dword ptr [g_7b70b8], esi
        pop     esi
        pop     ebx
        ret     0x4
L_ee8:
        cmp     eax, esi
        jz      L_f9b
L_ef0:
        mov     eax, dword ptr [g_87c2a8]
        test    eax, eax
        jz      L_f9b
        mov     eax, dword ptr [g_87c1d4]
        test    eax, eax
        mov     eax, dword ptr [g_7b70bc]
        jz      L_f58
        test    eax, eax
        jz      L_f2a
        mov     ecx, dword ptr [g_85a248]
        push    0x4
        push    ebx
        push    0x0
        push    ecx
        call    FUN_0074a670
        mov     dword ptr [g_7b70bc], 0x0
L_f2a:
        mov     eax, dword ptr [g_7b70b8]
        test    eax, eax
        jz      L_1403b
        mov     edx, dword ptr [g_85a248]
        push    0x4
        push    0x4
        push    0x0
        push    edx
        call    FUN_0074a670
        pop     esi
        mov     dword ptr [g_7b70b8], 0x0
        pop     ebx
        ret     0x4
L_f58:
        cmp     eax, esi
        jz      L_f72
        mov     eax, dword ptr [g_85a248]
        push    0x3
        push    ebx
        push    0x0
        push    eax
        call    FUN_0074a670
        mov     dword ptr [g_7b70bc], esi
L_f72:
        cmp     dword ptr [g_7b70b8], esi
        jz      L_1403b
        mov     ecx, dword ptr [g_85a248]
        push    0x3
        push    0x4
        push    0x0
        push    ecx
        call    FUN_0074a670
        mov     dword ptr [g_7b70b8], esi
        pop     esi
        pop     ebx
        ret     0x4
L_f9b:
        mov     eax, dword ptr [g_87c1d4]
        test    eax, eax
        mov     eax, dword ptr [g_7b70bc]
        jz      L_14000
        test    eax, eax
        jz      L_fc8
        mov     edx, dword ptr [g_85a248]
        push    0x4
        push    ebx
        push    0x0
        push    edx
        call    FUN_0074a670
        mov     dword ptr [g_7b70bc], 0x0
L_fc8:
        mov     eax, dword ptr [g_87c1d4]
        mov     cl, byte ptr [eax + 0x4]
        mov     eax, dword ptr [g_7b70b8]
        shr     cl, 0x3
        __asm __emit 0x84 __asm __emit 0xCB   /* test bl,cl 84 CB (MSVC6 swaps to 84 D9) */
        jz      L_ec4
        cmp     eax, ebx
        jz      L_1403b
        mov     edx, dword ptr [g_85a248]
        push    esi
        push    0x4
        push    0x0
        push    edx
        call    FUN_0074a670
        pop     esi
        mov     dword ptr [g_7b70b8], ebx
        pop     ebx
        ret     0x4
L_14000:
        cmp     eax, esi
        jz      L_1401b
        mov     ecx, dword ptr [g_85a248]
        push    0x3
        push    ebx
        push    0x0
        push    ecx
        call    FUN_0074a670
        mov     dword ptr [g_7b70bc], esi
L_1401b:
        cmp     dword ptr [g_7b70b8], esi
        jz      L_1403b
        mov     edx, dword ptr [g_85a248]
        push    0x3
        push    0x4
        push    0x0
        push    edx
        call    FUN_0074a670
        mov     dword ptr [g_7b70b8], esi
L_1403b:
        pop     esi
        pop     ebx
        ret     0x4
    }
}
