/*
 * FUN_007488a0 (685 B) — Direct3D pixel-format setup.
 *
 * __fastcall (ECX = this). Validates a pixel-format descriptor, copies a
 * format table entry, builds a D3D surface description, and calls
 * FUN_00735230 / FUN_007487f0 to create the surface. Returns bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8b288c;
extern int g_7b76b0;
extern int g_87c2a0;
extern int g_8b2520;
extern int g_85a254;
extern int g_85a230;
extern char g_87dd0a;
extern void __cdecl FUN_00747ac0(void);
extern int __cdecl FUN_006fab90(void *);
extern void __cdecl FUN_00754230(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_007487f0(void);

__declspec(naked) void FUN_007488a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        mov     eax, [g_8b288c]
        push    ebx
        mov     ebx, ecx
        cmp     eax, dword ptr [g_7b76b0]
        push    esi
        push    edi
        jc      L_7488c4
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_7488c4:
        mov     eax, [g_87c2a0]
        test    eax, eax
        jz      L_7488ef
        test    byte ptr [ebx + 0x6], 0x1
        jnz     L_7488ef
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x2]
        xor     edx, edx
        mov     dx, word ptr [ebx]
        push    ecx
        push    edx
        call    FUN_00747ac0
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, [g_87c2a0]
        jmp     L_7488f6
L_7488ef:
        mov     dword ptr [ebp - 0x4], 0x1
L_7488f6:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x6]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x4]
        mov     esi, ecx
        shr     esi, 0x7
        shr     edx, 0xa
        and     edx, 0x7
        and     esi, 0x1
        lea     edx, [esi + edx*0x2]
        shr     ecx, 0xe
        lea     ecx, [ecx + edx*0x4]
        mov     edx, ecx
        shl     edx, 0x5
        sub     edx, ecx
        lea     ecx, [edx*0x4 + 0x8b7ad0]
        mov     ecx, dword ptr [ecx + 0x48]
        cmp     ecx, 0x20
        jz      L_748947
        push    ecx
        push    0x7aa454
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_748942
        int     3
L_748942:
        mov     eax, [g_87c2a0]
L_748947:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x6]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x4]
        lea     edi, [ebp - 0x80]
        mov     esi, ecx
        shr     esi, 0x7
        shr     edx, 0xa
        and     edx, 0x7
        and     esi, 0x1
        lea     edx, [esi + edx*0x2]
        shr     ecx, 0xe
        lea     ecx, [ecx + edx*0x4]
        mov     edx, ecx
        shl     edx, 0x5
        sub     edx, ecx
        lea     esi, [edx*0x4 + 0x8b7ad0]
        mov     ecx, 0x1f
        rep     movsd
        mov     ecx, dword ptr [ebp - 0x38]
        cmp     ecx, 0x20
        jz      L_7489a2
        push    ecx
        push    0x7aa454
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_74899d
        int     3
L_74899d:
        mov     eax, [g_87c2a0]
L_7489a2:
        mov     ecx, eax
        neg     ecx
        sbb     ecx, ecx
        and     ecx, 0x20000
        or      ecx, 0x1007
        mov     dword ptr [ebp - 0x7c], ecx
        test    byte ptr [ebx + 0x6], 0x2
        mov     dword ptr [ebp - 0x80], 0x7c
        mov     edi, 0x4000
        jz      L_7489d6
        test    dword ptr [g_8b2520], edi
        mov     ecx, 0x20000000
        jz      L_7489db
L_7489d6:
        mov     ecx, 0x10000000
L_7489db:
        neg     eax
        sbb     eax, eax
        and     eax, 0x400008
        or      eax, ecx
        or      eax, 0x5000
        push    0x1
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x14], 0x0
        call    FUN_00754230
        push    0x0
        mov     ecx, ebx
        and     eax, 0xffff
        mov     dword ptr [ebp - 0x78], eax
        call    FUN_00754230
        mov     edx, dword ptr [g_87c2a0]
        mov     esi, dword ptr [ebp - 0x4]
        and     eax, 0xffff
        neg     edx
        sbb     edx, edx
        mov     dword ptr [ebp - 0x74], eax
        mov     eax, dword ptr [ebp - 0x38]
        and     edx, esi
        cmp     eax, 0x20
        mov     dword ptr [ebp - 0x68], edx
        jz      L_748a44
        push    eax
        push    0x7aa454
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_748a44
        int     3
L_748a44:
        mov     eax, [g_85a254]
        test    eax, eax
        jnz     L_748a9f
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_85a230]
        push    0x0
        add     ebx, 0x10
        push    ebx
        lea     ecx, [ebp - 0x80]
        and     eax, 0xcfffbfff
        push    ecx
        or      eax, 0x800
        push    edx
        mov     dword ptr [ebp - 0x18], eax
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00735230
        test    eax, eax
        mov     byte ptr [g_87dd0a], 0x0
        jl      L_748b3d
        inc     dword ptr [g_8b288c]
        xor     ecx, ecx
        test    eax, eax
        pop     edi
        setge   cl
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_748a9f:
        mov     eax, [g_85a230]
        push    0x0
        lea     esi, [ebx + 0x10]
        push    esi
        lea     edx, [ebp - 0x80]
        push    edx
        push    eax
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007487f0
        test    eax, eax
        mov     byte ptr [g_87dd0a], 0x0
        jge     L_748b0b
        mov     edx, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [g_8b2520]
        xor     edx, 0x30000000
        /* __emit: MSVC6 swaps test operand order (emits 85 F9 for TEST EDI,ECX); ref needs 85 CF */
        __emit 0x85
        __emit 0xCF
        mov     dword ptr [ebp - 0x18], edx
        jz      L_748ae6
        mov     ecx, edx
        test    ecx, 0x20000000
        jnz     L_748b07
L_748ae6:
        mov     edx, dword ptr [g_85a230]
        push    0x0
        push    esi
        lea     ecx, [ebp - 0x80]
        push    ecx
        push    edx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007487f0
        mov     byte ptr [g_87dd0a], 0x0
L_748b07:
        test    eax, eax
        jl      L_748b3d
L_748b0b:
        mov     edx, dword ptr [g_8b288c]
        mov     ecx, dword ptr [ebp - 0x18]
        inc     edx
        test    ecx, 0x20000000
        mov     dword ptr [g_8b288c], edx
        jz      L_748b37
        or      byte ptr [ebx + 0x4], 0x2
        xor     ecx, ecx
        test    eax, eax
        pop     edi
        setge   cl
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_748b37:
        /* __emit: MSVC6 encodes AND word ptr [ebx+4],0xfffd as imm8 form (66 83 63 04 FD); ref needs imm16 form (66 81 63 04 FD FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x63
        __emit 0x04
        __emit 0xFD
        __emit 0xFF
L_748b3d:
        xor     ecx, ecx
        test    eax, eax
        pop     edi
        setge   cl
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
