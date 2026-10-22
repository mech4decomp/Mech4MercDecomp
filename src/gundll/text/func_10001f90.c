/*
 * FUN_10001f90 (140 B) - __stdcall, RET 0xC.
 * Wide-string to byte-buffer helper: converts param_1 via
 * FUN_10001e10 into a 0x80-byte local buffer, then copies the result
 * back into param_1 and stores the byte count in *param_3.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10001e10(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10001f90(void)
{
    __asm {
        sub     esp, 0x84
        push    edi
        mov     edi, dword ptr [esp + 0x8c]
        test    edi, edi
        mov     dword ptr [esp + 0x4], 0
        jnz     L_fb6
        xor     eax, eax
        pop     edi
        add     esp, 0x84
        ret     0xc
    L_fb6:
        mov     eax, dword ptr [esp + 0x90]
        inc     eax
        cmp     eax, 0x80
        jc      L_fd4
        mov     eax, 0xc1120005
        pop     edi
        add     esp, 0x84
        ret     0xc
    L_fd4:
        lea     ecx, [esp + 0x4]
        push    ecx
        push    0x80
        lea     edx, [esp + 0x10]
        push    edx
        push    edi
        call    FUN_10001e10
        test    eax, eax
        jl      L_2012
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        mov     ecx, edx
        mov     ebx, ecx
        shr     ecx, 2
        lea     esi, [esp + 0x10]
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x9c]
        pop     esi
        mov     dword ptr [ecx], edx
        pop     ebx
    L_2012:
        pop     edi
        add     esp, 0x84
        ret     0xc
    }
}
