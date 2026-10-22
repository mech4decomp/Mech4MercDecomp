/*
 * FUN_5e032cde (111 B) - emits an integer as decimal digits into the output
 * buffer. If DAT_5e77abdc is set, delegates to FUN_5e032d4d; otherwise
 * writes the digits right-to-left (base 10) bounded by param_2.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abdc;   /* DAT_5e77abdc */
extern void __cdecl FUN_5e032d4d(int, int, int);

__declspec(naked) void FUN_5e032cde(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        xor     eax, eax
        push    edi
        cmp     dword ptr [g_5e77abdc], eax
        mov     dword ptr [ebp-0x4], eax
        jz      L2d03
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0x8]
        call    FUN_5e032d4d
        add     esp, 0xc
        jmp     L2d4a
    L2d03:
        mov     edi, dword ptr [ebp+0x14]
        mov     ecx, dword ptr [ebp+0xc]
        cmp     ecx, dword ptr [edi]
        jnc     L2d48
        dec     ecx
        push    esi
        mov     esi, dword ptr [ebp+0x10]
        lea     eax, [ecx+1]
        test    eax, eax
        jz      L2d3e
        push    ebx
    L2d1a:
        mov     eax, dword ptr [ebp+0x8]
        push    0xa
        cdq
        pop     ebx
        idiv    ebx
        mov     eax, dword ptr [esi]
        add     dl, 0x30
        mov     byte ptr [eax+ecx], dl
        mov     eax, dword ptr [ebp+0x8]
        cdq
        idiv    ebx
        inc     dword ptr [ebp-0x4]
        dec     ecx
        cmp     ecx, -0x1
        mov     dword ptr [ebp+0x8], eax
        jnz     L2d1a
        pop     ebx
    L2d3e:
        mov     eax, dword ptr [ebp-0x4]
        add     dword ptr [esi], eax
        sub     dword ptr [edi], eax
        pop     esi
        jmp     L2d4a
    L2d48:
        mov     dword ptr [edi], eax
    L2d4a:
        pop     edi
        leave
        ret
    }
}
