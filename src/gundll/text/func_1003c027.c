/*
 * FUN_1003c027 (289 B) — __cdecl.
 * SEH-guarded allocation helper: computes param_1*param_2, rounds up,
 * tries pool allocators (FUN_1003d5d6/FUN_1003e49b) or HeapAlloc
 * (0x10049074), retries via FUN_100426ef. Contains inline SEH handler
 * blocks (FUN_1003c0c0 / FUN_1003c149 bodies) that the normal flow
 * jumps over.
 *
 * CFLAGS: /O1
 */

extern char g_1004b7a0[];          /* DAT_1004b7a0 (SEH data) */
extern char g_1003eb9c[];          /* DAT_1003eb9c (SEH handler) */
extern unsigned int g_10076a94;    /* DAT_10076a94 */
extern unsigned int g_10076860;    /* DAT_10076860 */
extern unsigned int g_10053f94;    /* DAT_10053f94 */
extern unsigned int g_10076a90;    /* DAT_10076a90 */
extern void (__cdecl *g_10049074)(void);  /* HeapAlloc */
extern unsigned int g_10075728;    /* DAT_10075728 */
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_1003d5d6(void);
extern void __cdecl FUN_1003c0c0(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_1003e49b(void);
extern void __cdecl FUN_1003c149(void);
extern void __cdecl FUN_10040680(void);
extern void __cdecl FUN_100426ef(void);

__declspec(naked) void func_1003c027(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_1004b7a0
        push    offset g_1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ebp + 8]
        imul    esi, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0xc], esi
        mov     dword ptr [ebp - 0x1c], esi
        cmp     esi, -0x20
        ja      L_c070
        xor     ebx, ebx
        cmp     esi, ebx
        jnz     L_c065
        push    1
        pop     esi
    L_c065:
        add     esi, 0xf
        and     esi, 0xfffffff0
        mov     dword ptr [ebp + 0xc], esi
        jmp     L_c072
    L_c070:
        xor     ebx, ebx
    L_c072:
        mov     dword ptr [ebp - 0x20], ebx
        cmp     esi, -0x20
        ja      L_c126
        mov     eax, dword ptr [g_10076a94]
        cmp     eax, 3
        jnz     L_c0c9
        mov     edi, dword ptr [ebp - 0x1c]
        cmp     edi, dword ptr [g_10076860]
        ja      L_c10f
        push    9
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 4], ebx
        push    edi
        call    FUN_1003d5d6
        pop     ecx
        mov     dword ptr [ebp - 0x20], eax
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_1003c0c0
        cmp     dword ptr [ebp - 0x20], ebx
        jz      L_c114
        push    dword ptr [ebp - 0x1c]
        jmp     L_c103
        /* --- inline SEH handler block (FUN_1003c0c0 body) --- */
        xor     ebx, ebx
        mov     esi, dword ptr [ebp + 0xc]
        push    9
        call    FUN_10039b7a
        pop     ecx
        ret
    L_c0c9:
        cmp     eax, 2
        jnz     L_c10f
        cmp     esi, dword ptr [g_10053f94]
        ja      L_c10f
        push    9
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 4], 1
        mov     eax, esi
        shr     eax, 4
        push    eax
        call    FUN_1003e49b
        pop     ecx
        mov     dword ptr [ebp - 0x20], eax
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_1003c149
        cmp     dword ptr [ebp - 0x20], ebx
        jz      L_c114
        push    esi
    L_c103:
        push    ebx
        push    dword ptr [ebp - 0x20]
        call    FUN_10040680
        add     esp, 0xc
    L_c10f:
        cmp     dword ptr [ebp - 0x20], ebx
        jnz     L_c152
    L_c114:
        push    esi
        push    8
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049074]
        mov     dword ptr [ebp - 0x20], eax
    L_c126:
        cmp     dword ptr [ebp - 0x20], ebx
        jnz     L_c152
        cmp     dword ptr [g_10075728], ebx
        jz      L_c152
        push    esi
        call    FUN_100426ef
        pop     ecx
        test    eax, eax
        jnz     L_c072
        jmp     L_c155
        /* --- inline SEH handler block (FUN_1003c149 body) --- */
        xor     ebx, ebx
        mov     esi, dword ptr [ebp + 0xc]
        push    9
        call    FUN_10039b7a
        pop     ecx
        ret
    L_c152:
        mov     eax, dword ptr [ebp - 0x20]
    L_c155:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
