/*
 * FUN_0048aec0 (869 B) — MLR bucket/primitive array management.
 * Grows a bucket-primitive array, reallocates the bucket array, and
 * copies element blocks (0xc4-byte records) between arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da790;
extern int g_007da78c;
extern int g_007da788;
extern int g_007da784;
extern int g_007b957c;
extern int g_007da744[];
extern int g_007da794[];
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0048a480(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00421100(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00406cc0(void);

__declspec(naked) void FUN_0048aec0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        mov     ecx, dword ptr [g_007da790]
        cmp     ecx, dword ptr [g_007da78c]
        push    ebx
        push    esi
        push    edi
        jge     L_b21e
        mov     edx, dword ptr [g_007da784]
        mov     edx, dword ptr [edx]
        lea     eax, [ecx + ecx*2]
        shl     eax, 0x4
        add     eax, ecx
        mov     eax, dword ptr [edx + eax*4 + 0x8]
        and     eax, 0xf
        mov     edx, dword ptr [g_007da744 + eax*4]
        mov     edx, dword ptr [edx]
        lea     esi, [g_007da794 + eax*4]
        lea     edi, [g_007da744 + eax*4]
        mov     eax, dword ptr [esi]
        mov     dword ptr [edx + eax*8], ecx
        mov     eax, dword ptr [g_007da790]
        mov     edx, dword ptr [g_007da784]
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x4
        add     ecx, eax
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [eax + ecx*4 + 0x4]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [eax]
        and     ecx, 0x3fff
        mov     dword ptr [eax + edx*8 + 0x4], ecx
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [g_007da788]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi], edx
        jl      L_af5a
        push    0x76fdfc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_af5a
        int     3
L_af5a:
        mov     ecx, dword ptr [edi]
        mov     ebx, dword ptr [ecx + 0x4]
        cmp     dword ptr [esi], ebx
        jl      L_affa
        mov     edx, dword ptr [g_007b957c]
        push    edx
        call    FUN_006f4950
        mov     edi, dword ptr [edi]
        lea     esi, [ebx + ebx]
        mov     ebx, dword ptr [edi + 0x4]
        cmp     esi, ebx
        mov     dword ptr [ebp - 0x4], edi
        jz      L_aff5
        test    esi, esi
        jbe     L_afe1
        /* __emit: no-base SIB form lea eax,[esi*8+0] -> 8D 04 F5 00 00 00 00 */
        __emit  0x8D
        __emit  0x04
        __emit  0xF5
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ecx]
        add     esp, 0x4
        test    ecx, ecx
        mov     edi, eax
        jz      L_afd8
        cmp     esi, ebx
        mov     edx, esi
        jc      L_afa9
        mov     edx, ebx
L_afa9:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_afca
        lea     eax, [edi + edx*8]
        sub     ecx, edi
        inc     edx
L_afb6:
        mov     ebx, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], ebx
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_afb6
L_afca:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ecx]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_afd8:
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [edx], edi
        mov     edi, edx
        jmp     L_aff2
L_afe1:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi], 0x0
L_aff2:
        mov     dword ptr [edi + 0x4], esi
L_aff5:
        call    FUN_006f49a0
L_affa:
        mov     eax, dword ptr [g_007da790]
        mov     ecx, dword ptr [g_007da784]
        mov     esi, dword ptr [ecx + 0x4]
        inc     eax
        cmp     eax, esi
        mov     dword ptr [g_007da790], eax
        jl      L_b21e
        cmp     eax, dword ptr [g_007da78c]
        jge     L_b21e
        mov     edx, dword ptr [g_007b957c]
        push    edx
        call    FUN_006f4950
        mov     eax, dword ptr [g_007da78c]
        add     esi, esi
        cmp     esi, eax
        mov     dword ptr [ebp - 0xc], esi
        jle     L_b041
        mov     dword ptr [ebp - 0xc], eax
        mov     esi, eax
