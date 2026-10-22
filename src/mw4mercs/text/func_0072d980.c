/*
 * FUN_0072D980 (332 B) — Formats a string into a rotating 0x1000-byte
 * slot in global buffer DAT_0088297c (indexed by DAT_007b71e0), either
 * via sprintf or by decompressing through FUN_0072de80.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b71e0;                  /* DAT_007b71e0 slot index */
extern int g_8aae40;                  /* DAT_008aae40 */
extern int g_859af0;                  /* DAT_00859af0 */
extern char g_88297c;                 /* DAT_0088297c buffer base */
extern void *g_76b420;                /* IAT: sprintf */
extern char g_7a5b18[];               /* "~%s:%d~" */
extern char g_7a5b04[];               /* "%s:%d Not defined" */

extern void __cdecl FUN_00707e90(void);
extern int __cdecl FUN_0075db4a(void);
extern int __cdecl FUN_0072de80(void *a, void *b, void *c, int n);

__declspec(naked) char *__stdcall FUN_0072D980(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [g_7b71e0]
        inc     eax
        cmp     eax, 0xa
        mov     dword ptr [g_7b71e0], eax
        jnz     L_d997
        xor     eax, eax
        mov     dword ptr [g_7b71e0], eax
L_d997:
        mov     ecx, dword ptr [g_8aae40]
        test    ecx, ecx
        jz      L_da04
        call    FUN_00707e90
        fadd    st(0), st(0)
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_8aae40]
        and     eax, 0x1
        cmp     ecx, 0x1
        jz      L_d9c4
        cmp     ecx, 0x2
        jnz     L_d9ff
        test    eax, eax
        jz      L_d9ff
L_d9c4:
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [g_7b71e0]
        push    eax
        add     ecx, 0x8
        push    ecx
        shl     edx, 0xc
        add     edx, offset g_88297c
        push    offset g_7a5b18
        push    edx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_7b71e0]
        shl     eax, 0xc
        add     esp, 0x10
        add     eax, offset g_88297c
        ret     0x8
L_d9ff:
        mov     eax, dword ptr [g_7b71e0]
L_da04:
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     ebx, dword ptr [esi + 0x4]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    0x1000
        shl     eax, 0xc
        add     eax, offset g_88297c
        push    eax
        push    edi
        push    ebx
        call    FUN_0072de80
        mov     ecx, eax
        test    ecx, ecx
        jnz     L_da61
        mov     eax, dword ptr [g_7b71e0]
        push    edi
        add     esi, 0x8
        push    esi
        shl     eax, 0xc
        add     eax, offset g_88297c
        push    offset g_7a5b04
        push    eax
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_7b71e0]
        add     esp, 0x10
        pop     edi
        shl     eax, 0xc
        pop     esi
        add     eax, offset g_88297c
        pop     ebx
        ret     0x8
L_da61:
        mov     eax, dword ptr [g_859af0]
        test    eax, eax
        jz      L_dab9
        mov     esi, dword ptr [g_7b71e0]
        mov     eax, 0x55555556
        imul    ecx
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    ebp
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 0x2
        shl     esi, 0xc
        mov     eax, 0x2a2a2a2a
        lea     edi, [esi + g_88297c]
        rep     stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     stosb
        mov     eax, 0x1000
        sub     eax, edx
        push    eax
        lea     ecx, [esi + edx + g_88297c]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    ebx
        call    FUN_0072de80
        pop     ebp
L_dab9:
        mov     eax, dword ptr [g_7b71e0]
        pop     edi
        shl     eax, 0xc
        pop     esi
        add     eax, offset g_88297c
        pop     ebx
        ret     0x8
    }
}
