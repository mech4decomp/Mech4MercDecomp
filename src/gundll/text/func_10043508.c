/*
 * FUN_10043508 (111 B) — __cdecl.
 * Integer-to-decimal-string writer. If global 0x1007581c is nonzero, delegates
 * to FUN_10043577; otherwise writes the decimal digits of param_1 into
 * param_3 (right-aligned at param_2-1) and updates the buffer/count pointers.
 *
 * CFLAGS: /O1
 */

extern int g_1007581c;
extern void __cdecl FUN_10043577(void);

__declspec(naked) void FUN_10043508(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        xor     eax, eax
        push    edi
        cmp     dword ptr [g_1007581c], eax
        mov     dword ptr [ebp - 0x4], eax
        jz      L2d
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0x8]
        call    FUN_10043577
        add     esp, 0xc
        jmp     L74
    L2d:
        mov     edi, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, dword ptr [edi]
        jnc     L72
        dec     ecx
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        lea     eax, [ecx + 0x1]
        test    eax, eax
        jz      L68
        push    ebx
    L44:
        mov     eax, dword ptr [ebp + 0x8]
        push    0xa
        cdq
        pop     ebx
        idiv    ebx
        mov     eax, dword ptr [esi]
        add     dl, 0x30
        mov     byte ptr [eax + ecx*1], dl
        mov     eax, dword ptr [ebp + 0x8]
        cdq
        idiv    ebx
        inc     dword ptr [ebp - 0x4]
        dec     ecx
        cmp     ecx, -0x1
        mov     dword ptr [ebp + 0x8], eax
        jnz     L44
        pop     ebx
    L68:
        mov     eax, dword ptr [ebp - 0x4]
        add     dword ptr [esi], eax
        sub     dword ptr [edi], eax
        pop     esi
        jmp     L74
    L72:
        mov     dword ptr [edi], eax
    L74:
        pop     edi
        leave
        ret
    }
}
