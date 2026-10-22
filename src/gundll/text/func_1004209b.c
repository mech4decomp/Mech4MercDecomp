/*
 * FUN_1004209b (89 B) — __cdecl.
 * Ref-counted wrapper: InterlockedIncrement/Decrement around a call to
 * FUN_100420f4, with a critical-section lock via FUN_10039b19/7a.
 *
 * CFLAGS: /O1
 */

extern void *g_10049120;   /* InterlockedIncrement IAT */
extern void *g_100491bc;   /* InterlockedDecrement IAT */
extern int g_10076a88;
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_100420f4(void);

__declspec(naked) void __cdecl FUN_1004209b(void)
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
        jz      L_100420cb
        push    esi
        call    edi
        push    0x13
        call    FUN_10039b19
        pop     ecx
        push    0x1
        pop     ebx
    L_100420cb:
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_100420f4
        pop     ecx
        mov     dword ptr [ebp + 0xc], eax
        test    ebx, ebx
        pop     ecx
        jz      L_100420e9
        push    0x13
        call    FUN_10039b7a
        pop     ecx
        jmp     L_100420ec
    L_100420e9:
        push    esi
        call    edi
    L_100420ec:
        mov     eax, dword ptr [ebp + 0xc]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
