/*
 * FUN_006caa10 (1167 B) - __stdcall RET 0x8 (2 params: name, name_len).
 * Texture/surface cache entry lookup-or-create. Walks a linked list of
 * 0x5C-byte cache entries, compares state params, and on miss allocates a
 * new entry and prepends it to the global cache list.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00729560(void);
extern void __cdecl FUN_00728fd0(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00728eb0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713ae0(void);

extern int g_ctx_ptr;            /* 0x008816cc */
extern int g_state_bc;           /* 0x008816bc */
extern int g_state_c0;           /* 0x008816c0 */
extern int g_state_d0;           /* 0x008816d0 */
extern unsigned char g_state_dd; /* 0x008816dd */
extern int g_state_e0;           /* 0x008816e0 */
extern unsigned char g_state_e4; /* 0x008816e4 */
extern unsigned char g_state_e5; /* 0x008816e5 */
extern unsigned char g_state_e6; /* 0x008816e6 */
extern unsigned char g_state_e7; /* 0x008816e7 */
extern float g_state_d8;         /* 0x008816d8 */
extern float g_state_b8;         /* 0x008816b8 */
extern float g_state_b4;         /* 0x008816b4 */
extern float g_state_b0;         /* 0x008816b0 */
extern float g_state_ac;         /* 0x008816ac */
extern int g_global_a4;          /* 0x008806a4 */
extern int g_global_a0;          /* 0x008806a0 */
extern unsigned char g_global_c4;/* 0x008816c4 */
extern int g_cache_head;         /* 0x0083a258 */

