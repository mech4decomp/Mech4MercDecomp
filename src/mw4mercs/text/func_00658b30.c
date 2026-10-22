/*
 * FUN_00658b30 (642 B) — ABL tree-node insertion helper (__thiscall).
 * Inserts a node keyed by a value into an ordered tree; handles the
 * head/root special cases and re-links parent/child pointers. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411670(void *a, void *b);
extern void __cdecl FUN_004114b0(void *p);
extern void __cdecl FUN_006595a0(void *p);
extern void __cdecl FUN_006595d0(void *p);
extern void __cdecl FUN_00659060(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_006595e0(void *a, void *b);
extern void __cdecl FUN_00659600(void *a);
extern void __cdecl FUN_006591c0(void *a, void *b);

extern int g_0000000c;   /* reloc'd global (last-node pointer) */

__declspec(naked) void FUN_00658b30(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x44]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     ebp, dword ptr [eax+8]
        push    edi
        jnz     L_cad

        mov     ecx, dword ptr [esi+4]
        test    ecx, ecx
        mov     ebx, dword ptr [esp+0x50]
        jbe     L_bde
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ebp+0x10]
        cmp     ecx, edx
        jge     L_bde
        cmp     ebp, eax
        jz      L_b8c
        test    ebp, ebp
        jnz     L_b8c
        mov     eax, edx
        cmp     ecx, eax
        jl      L_b8c

        push    ebx
        mov     ecx, esi
        call    FUN_006595a0
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax+0xc]
        test    ecx, ecx
        /* __emit: mov dword ptr [0x0000000C], edi — MSVC6 rejects literal [imm32] mem-dest as C2415 */
        __emit 0x89
        __emit 0x3D
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz     L_baf
        mov     dword ptr [eax+0xc], edi
        jmp     L_baf

L_b8c:
        push    ebx
        mov     ecx, esi
        call    FUN_006595a0
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebp, eax
        mov     dword ptr [ebp+8], edi
        jnz     L_ba7
        mov     dword ptr [eax+4], edi
        mov     dword ptr [eax+0xc], edi
        jmp     L_baf

L_ba7:
        cmp     ebp, dword ptr [eax+8]
        jnz     L_baf
        mov     dword ptr [eax+8], edi

L_baf:
        mov     dword ptr [edi+4], ebp
        add     eax, 4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi+8], ecx
        mov     dword ptr [edi+0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [esi+4]
        add     esp, 8
        inc     eax
        mov     dword ptr [esi+4], eax
        mov     eax, dword ptr [esp+0x48]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc

L_bde:
        mov     edi, dword ptr [eax+4]
        test    edi, edi
        mov     ebp, eax
        mov     al, 1
        jz      L_c03
L_beb:
        mov     ecx, dword ptr [ebx]
        cmp     ecx, dword ptr [edi+0x10]
        setl    al
        test    al, al
        mov     ebp, edi
        jz      L_bfc
        mov     edi, dword ptr [edi+8]
        jmp     L_bff
L_bfc:
        mov     edi, dword ptr [edi+0xc]
L_bff:
        test    edi, edi
        /* __emit: backward jnz crossing call-relocs; MSVC6 miscomputes rel8 (E6 vs ref E8) */
        __emit  0x75
        __emit  0xE8

L_c03:
        test    al, al
        mov     dword ptr [esp+0x14], ebp
        jz      L_c4c
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    FUN_006595d0
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax]
        jnz     L_c3f
        lea     edx, [esp+0x50]
        push    edx
        push    ebx
        push    ebp
        push    edi
        lea     eax, [esp+0x2c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp+0x64], 1
        call    FUN_00659060
        push    eax
        lea     ecx, [esp+0x34]
        jmp     L_c8a

L_c3f:
        lea     ecx, [esp+0x14]
        push    ecx
        call    FUN_004114b0
        add     esp, 4

L_c4c:
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [edx+0x10]
        cmp     eax, dword ptr [ebx]
        jge     L_c77
        lea     ecx, [esp+0x4c]
        push    ecx
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp+0x30]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp+0x60], 1
        call    FUN_00659060
        push    eax
        lea     ecx, [esp+0x3c]
        jmp     L_c8a

L_c77:
        lea     eax, [esp+0x13]
        lea     ecx, [esp+0x14]
        push    eax
        push    ecx
        mov     byte ptr [esp+0x1b], 0
        lea     ecx, [esp+0x44]

L_c8a:
        call    FUN_006595e0
        push    eax
        lea     ecx, [esp+0x28]
        call    FUN_00659600
        mov     eax, dword ptr [esp+0x48]
        mov     edx, dword ptr [esp+0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc

L_cad:
        cmp     ebp, eax
        jnz     L_d23
        mov     ebx, dword ptr [eax+0xc]
        mov     ecx, dword ptr [esp+0x50]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [ebx+0x10]
        cmp     edi, edx
        jge     L_d1b
        cmp     ebx, eax
        jz      L_cea
        mov     eax, edi
        cmp     edx, eax
        jl      L_cea
        push    ecx
        mov     ecx, esi
        call    FUN_006595a0
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, dword ptr [eax+0xc]
        mov     dword ptr [ebx+0xc], edi
        jnz     L_d13
        mov     dword ptr [eax+0xc], edi
        mov     dword ptr [edi+4], ebx
        /* __emit: backward jmp crossing call-reloc; MSVC6 miscomputes rel32 (C5 vs ref C8) */
        __emit  0xE9
        __emit  0xC8
        __emit  0xFE
        __emit  0xFF
        __emit  0xFF

L_cea:
        push    ecx
        mov     ecx, esi
        call    FUN_006595a0
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, eax
        mov     dword ptr [ebx+8], edi
        jnz     L_d0b
        mov     dword ptr [eax+4], edi
        mov     dword ptr [eax+0xc], edi
        mov     dword ptr [edi+4], ebx
        /* __emit: backward jmp crossing call-reloc; MSVC6 miscomputes rel32 (A4 vs ref A7) */
        __emit  0xE9
        __emit  0xA7
        __emit  0xFE
        __emit  0xFF
        __emit  0xFF
L_d0b:
        cmp     ebx, dword ptr [eax+8]
        jnz     L_d13
        mov     dword ptr [eax+8], edi
L_d13:
        mov     dword ptr [edi+4], ebx
        /* __emit: backward jmp crossing call-reloc; MSVC6 miscomputes rel32 (94 vs ref 97) */
        __emit  0xE9
        __emit  0x97
        __emit  0xFE
        __emit  0xFF
        __emit  0xFF

L_d1b:
        push    ecx
        lea     eax, [esp+0x40]
        push    eax
        jmp     L_d99

L_d23:
        lea     edx, [esp+0x4c]
        push    edx
        mov     dword ptr [esp+0x50], ebp
        call    FUN_004114b0
        mov     eax, dword ptr [esp+0x54]
        mov     edx, dword ptr [esp+0x50]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [edx+0x10]
        add     esp, 4
        cmp     edi, ecx
        jge     L_d93
        cmp     ecx, dword ptr [ebp+0x10]
        jge     L_d93
        mov     ecx, dword ptr [edx+0xc]
        test    ecx, ecx
        push    eax
        jnz     L_d73
        push    edx
        push    0
        lea     eax, [esp+0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00659060
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc

L_d73:
        push    ebp
        push    ebp
        lea     edx, [esp+0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_00659060
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc

L_d93:
        push    eax
        lea     edx, [esp+0x40]
        push    edx
L_d99:
        mov     ecx, esi
        call    FUN_006591c0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
