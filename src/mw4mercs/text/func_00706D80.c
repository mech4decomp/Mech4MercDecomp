/*
 * FUN_00706D80 (197 B) — lazily initializes a global list, freeing old nodes
 * and calling IAT functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8aaac2;
extern double g_76d970;
extern double g_8aaac8;
extern double g_76de20;
extern void *g_76b110;
extern void *g_76b100;
extern void *g_76b168;
extern int g_8aab04;
extern int g_8aab08;
extern int g_8aaa18;
extern int g_76b2d0;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00706D80(void)
{
    __asm {
        mov     al, byte ptr [g_8aaac2]
        test    al, al
        jne     L_6e42
        fld     qword ptr [g_76d970]
        fcomp   qword ptr [g_8aaac8]
        fnstsw  ax
        test    ah, 0x40
        jne     L_6dc0
        push    1
        call    FUN_00707e70
        fld     qword ptr [g_8aaac8]
        fadd    qword ptr [g_76de20]
        fcompp
        fnstsw  ax
        test    ah, 1
        je      L_6e42
    L_6dc0:
        push    0x8aaa20
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [g_8aab04]
        test    eax, eax
        je      L_6e0d
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_76b2d0]
        mov     ebx, eax
    L_6ddd:
        mov     esi, dword ptr [ebx+0x54]
        test    esi, esi
        mov     eax, dword ptr [eax]
        mov     dword ptr [g_8aab04], eax
        je      L_6dfb
    L_6ded:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    edi
        add     esp, 4
        test    esi, esi
        jne     L_6ded
    L_6dfb:
        push    ebx
        call    edi
        mov     eax, dword ptr [g_8aab04]
        add     esp, 4
        test    eax, eax
        /* __emit: MSVC6 miscomputes backward jne rel-offset (75 D5 vs ref 75 D3) */
        __emit 0x75
        __emit 0xD3
        pop     edi
        pop     esi
        pop     ebx
    L_6e0d:
        mov     ecx, dword ptr [g_8aab08]
        push    0x8aaa20
        mov     dword ptr [g_8aab04], ecx
        mov     dword ptr [g_8aab08], 0
        mov     byte ptr [g_8aaac2], 1
        call    dword ptr [g_76b100]
        mov     edx, dword ptr [g_8aaa18]
        push    edx
        call    dword ptr [g_76b168]
    L_6e42:
        xor     eax, eax
        ret
    }
}
