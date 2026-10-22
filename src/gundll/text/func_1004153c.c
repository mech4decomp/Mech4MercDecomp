/*
 * FUN_1004153c (93 B) - __cdecl. Refcounted wrapper: InterlockedIncrement on
 * g_10076a8c; if g_10076a88 != 0, decrement + FUN_10039b19(0x13); calls
 * FUN_10041599; then either FUN_10039b7a(0x13) or InterlockedDecrement.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern void *g_10049120;              /* IAT: InterlockedIncrement */
extern void *g_100491bc;              /* global fn ptr (InterlockedDecrement) */
extern unsigned int g_10076a88;       /* init flag */
extern void __cdecl FUN_10039b19(void);   /* rel32 call */
extern void __cdecl FUN_10041599(void);   /* rel32 call */
extern void __cdecl FUN_10039b7a(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1004153c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, 0x10076a8c
        push    edi
        push    esi
        call    dword ptr [g_10049120]
        mov     edi, dword ptr [g_100491bc]
        xor     ebx, ebx
        cmp     dword ptr [g_10076a88], ebx
        jz      L_6c
        push    esi
        call    edi
        push    0x13
        call    FUN_10039b19
        pop     ecx
        push    1
        pop     ebx
L_6c:
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_10041599
        add     esp, 0xc
        mov     dword ptr [ebp + 0x10], eax
        test    ebx, ebx
        jz      L_8e
        push    0x13
        call    FUN_10039b7a
        pop     ecx
        jmp     L_91
L_8e:
        push    esi
        call    edi
L_91:
        mov     eax, dword ptr [ebp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
