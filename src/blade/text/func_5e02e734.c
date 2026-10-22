/*
 * FUN_5e02e734 (141 B) - allocation wrapper (malloc-like). Computes
 * size = param1*param2, rounds up to 16, tries a pool allocator
 * (FUN_5e02cc6f) then HeapAlloc, with a retry loop via FUN_5e02d844.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02c830(int);
extern void *__cdecl FUN_5e02cc6f(int);
extern void __cdecl FUN_5e02c891(int);
extern void __cdecl FUN_5e02e310(void *, int, int);
extern int __cdecl FUN_5e02d844(int);
extern int g_5e0391b0;   /* DAT_5e0391b0 */
extern int g_5e77ae20;   /* DAT_5e77ae20 (heap handle) */
extern int g_5e77aa38;   /* DAT_5e77aa38 */
extern int *g_5e035024;  /* IAT: HeapAlloc */

__declspec(naked) void FUN_5e02e734(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0xc]
        push    edi
        imul    esi, dword ptr [esp+0x14]
        cmp     esi, -0x20
        mov     ebx, esi
        ja      L754
        test    esi, esi
        jnz     L74e
        push    1
        pop     esi
    L74e:
        add     esi, 0xf
        and     esi, 0xfffffff0
    L754:
        xor     edi, edi
        cmp     esi, -0x20
        ja      L795
        cmp     ebx, dword ptr [g_5e0391b0]
        ja      L780
        push    9
        call    FUN_5e02c830
        push    ebx
        call    FUN_5e02cc6f
        push    9
        mov     edi, eax
        call    FUN_5e02c891
        add     esp, 0xc
        test    edi, edi
        jnz     L7ab
    L780:
        push    esi
        push    8
        push    dword ptr [g_5e77ae20]
        call    dword ptr [g_5e035024]
        mov     edi, eax
        test    edi, edi
        jnz     L7b7
    L795:
        cmp     dword ptr [g_5e77aa38], 0
        jz      L7b7
        push    esi
        call    FUN_5e02d844
        test    eax, eax
        pop     ecx
        jz      L7bd
        jmp     L754
    L7ab:
        push    ebx
        push    0
        push    edi
        call    FUN_5e02e310
        add     esp, 0xc
    L7b7:
        mov     eax, edi
    L7b9:
        pop     edi
        pop     esi
        pop     ebx
        ret
    L7bd:
        xor     eax, eax
        jmp     L7b9
    }
}
