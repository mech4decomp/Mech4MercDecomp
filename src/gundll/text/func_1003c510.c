/*
 * FUN_1003c510 (224 B) — __cdecl, RET.
 * Optimized strcpy (word-at-a-time strlen + copy). Returns param_1.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003c510(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    edi
        test    ecx, 0x3
        jz      L_c52c
    L_c51d:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        jz      L_c55f
        test    ecx, 0x3
        jnz     L_c51d
    L_c52c:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 0x4
        test    eax, 0x81010100
        jz      L_c52c
        mov     eax, dword ptr [ecx - 0x4]
        test    al, al
        jz      L_c56e
        test    ah, ah
        jz      L_c569
        test    eax, 0xff0000
        jz      L_c564
        test    eax, 0xff000000
        jz      L_c55f
        jmp     L_c52c
    L_c55f:
        lea     edi, [ecx - 0x1]
        jmp     L_c571
    L_c564:
        lea     edi, [ecx - 0x2]
        jmp     L_c571
    L_c569:
        lea     edi, [ecx - 0x3]
        jmp     L_c571
    L_c56e:
        lea     edi, [ecx - 0x4]
    L_c571:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, 0x3
        jz      L_c596
    L_c57d:
        mov     dl, byte ptr [ecx]
        inc     ecx
        test    dl, dl
        jz      L_c5e8
        mov     byte ptr [edi], dl
        inc     edi
        test    ecx, 0x3
        jnz     L_c57d
        jmp     L_c596
    L_c591:
        mov     dword ptr [edi], edx
        add     edi, 0x4
    L_c596:
        mov     edx, 0x7efefeff
        mov     eax, dword ptr [ecx]
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        mov     edx, dword ptr [ecx]
        add     ecx, 0x4
        test    eax, 0x81010100
        jz      L_c591
        test    dl, dl
        jz      L_c5e8
        test    dh, dh
        jz      L_c5df
        test    edx, 0xff0000
        jz      L_c5d2
        test    edx, 0xff000000
        jz      L_c5ca
        jmp     L_c591
    L_c5ca:
        mov     dword ptr [edi], edx
        mov     eax, dword ptr [esp + 0x8]
        pop     edi
        ret
    L_c5d2:
        mov     word ptr [edi], dx
        mov     eax, dword ptr [esp + 0x8]
        mov     byte ptr [edi + 0x2], 0x0
        pop     edi
        ret
    L_c5df:
        mov     word ptr [edi], dx
        mov     eax, dword ptr [esp + 0x8]
        pop     edi
        ret
    L_c5e8:
        mov     byte ptr [edi], dl
        mov     eax, dword ptr [esp + 0x8]
        pop     edi
        ret
    }
}
