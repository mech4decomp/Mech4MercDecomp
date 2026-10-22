/*
 * FUN_006c02f0 (1225 B) — Resource-type dispatcher. Reads the type char at
 * [edi+0xa] and frees the resource array at [edi+0x4] (count at [edi+0x8])
 * using the per-type destructor, then frees the container itself via
 * FUN_006f4230. __stdcall, RET 0x4 (1 arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006c6630(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006c85a0(void);
extern void __cdecl FUN_006c9770(void);
extern void __cdecl FUN_006cb030(void);
extern void __cdecl FUN_0072a680(void);
extern void __cdecl FUN_007336d0(void);
extern void __cdecl FUN_00725740(void);
extern void __cdecl FUN_006cc250(void);
extern void __cdecl FUN_006cc6e0(void);

__declspec(naked) void FUN_006c02f0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     al, byte ptr [edi + 0xa]
        cmp     al, 0x6e
        jnz     L_67
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_n_zero
        and     eax, 0xffff
        jle     L_n_after
        mov     ebx, dword ptr [edi + 0x4]
        mov     ebp, eax
L_n_loop:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_n_next
        mov     ecx, esi
        call    FUN_006c6630
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_n_next:
        add     ebx, 0x4
        dec     ebp
        jnz     L_n_loop
L_n_after:
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_n_zero:
        mov     esi, dword ptr [edi + 0x4]
        test    esi, esi
        jz      L_07ac
        mov     ecx, esi
        call    FUN_006c6630
        jmp     L_07a3
L_67:
        cmp     al, 0x67
        jnz     L_6d
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_g_zero
        and     eax, 0xffff
        jle     L_g_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_g_loop:
        cmp     dword ptr [esi], 0x0
        jz      L_g_next
        push    esi
        call    FUN_006c85a0
L_g_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_g_loop
L_g_after:
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_g_zero:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        lea     eax, [edi + 0x4]
        jz      L_07ac
        push    eax
        call    FUN_006c85a0
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_6d:
        cmp     al, 0x6d
        jnz     L_69
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_m_zero
        and     eax, 0xffff
        jle     L_m_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_m_loop:
        cmp     dword ptr [esi], 0x0
        jz      L_m_next
        push    esi
        call    FUN_006c9770
L_m_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_m_loop
L_m_after:
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_m_zero:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        lea     eax, [edi + 0x4]
        jz      L_07ac
        push    eax
        call    FUN_006c9770
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_69:
        cmp     al, 0x69
        jnz     L_6f
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_i_zero
        and     eax, 0xffff
        jle     L_i_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_i_loop:
        cmp     dword ptr [esi], 0x0
        jz      L_i_next
        push    esi
        call    FUN_006cb030
L_i_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_i_loop
L_i_after:
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_i_zero:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        lea     eax, [edi + 0x4]
        jz      L_07ac
        push    eax
        call    FUN_006cb030
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_6f:
        cmp     al, 0x6f
        jnz     L_6c
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_o_zero
        and     eax, 0xffff
        jle     L_o_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_o_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_o_next
        push    eax
        call    FUN_0072a680
L_o_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_o_loop
L_o_after:
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_o_zero:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jz      L_07ac
        push    eax
        call    FUN_0072a680
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_6c:
        cmp     al, 0x6c
        jnz     L_65
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_l_zero
        and     eax, 0xffff
        jle     L_l_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_l_loop:
        cmp     dword ptr [esi], 0x0
        jz      L_l_next
        push    esi
        call    FUN_007336d0
L_l_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_l_loop
L_l_after:
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_l_zero:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        lea     eax, [edi + 0x4]
        jz      L_07ac
        push    eax
        call    FUN_007336d0
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_65:
        cmp     al, 0x65
        jnz     L_6a
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e_zero
        and     eax, 0xffff
        jle     L_057d
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_e_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_e_next
        push    eax
        call    FUN_006f4230
L_e_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_e_loop
L_057d:
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_6a:
        cmp     al, 0x6a
        jnz     L_64
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_j_zero
        and     eax, 0xffff
        jle     L_j_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_j_loop:
        cmp     dword ptr [esi], 0x0
        jz      L_j_next
        push    esi
        call    FUN_00725740
L_j_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_j_loop
L_j_after:
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_j_zero:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        lea     eax, [edi + 0x4]
        jz      L_07ac
        push    eax
        call    FUN_00725740
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_64:
        cmp     al, 0x64
        jnz     L_70
        cmp     word ptr [edi + 0x8], 0x0
        jz      L_07ac
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_70:
        cmp     al, 0x70
        jnz     L_66
        cmp     word ptr [edi + 0x8], 0x0
        jz      L_07ac
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_66:
        cmp     al, 0x66
        jnz     L_6b
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e_zero
        and     eax, 0xffff
        jle     L_f_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_f_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_f_next
        push    eax
        call    FUN_006f4230
L_f_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_f_loop
L_f_after:
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_e_zero:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jz      L_07ac
        push    eax
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_6b:
        cmp     al, 0x6b
        jnz     L_68
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_057d
        and     eax, 0xffff
        jle     L_k_after
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, eax
L_k_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_k_next
        push    eax
        call    FUN_006f4230
L_k_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_k_loop
L_k_after:
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_68:
        cmp     al, 0x68
        jnz     L_71
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_h_zero
        mov     ebp, dword ptr [edi + 0x4]
        test    ebp, ebp
        jz      L_h_zero
        and     eax, 0xffff
        jle     L_h_after
        mov     esi, ebp
        mov     ebx, eax
L_h_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_h_next
        push    eax
        call    FUN_006cc250
L_h_next:
        add     esi, 0x4
        dec     ebx
        jnz     L_h_loop
L_h_after:
        push    ebp
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_h_zero:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jz      L_07ac
        push    eax
        call    FUN_006cc250
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_71:
        cmp     al, 0x71
        jnz     L_07ac
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_q_zero
        and     eax, 0xffff
        jle     L_q_after
        mov     ebx, dword ptr [edi + 0x4]
        mov     ebp, eax
L_q_loop:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_q_next
        mov     ecx, esi
        call    FUN_006cc6e0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_q_next:
        add     ebx, 0x4
        dec     ebp
        jnz     L_q_loop
L_q_after:
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        call    FUN_006f4230
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_q_zero:
        mov     esi, dword ptr [edi + 0x4]
        test    esi, esi
        jz      L_07ac
        mov     ecx, esi
        call    FUN_006cc6e0
L_07a3:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_07ac:
        push    edi
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
