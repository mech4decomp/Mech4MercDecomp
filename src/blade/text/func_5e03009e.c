/*
 * FUN_5e03009e (199 B) - convert a byte string into a 96-bit (3x32)
 * fixed-point value with exponent normalization. Accumulates each
 * byte via 96-bit shift/add helpers, then normalizes the mantissa
 * and stores a 16-bit exponent at [out+0xa].
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e030043(void);
extern void __cdecl FUN_5e02ffe5(void);

__declspec(naked) void FUN_5e03009e(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [ebp+0xc]
        push    ebx
        mov     ebx, dword ptr [ebp+0x10]
        xor     edx, edx
        cmp     eax, edx
        push    esi
        mov     dword ptr [ebp-4], 0x404e
        mov     dword ptr [ebx], edx
        mov     dword ptr [ebx+4], edx
        mov     dword ptr [ebx+8], edx
        jbe     L112
        push    edi
        mov     dword ptr [ebp+0x10], eax
    Lc5:
        mov     esi, ebx
        lea     edi, [ebp-0x10]
        movsd
        movsd
        push    ebx
        movsd
        call    FUN_5e030043
        push    ebx
        call    FUN_5e030043
        lea     eax, [ebp-0x10]
        push    eax
        push    ebx
        call    FUN_5e02ffe5
        push    ebx
        call    FUN_5e030043
        mov     eax, dword ptr [ebp+8]
        and     dword ptr [ebp-0xc], 0
        and     dword ptr [ebp-8], 0
        movsx   eax, byte ptr [eax]
        mov     dword ptr [ebp-0x10], eax
        lea     eax, [ebp-0x10]
        push    eax
        push    ebx
        call    FUN_5e02ffe5
        add     esp, 0x1c
        inc     dword ptr [ebp+8]
        dec     dword ptr [ebp+0x10]
        jnz     Lc5
        xor     edx, edx
        pop     edi
    L112:
        cmp     dword ptr [ebx+8], edx
        jnz     L13f
        mov     ecx, dword ptr [ebx+4]
        mov     eax, ecx
        shr     eax, 0x10
        mov     dword ptr [ebx+8], eax
        mov     eax, dword ptr [ebx]
        mov     esi, eax
        shr     esi, 0x10
        shl     ecx, 0x10
        or      esi, ecx
        shl     eax, 0x10
        add     dword ptr [ebp-4], 0xfff0
        mov     dword ptr [ebx+4], esi
        mov     dword ptr [ebx], eax
        jmp     L112
    L13f:
        mov     esi, 0x8000
    L144:
        test    dword ptr [ebx+8], esi
        jnz     L159
        push    ebx
        call    FUN_5e030043
        add     dword ptr [ebp-4], 0xffff
        pop     ecx
        jmp     L144
    L159:
        mov     ax, word ptr [ebp-4]
        pop     esi
        mov     word ptr [ebx+0xa], ax
        pop     ebx
        leave
        ret
    }
}