L_b041:
        mov     edi, dword ptr [g_007da784]
        cmp     esi, dword ptr [edi + 0x4]
        mov     dword ptr [ebp - 0x18], edi
        jz      L_b219
        test    esi, esi
        jbe     L_b1ea
        lea     eax, [esi + esi*2]
        shl     eax, 0x4
        add     eax, esi
        /* __emit: no-base SIB form lea ecx,[eax*4+4] -> 8D 0C 85 04 00 00 00 */
        __emit  0x8D
        __emit  0x0C
        __emit  0x85
        __emit  0x04
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_b0a7
        lea     ebx, [eax + 0x4]
        mov     dword ptr [eax], esi
        lea     eax, [esi - 1]
        test    eax, eax
        mov     edi, ebx
        jl      L_b09f
        inc     eax
        mov     dword ptr [ebp - 0x10], eax
L_b089:
        mov     ecx, edi
        call    FUN_0048a480
        mov     eax, dword ptr [ebp - 0x10]
        add     edi, 0xc4
        dec     eax
        mov     dword ptr [ebp - 0x10], eax
        jnz     L_b089
L_b09f:
        mov     edi, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x10], ebx
        jmp     L_b0ae
L_b0a7:
        mov     dword ptr [ebp - 0x10], 0x0
L_b0ae:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_b1d6
        mov     eax, dword ptr [edi + 0x4]
        cmp     esi, eax
        jnc     L_b0c1
        mov     eax, esi
L_b0c1:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_b1b0
        mov     edx, dword ptr [ebp - 0x10]
        lea     ebx, [eax + eax*2]
        shl     ebx, 0x4
        add     ebx, eax
        shl     ebx, 0x2
        add     ecx, ebx
        lea     esi, [ecx + 0xc]
        inc     eax
        mov     dword ptr [ebp - 0x8], ecx
        lea     ebx, [ebx + edx + 0xc]
        mov     dword ptr [ebp - 0x4], esi
        mov     dword ptr [ebp - 0x14], eax
        jmp     L_b0f5
L_b0ef:
        mov     esi, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x8]
L_b0f5:
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [esi - 0x8]
        mov     dword ptr [ebx - 0x8], ecx
        mov     edx, dword ptr [esi - 0x4]
        push    esi
        mov     ecx, ebx
        mov     dword ptr [ebx - 0xc], eax
        mov     dword ptr [ebx - 0x4], edx
        call    FUN_0040c410
        lea     eax, [esi + 0xc]
        push    eax
        lea     ecx, [ebx + 0xc]
        call    FUN_00421100
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebx + 0x18], ecx
        add     esi, 0x1c
        lea     edi, [ebx + 0x1c]
        mov     ecx, 0x10
        add     edx, 0x5c
        rep     movsd
        push    edx
        lea     ecx, [ebx + 0x5c]
        call    FUN_00428850
        mov     ecx, dword ptr [ebp - 0x8]
        lea     esi, [ebx - 0xc]
        mov     edx, ecx
        sub     edx, esi
        lea     eax, [ebx + 0x8c]
        mov     esi, 0x8
L_b151:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        add     eax, 0x4
        dec     esi
        jnz     L_b151
        mov     eax, dword ptr [ecx + 0xb8]
        mov     edx, dword ptr [ecx + 0xbc]
        mov     esi, dword ptr [ebp - 0x4]
        mov     dword ptr [ebx + 0xac], eax
        mov     eax, dword ptr [ecx + 0xc0]
        mov     dword ptr [ebx + 0xb4], eax
        mov     eax, dword ptr [ebp - 0x14]
        dec     eax
        mov     dword ptr [ebx + 0xb0], edx
        sub     ecx, 0xc4
        sub     esi, 0xc4
        sub     ebx, 0xc4
        test    eax, eax
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], esi
        ja      L_b0ef
        mov     esi, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ebp - 0x18]
L_b1b0:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_b1d6
        mov     ecx, dword ptr [eax - 0x4]
        lea     ebx, [eax - 0x4]
        push    0x48b950
        push    ecx
        push    0xc4
        push    eax
        call    FUN_00406cc0
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_b1d6:
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [edi], edx
        mov     dword ptr [edi + 0x4], esi
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_b1ea:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_b210
        mov     ecx, dword ptr [eax - 0x4]
        lea     ebx, [eax - 0x4]
        push    0x48b950
        push    ecx
        push    0xc4
        push    eax
        call    FUN_00406cc0
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_b210:
        mov     dword ptr [edi], 0x0
        mov     dword ptr [edi + 0x4], esi
L_b219:
        call    FUN_006f49a0
L_b21e:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
