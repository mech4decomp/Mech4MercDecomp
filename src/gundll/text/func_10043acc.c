/*
 * FUN_10043acc (134 B) - __stdcall, RET 0x14. Converts a 64-bit value to a
 * string in a given base using __aullrem/__aulldiv, then reverses the digits.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100416e0(void);   /* rel32 call __aullrem */
extern void __cdecl FUN_10041670(void);   /* rel32 call __aulldiv */

__declspec(naked) void __stdcall func_10043acc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0x18], 0x0
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        jz      L_aee
        mov     ebx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0xc]
        mov     byte ptr [esi], 0x2d
        inc     esi
        neg     ebx
        adc     edi, 0x0
        neg     edi
        jmp     L_af4
    L_aee:
        mov     edi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [ebp + 0x8]
    L_af4:
        mov     dword ptr [ebp + 0x10], esi
    L_af7:
        xor     eax, eax
        push    eax
        push    dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        call    FUN_100416e0
        mov     dword ptr [ebp + 0x18], eax
        xor     eax, eax
        push    eax
        push    dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        call    FUN_10041670
        mov     ebx, eax
        mov     eax, dword ptr [ebp + 0x18]
        cmp     eax, 0x9
        mov     edi, edx
        jbe     L_b24
        add     al, 0x57
        jmp     L_b26
    L_b24:
        add     al, 0x30
    L_b26:
        mov     byte ptr [esi], al
        inc     esi
        test    edi, edi
        ja      L_af7
        jc      L_b33
        test    ebx, ebx
        ja      L_af7
    L_b33:
        and     byte ptr [esi], 0x0
        dec     esi
        mov     eax, dword ptr [ebp + 0x10]
    L_b37:
        mov     cl, byte ptr [esi]
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        mov     byte ptr [eax], cl
        dec     esi
        inc     eax
        cmp     eax, esi
        mov     dword ptr [ebp + 0x10], eax
        __emit 0x72   /* __emit: MSVC6 miscomputes backward jc rel-offset (0xEF vs ref 0xEC) */
        __emit 0xEC
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
