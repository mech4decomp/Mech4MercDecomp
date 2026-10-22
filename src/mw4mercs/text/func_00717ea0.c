/*
 * FUN_00717EA0 (142 B) — __cdecl, no params.
 *
 * Walks a linked list (DAT_008aaae0), finds a node matching a time
 * criterion, frees its sub-list via FUN_006f4230, and updates
 * DAT_008aaad0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e90(void);
extern void __cdecl FUN_006f4230(void *p);

extern double g_8aaad8;       /* DAT_008aaad8 */
extern int g_8aaae0;          /* DAT_008aaae0 */
extern int g_858afc;          /* DAT_00858afc */
extern double g_76d968;       /* _DAT_0076d968 */
extern int g_8aaad0;          /* DAT_008aaad0 */

__declspec(naked) void __cdecl FUN_00717ea0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        call    FUN_00707e90
        fstp    qword ptr [g_8aaad8]
        mov     ebx, dword ptr [g_8aaae0]
        mov     ecx, ebx
        xor     eax, eax
        test    ecx, ecx
        jz      L_efe
L_ebc:
        inc     eax
        cmp     eax, 0x23
        jz      L_eca
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        jnz     L_ebc
        jmp     L_efe
L_eca:
        test    ecx, ecx
        jz      L_efe
        mov     esi, dword ptr [g_858afc]
        lea     edx, [esi - 0x1]
L_ed7:
        mov     eax, dword ptr [ecx + 0xc]
        cmp     eax, edx
        jz      L_ef8
        cmp     eax, esi
        jz      L_ef8
        fld     qword ptr [ecx + 0x4]
        fadd    qword ptr [g_76d968]
        fcomp   qword ptr [g_8aaad8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_efe
L_ef8:
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        jnz     L_ed7
L_efe:
        test    ecx, ecx
        mov     edi, ecx
        jz      L_f24
        mov     esi, dword ptr [ecx]
        test    esi, esi
        jz      L_f1e
L_f0a:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     L_f0a
        mov     ebx, dword ptr [g_8aaae0]
L_f1e:
        mov     dword ptr [edi], 0x0
L_f24:
        pop     edi
        pop     esi
        mov     dword ptr [g_8aaad0], ebx
        pop     ebx
        ret
    }
}
