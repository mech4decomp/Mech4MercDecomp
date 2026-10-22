/*
 * FUN_00670BC0 (167 B) — iterates a linked list of 12-byte nodes, conditionally
 * shifting entries, and stores a double result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_7971b8;

__declspec(naked) void FUN_00670BC0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx+0x6c]
        push    ebp
        mov     ebp, dword ptr [ecx+0x68]
        cmp     ebp, eax
        mov     dword ptr [esp+4], ecx
        je      L_c54
        fld     qword ptr [esp+0xc]
        push    ebx
        push    esi
        push    edi
        lea     ebx, [ebp+0xc]
    L_bde:
        fld     qword ptr [g_7971b8]
        fadd    qword ptr [ebx-8]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        je      L_c3e
        mov     edi, dword ptr [ecx+0x6c]
        cmp     ebx, edi
        je      L_c36
        mov     edx, edi
        sub     edx, ebx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        mov     esi, ebp
        jle     L_c36
        mov     dword ptr [esp+0x18], edx
    L_c15:
        lea     eax, [esi+0xc]
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [ecx+4]
        mov     dword ptr [esi+4], edx
        mov     ecx, dword ptr [ecx+8]
        mov     dword ptr [esi+8], ecx
        mov     esi, eax
        dec     dword ptr [esp+0x18]
        jne     L_c15
        mov     ecx, dword ptr [esp+0x10]
    L_c36:
        add     edi, -0xc
        mov     dword ptr [ecx+0x6c], edi
        jmp     L_c44
    L_c3e:
        add     ebp, 0xc
        add     ebx, 0xc
    L_c44:
        cmp     ebp, dword ptr [ecx+0x6c]
        jne     L_bde
        pop     edi
        fstp    qword ptr [ecx+0x2c]
        pop     esi
        pop     ebx
        pop     ebp
        pop     ecx
        ret     8
    L_c54:
        mov     edx, dword ptr [esp+0xc]
        mov     eax, dword ptr [esp+0x10]
        mov     dword ptr [ecx+0x2c], edx
        mov     dword ptr [ecx+0x30], eax
        pop     ebp
        pop     ecx
        ret     8
    }
}
