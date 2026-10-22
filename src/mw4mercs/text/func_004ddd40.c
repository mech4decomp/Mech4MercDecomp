/*
 * FUN_004ddd40 (534 B) — __thiscall Adept::ControlsManager reset/reinit.
 * Tears down the state-engine sub-objects (virtual method 0 with arg 3),
 * frees the mapping group, then rebuilds the controls manager from the
 * passed config: allocates the event-controls instance (FUN_00505a40),
 * the 5-slot state-engine array (vtable 0x773910), the mapping-group
 * array (vtable 0x7738f8), and wires them via FUN_004dd8b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00505ce0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_007224d0(void);
extern void __cdecl FUN_007226f0(void);
extern void __cdecl FUN_00505a40(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd770(void);
extern void __cdecl FUN_004dd8b0(void);

__declspec(naked) void FUN_004ddd40(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp+0x34]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        mov     dword ptr [esp+0x14], ebp
        jz      L_d
        mov     ecx, dword ptr [ebp+0x40]
        cmp     ecx, edi
        jz      L_a
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
L_a:
        mov     ecx, dword ptr [ebp+0x3c]
        cmp     ecx, edi
        jz      L_b
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
L_b:
        mov     ecx, dword ptr [ebp+0x38]
        cmp     ecx, edi
        jz      L_c
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
L_c:
        cmp     esi, edi
        jz      L_d
        mov     ecx, esi
        call    FUN_00505ce0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_d:
        push    edi
        mov     dword ptr [ebp+0x34], edi
        mov     dword ptr [ebp+0x38], edi
        mov     dword ptr [ebp+0x3c], edi
        mov     dword ptr [ebp+0x40], edi
        call    FUN_007224d0
        mov     esi, dword ptr [esp+0x1c]
        cmp     eax, esi
        jbe     L_u
        push    0x3d08850a
        push    0x1
        push    esi
        call    FUN_007226f0
        push    0x58
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_e
        push    0x3e19999a
        push    0x3d4ccccd
        push    0x3d4ccccd
        push    0x3da3d70a
        push    esi
        mov     ecx, eax
        call    FUN_00505a40
        mov     dword ptr [esp+0x1c], eax
        jmp     L_f
L_e:
        mov     dword ptr [esp+0x1c], edi
        mov     eax, edi
L_f:
        cmp     eax, edi
        mov     dword ptr [ebp+0x34], eax
        jz      L_g
        mov     ecx, dword ptr [ebp+0x30]
        mov     dword ptr [eax+0x54], ecx
L_g:
        push    0x90
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_i
        lea     edi, [eax+0x4]
        mov     dword ptr [eax], 0x5
        mov     esi, edi
        mov     ebx, 0x5
L_h:
        mov     ecx, esi
        call    FUN_004dd770
        mov     dword ptr [esi], 0x773910
        add     esi, 0x1c
        dec     ebx
        jnz     L_h
L_i:
        mov     edx, dword ptr [esp+0x1c]
        mov     dword ptr [ebp+0x38], edi
        mov     ebp, dword ptr [ebp+0x3b70]
        lea     esi, [edx+0x4]
        mov     ebx, 0x5
L_j:
        mov     eax, dword ptr [esi]
        push    ebp
        push    esi
        mov     ecx, edi
        mov     dword ptr [edi+0x18], eax
        call    FUN_004dd8b0
        add     esi, 0x4
        add     edi, 0x1c
        dec     ebx
        jnz     L_j
        mov     ebx, dword ptr [esp+0x1c]
        mov     edi, dword ptr [ebx]
        /* __emit: no-base SIB lea [edi*8+0] -> 8D 0C FD 00 00 00 00 (MSVC6 can't encode no-base scale-8 form) */
        __emit 0x8D
        __emit 0x0C
        __emit 0xFD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        sub     ecx, edi
        /* __emit: no-base SIB lea [ecx*4+4] -> 8D 14 8D 04 00 00 00 (MSVC6 can't encode no-base scale-4 form) */
        __emit 0x8D
        __emit 0x14
        __emit 0x8D
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_m
        lea     ebx, [eax+0x4]
        mov     dword ptr [eax], edi
        lea     eax, [edi-1]
        test    eax, eax
        mov     esi, ebx
        jl      L_l
        lea     edi, [eax+1]
L_k:
        mov     ecx, esi
        call    FUN_004dd770
        mov     dword ptr [esi], 0x7738f8
        add     esi, 0x1c
        dec     edi
        jnz     L_k
L_l:
        mov     esi, ebx
        mov     ebx, dword ptr [esp+0x1c]
        jmp     L_n
L_m:
        xor     esi, esi
L_n:
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [eax+0x3c], esi
        mov     dword ptr [esp+0x10], 0x0
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jle     L_p
        mov     edi, eax
L_o:
        mov     ecx, dword ptr [esp+0x10]
        push    ebp
        lea     edx, [esp+0x14]
        mov     dword ptr [esi+0x18], ecx
        push    edx
        mov     ecx, esi
        call    FUN_004dd8b0
        add     esi, 0x1c
        dec     edi
        jnz     L_o
L_p:
        cmp     dword ptr [ebx+0x20], 0x1
        jnz     L_u
        push    0x74
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_r
        lea     ebx, [eax+0x4]
        mov     dword ptr [eax], 0x4
        mov     esi, ebx
        mov     edi, 0x4
L_q:
        mov     ecx, esi
        call    FUN_004dd770
        mov     dword ptr [esi], 0x7738f8
        add     esi, 0x1c
        dec     edi
        jnz     L_q
        mov     esi, ebx
        jmp     L_s
L_r:
        xor     esi, esi
L_s:
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [eax+0x40], esi
        mov     dword ptr [esp+0x1c], 0x0
        mov     edi, 0x4
L_w:
        mov     ecx, dword ptr [esp+0x1c]
        push    ebp
        lea     edx, [esp+0x20]
        mov     dword ptr [esi+0x18], ecx
        push    edx
        mov     ecx, esi
        call    FUN_004dd8b0
        add     esi, 0x1c
        dec     edi
        jnz     L_w
L_u:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