__declspec(naked) void __cdecl FUN_006caa10(void)
{
    
__asm {
sub     esp, 0x34
        push    ebx
        mov     ebx, [esp + 0x3c]
        push    ebp
        push    esi
        mov     esi, [esp + 0x48]
        cmp     esi, -0x1
        push    edi
        jnz     l_aa36
        or      ecx, -0x1
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        mov     [esp + 0x4c], ecx
        mov     esi, ecx
    l_aa36:
        test    esi, esi
        jz      l_ae48
        cmp     byte ptr [ebx], 0x2f
        mov     [esp + 0x18], ebx
        jnz     l_aa51
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_00729560
    l_aa51:
        mov     ecx, dword ptr [g_ctx_ptr]
        mov     eax, [ecx + 0x75c]
        test    eax, eax
        jz      l_aa7d
        mov     edx, [esp + 0x18]
        push    edx
        push    0x76c690
        call    FUN_00728fd0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x8
    l_aa7d:
        push    0x0
        push    0x0
        push    0x0
        push    0x2
        call    FUN_00704a80
        mov     edi, dword ptr [g_cache_head]
        test    edi, edi
        mov     ebp, dword ptr [g_ctx_ptr]
        mov     edx, dword ptr [g_state_bc]
        mov     [esp + 0x30], eax
        jz      l_abac
    l_aaa8:
        cmp     [edi + 0x10], edx
        jnz     l_aba2
        mov     eax, dword ptr [g_state_c0]
        cmp     [edi + 0xc], eax
        jnz     l_aba2
        cmp     [edi + 0x4], ebp
        jnz     l_aba2
        mov     ecx, dword ptr [g_state_d0]
        cmp     [edi + 0x8], ecx
        jnz     l_aba2
        mov     al, byte ptr [g_state_dd]
        cmp     [edi + 0x14], al
        jnz     l_aba2
        mov     ecx, dword ptr [g_state_e0]
        cmp     [edi + 0x18], ecx
        jnz     l_aba2
        mov     al, byte ptr [g_state_e4]
        cmp     [edi + 0x1c], al
        jnz     l_aba2
        mov     cl, byte ptr [g_state_e5]
        cmp     [edi + 0x1d], cl
        jnz     l_aba2
        mov     al, byte ptr [g_state_e6]
        cmp     [edi + 0x1e], al
        jnz     l_aba2
        mov     ecx, [edi + 0x20]
        cmp     ecx, dword ptr [g_state_d8]
        jnz     l_aba2
        mov     eax, [edi + 0x24]
        cmp     eax, dword ptr [g_state_b8]
        jnz     l_aba2
        mov     ecx, [edi + 0x28]
        cmp     ecx, dword ptr [g_state_b4]
        jnz     l_aba2
        mov     eax, [edi + 0x2c]
        cmp     eax, dword ptr [g_state_b0]
        jnz     l_aba2
        mov     ecx, [edi + 0x30]
        cmp     ecx, dword ptr [g_state_ac]
        jnz     l_aba2
        mov     eax, [esp + 0x30]
        cmp     [edi + 0x44], eax
        jnz     l_aba2
        cmp     [edi + 0x48], esi
        jnz     l_aba2
        mov     eax, [edi + 0x4c]
        mov     esi, ebx
    l_ab69:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     l_ab8d
        test    cl, cl
        jz      l_ab89
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     l_ab8d
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_ab69
    l_ab89:
        xor     eax, eax
        jmp     l_ab92
    l_ab8d:
        sbb     eax, eax
        sbb     eax, -0x1
    l_ab92:
        test    eax, eax
        jz      l_ae52
        mov     esi, [esp + 0x4c]
        mov     ebx, [esp + 0x48]
    l_aba2:
        mov     edi, [edi]
        test    edi, edi
        jnz     l_aaa8
    l_abac:
        mov     eax, dword ptr [g_state_d0]
        mov     ecx, dword ptr [g_state_c0]
        mov     edi, dword ptr [g_state_e0]
        mov     [esp + 0x34], eax
        mov     al, byte ptr [g_state_e7]
        mov     [esp + 0x3c], edx
        mov     dl, byte ptr [g_state_dd]
        mov     [esp + 0x14], al
        mov     al, byte ptr [g_state_e6]
        mov     [esp + 0x38], ecx
        mov     cl, byte ptr [g_state_e4]
        mov     [esp + 0x13], dl
        mov     dl, byte ptr [g_state_e5]
        mov     [esp + 0x17], al
        mov     eax, dword ptr [g_state_b4]
        mov     [esp + 0x15], cl
        mov     ecx, dword ptr [g_state_d8]
        mov     [esp + 0x16], dl
        mov     edx, dword ptr [g_state_b8]
        mov     [esp + 0x24], eax
        mov     eax, [esp + 0x48]
        mov     [esp + 0x1c], ecx
        mov     ecx, dword ptr [g_state_b0]
        mov     [esp + 0x20], edx
        mov     edx, dword ptr [g_state_ac]
        push    eax
        push    0x76c690
        mov     ebx, ebp
        mov     [esp + 0x48], edi
        mov     [esp + 0x30], ecx
        mov     [esp + 0x34], edx
        call    FUN_00728fd0
        mov     eax, dword ptr [g_global_a4]
        add     esp, 0x8
        cmp     eax, 0x4
        jc      l_ae48
        cmp     eax, 0x80
        jnc     l_ae48
        mov     al, byte ptr [g_global_c4]
        test    al, al
        jnz     l_ae48
        cmp     dword ptr [g_ctx_ptr], ebx
        jnz     l_ae48
        mov     cl, byte ptr [esp + 0x13]
        cmp     byte ptr [g_state_dd], cl
        jnz     l_ae48
        cmp     dword ptr [g_state_e0], edi
        jnz     l_ae48
        mov     dl, byte ptr [esp + 0x14]
        cmp     dl, byte ptr [g_state_e7]
        jnz     l_ae48
        mov     al, byte ptr [esp + 0x15]
        cmp     byte ptr [g_state_e4], al
        jnz     l_ae48
        mov     cl, byte ptr [esp + 0x16]
        cmp     byte ptr [g_state_e5], cl
        jnz     l_ae48
        mov     dl, byte ptr [esp + 0x17]
        cmp     byte ptr [g_state_e6], dl
        jnz     l_ae48
        fld     dword ptr [g_state_d8]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 0x40
        jz      l_ae48
        fld     dword ptr [g_state_b8]
        fcomp   dword ptr [esp + 0x20]
        fnstsw ax
        test    ah, 0x40
        jz      l_ae48
        fld     dword ptr [g_state_b4]
        fcomp   dword ptr [esp + 0x24]
        fnstsw ax
        test    ah, 0x40
        jz      l_ae48
        fld     dword ptr [g_state_b0]
        fcomp   dword ptr [esp + 0x28]
        fnstsw ax
        test    ah, 0x40
        jz      l_ae48
        fld     dword ptr [g_state_ac]
        fcomp   dword ptr [esp + 0x2c]
        fnstsw ax
        test    ah, 0x40
        jz      l_ae48
        push    0x0
        push    0x5c
        call    FUN_006f3c80
        mov     ebp, eax
        mov     eax, dword ptr [g_global_a4]
        push    0x0
        shl     eax, 0x5
        push    eax
        call    FUN_006f3c80
        push    0x0
        inc     esi
        push    esi
        mov     [ebp + 0x58], eax
        call    FUN_006f3c80
        mov     ecx, esi
        mov     esi, [esp + 0x48]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     [ebp + 0x4c], eax
        mov     edi, eax
        rep     movsd
        mov     eax, dword ptr [g_global_a4]
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, [ebp + 0x58]
        mov     ecx, eax
        shl     ecx, 0x5
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x8806a8
        rep     movsd
        mov     ecx, edx
        mov     edx, [esp + 0x38]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, [esp + 0x34]
        mov     [ebp + 0x8], ecx
        mov     ecx, [esp + 0x3c]
        mov     [ebp + 0xc], edx
        mov     dl, byte ptr [esp + 0x13]
        mov     [ebp + 0x10], ecx
        mov     cl, byte ptr [esp + 0x14]
        mov     [ebp + 0x14], dl
        mov     edx, [esp + 0x40]
        mov     [ebp + 0x1f], cl
        mov     cl, byte ptr [esp + 0x15]
        mov     [ebp + 0x18], edx
        mov     dl, byte ptr [esp + 0x16]
        mov     [ebp + 0x1c], cl
        mov     cl, byte ptr [esp + 0x17]
        mov     [ebp + 0x1d], dl
        mov     edx, [esp + 0x1c]
        mov     [ebp + 0x1e], cl
        mov     ecx, [esp + 0x20]
        mov     [ebp + 0x20], edx
        mov     edx, [esp + 0x24]
        mov     [ebp + 0x24], ecx
        mov     ecx, [esp + 0x28]
        mov     [ebp + 0x28], edx
        mov     edx, [esp + 0x2c]
        mov     [ebp + 0x2c], ecx
        mov     ecx, dword ptr [g_state_d0]
        mov     [ebp + 0x30], edx
        mov     edx, dword ptr [g_state_c0]
        mov     [ebp + 0x38], ecx
        mov     ecx, dword ptr [g_state_bc]
        mov     [ebp + 0x3c], edx
        mov     edx, dword ptr [g_global_a0]
        mov     [ebp + 0x40], ecx
        mov     ecx, [esp + 0x30]
        mov     [ebp + 0x34], edx
        mov     edx, [esp + 0x4c]
        mov     [ebp + 0x54], eax
        mov     eax, dword ptr [g_cache_head]
        mov     [ebp + 0x4], ebx
        mov     [ebp + 0x44], ecx
        mov     [ebp + 0x48], edx
        mov     [ebp], eax
        mov     dword ptr [ebp + 0x50], 0x1
        mov     dword ptr [g_cache_head], ebp
    l_ae48:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x8
    l_ae52:
        mov     dword ptr [edi + 0x50], 0x1
        call    FUN_00728eb0
        mov     eax, [edi + 0x34]
        test    eax, eax
        jz      l_ae6e
        push    0x2
        push    0xb
        call    FUN_00713cc0
    l_ae6e:
        mov     ecx, [edi + 0x54]
        mov     edx, [edi + 0x58]
        push    ecx
        push    edx
        call    FUN_00713ae0
        mov     eax, [edi + 0x38]
        mov     ecx, [edi + 0x3c]
        mov     edx, [edi + 0x40]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_state_d0], eax
        mov     dword ptr [g_state_c0], ecx
        mov     dword ptr [g_state_bc], edx
        pop     ebx
        add     esp, 0x34
        ret     0x8
    }

}
