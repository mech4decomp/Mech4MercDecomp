/*
 * FUN_00489A00 (0x470 B) — __thiscall (ECX = this, RET 0Ch). Appends
 * [this+0x10] scaled entries to a global array. Each iteration allocates
 * an entry via FUN_004889B0, copies three 0x30-byte records from
 * [this+0xC] (advancing 0x30 each) into the target slot, sums their +8
 * floats minus the third argument into the entry's [0], and stores the
 * slot index and [this] flag. The array (count 0x7DA7F0, capacity
 * 0x7DA7E8, base 0x7DA7E0) is grown by doubling via FUN_006F4950 /
 * FUN_004084D0 / FUN_00491D50 / FUN_0048BC50 / FUN_004084E0 /
 * FUN_006F49A0; the alternate path uses 0x7DA7F4/0x7DA7EC/0x7DA7E4
 * with two 0x20-byte records. Returns the iteration count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0076fdd8;   /* qword scale constant (fmul) */

extern int g_007b957c;
extern int g_007da7e0;
extern int g_007da7e4;
extern int g_007da7e8;
extern int g_007da7ec;
extern int g_007da7f0;
extern int g_007da7f4;

extern void __cdecl FUN_0075db4a(void);   /* __ftol */
extern void __cdecl FUN_004889b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0048bc50(void);
extern void __cdecl FUN_00491d50(void);
extern void __cdecl FUN_0048b960(void);

__declspec(naked) int FUN_00489A00(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        fild    dword ptr [esi + 0x10]
        push    edi
        fmul    qword ptr [g_0076fdd8]
        call    FUN_0075db4a
        mov     ebp, dword ptr [esi]
        test    ebp, 0x40000000
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x24], ebp
        je      L_489cdd
        mov     ecx, dword ptr [g_007da7f0]
        cmp     ecx, dword ptr [g_007da7e8]
        jl      L_489a47
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x1c
        ret     0xc
L_489a47:
        test    eax, eax
        mov     edx, dword ptr [g_007da7e0]
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], 0
        jle     L_489ccf
        mov     edx, dword ptr [esi + 8]
        mov     edi, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x1c], edx
L_489a6e:
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x34]
        call    FUN_004889b0
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [g_007da7f0]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [g_007da7e0]
        mov     ebx, dword ptr [edx]
        mov     edx, edi
        fld     dword ptr [edx + 8]
        lea     ecx, [esi + esi*2]
        shl     ecx, 4
        add     ecx, ebx
        mov     ebx, dword ptr [edx]
        fst     dword ptr [ecx + 8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 4], ebx
        mov     ebx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0xc], ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x10], ebx
        mov     ebx, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x14], ebx
        mov     ebx, dword ptr [edx + 0x18]
        mov     dword ptr [ecx + 0x18], ebx
        mov     ebx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x1c], ebx
        mov     ebx, dword ptr [edx + 0x20]
        mov     dword ptr [ecx + 0x20], ebx
        mov     ebx, dword ptr [edx + 0x24]
        mov     dword ptr [ecx + 0x24], ebx
        mov     ebx, dword ptr [edx + 0x28]
        mov     edx, dword ptr [edx + 0x2c]
        mov     dword ptr [ecx + 0x28], ebx
        add     edi, 0x30
        mov     dword ptr [ecx + 0x2c], edx
        mov     edx, edi
        mov     ebx, dword ptr [edx]
        mov     dword ptr [ecx + 0x30], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 0x34], ebx
        mov     ebx, dword ptr [edx + 8]
        mov     dword ptr [ecx + 0x38], ebx
        mov     ebx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x3c], ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x40], ebx
        mov     ebx, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x44], ebx
        mov     ebx, dword ptr [edx + 0x18]
        mov     dword ptr [ecx + 0x48], ebx
        mov     ebx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x4c], ebx
        mov     ebx, dword ptr [edx + 0x20]
        mov     dword ptr [ecx + 0x50], ebx
        mov     ebx, dword ptr [edx + 0x24]
        mov     dword ptr [ecx + 0x54], ebx
        mov     ebx, dword ptr [edx + 0x28]
        mov     edx, dword ptr [edx + 0x2c]
        mov     dword ptr [ecx + 0x58], ebx
        add     edi, 0x30
        mov     dword ptr [ecx + 0x5c], edx
        mov     edx, edi
        mov     ebx, dword ptr [edx]
        mov     dword ptr [ecx + 0x60], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 0x64], ebx
        mov     ebx, dword ptr [edx + 8]
        mov     dword ptr [ecx + 0x68], ebx
        mov     ebx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x6c], ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x70], ebx
        mov     ebx, dword ptr [edx + 0x14]
        mov     dword ptr [eax + 4], ebp
        add     edi, 0x30
        mov     dword ptr [ecx + 0x74], ebx
        fld     dword ptr [ecx + 0x68]
        mov     ebx, dword ptr [edx + 0x18]
        fsub    dword ptr [esp + 0x38]
        mov     dword ptr [ecx + 0x78], ebx
        mov     ebx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x7c], ebx
        mov     ebx, dword ptr [edx + 0x20]
        fadd    dword ptr [ecx + 0x38]
        mov     dword ptr [ecx + 0x80], ebx
        mov     ebx, dword ptr [edx + 0x24]
        fadd    st, st(1)
        mov     dword ptr [eax + 8], esi
        mov     dword ptr [ecx + 0x84], ebx
        mov     ebx, dword ptr [edx + 0x28]
        mov     edx, dword ptr [edx + 0x2c]
        fstp    dword ptr [eax]
        mov     eax, dword ptr [g_007da7e8]
        add     esi, 3
        fstp    st(0)
        cmp     esi, eax
        mov     dword ptr [ecx + 0x88], ebx
        mov     dword ptr [ecx + 0x8c], edx
        mov     dword ptr [g_007da7f0], esi
        jge     L_489ccf
        mov     ebx, dword ptr [esp + 0x14]
        cmp     esi, ebx
        jl      L_489cba
        cmp     ebx, eax
        jge     L_489cba
        mov     eax, dword ptr [g_007b957c]
        push    eax
        call    FUN_006f4950
        mov     esi, dword ptr [g_007da7e0]
        mov     eax, dword ptr [esi + 4]
        add     ebx, ebx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x20], esi
        je      L_489cb5
        test    ebx, ebx
        jbe     L_489ca1
        lea     ecx, [ebx + ebx*2]
        shl     ecx, 4
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L_489c40
        lea     eax, [ebx - 1]
        test    eax, eax
        mov     esi, ebp
        jl      L_489c34
        inc     eax
        mov     dword ptr [esp + 0x18], eax
L_489c1f:
        mov     ecx, esi
        call    FUN_00491d50
        mov     eax, dword ptr [esp + 0x18]
        add     esi, 0x30
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jne     L_489c1f
L_489c34:
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_489c4c
L_489c40:
        mov     dword ptr [esp + 0x18], 0
        mov     ecx, dword ptr [esp + 0x18]
L_489c4c:
        mov     ebp, dword ptr [esi]
        test    ebp, ebp
        je      L_489c99
        mov     eax, dword ptr [esi + 4]
        cmp     ebx, eax
        jae     L_489c5b
        mov     eax, ebx
L_489c5b:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_489c8a
        lea     esi, [eax + eax*2]
        shl     esi, 4
        add     esi, ecx
        sub     ebp, ecx
        lea     ebx, [eax + 1]
L_489c6f:
        lea     eax, [esi + ebp]
        push    eax
        mov     ecx, esi
        call    FUN_0048bc50
        dec     ebx
        sub     esi, 0x30
        test    ebx, ebx
        ja      L_489c6f
        mov     ebx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x20]
L_489c8a:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 4
L_489c99:
        mov     ebp, dword ptr [esp + 0x24]
        mov     dword ptr [esi], ecx
        jmp     L_489cb2
L_489ca1:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_489cb2:
        mov     dword ptr [esi + 4], ebx
L_489cb5:
        call    FUN_006f49a0
L_489cba:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_489a6e
L_489ccf:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0xc
L_489cdd:
        mov     edx, dword ptr [g_007da7f4]
        cmp     edx, dword ptr [g_007da7ec]
        jl      L_489cf7
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x1c
        ret     0xc
L_489cf7:
        test    eax, eax
        mov     ecx, dword ptr [g_007da7e4]
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x10], 0
        jle     L_489ccf
        mov     eax, dword ptr [esi + 8]
        mov     esi, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_489d20
L_489d1c:
        mov     ebp, dword ptr [esp + 0x24]
L_489d20:
        mov     ecx, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [esp + 0x10]
        lea     edx, [ebx + ecx]
        mov     ecx, dword ptr [esp + 0x30]
        push    edx
        call    FUN_004889b0
        mov     edi, dword ptr [g_007da7f4]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [g_007da7e4]
        mov     dword ptr [eax + 4], ebp
        mov     ebp, dword ptr [edx]
        mov     edx, esi
        fld     dword ptr [edx + 8]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, edi
        shl     ecx, 5
        add     ecx, ebp
        mov     ebp, dword ptr [edx]
        fst     dword ptr [ecx + 8]
        mov     dword ptr [ecx], ebp
        fld     dword ptr [ecx + 0x48]
        mov     ebp, dword ptr [edx + 4]
        fsub    dword ptr [esp + 0x38]
        mov     dword ptr [ecx + 4], ebp
        mov     ebp, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0xc], ebp
        mov     ebp, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x10], ebp
        mov     ebp, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x14], ebp
        mov     ebp, dword ptr [edx + 0x18]
        mov     edx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x18], ebp
        mov     dword ptr [ecx + 0x1c], edx
        add     esi, 0x20
        mov     edx, esi
        mov     ebp, dword ptr [edx]
        mov     dword ptr [ecx + 0x20], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [ecx + 0x24], ebp
        mov     ebp, dword ptr [edx + 8]
        mov     dword ptr [ecx + 0x28], ebp
        mov     ebp, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x2c], ebp
        mov     ebp, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x30], ebp
        mov     ebp, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x34], ebp
        mov     ebp, dword ptr [edx + 0x18]
        mov     edx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x38], ebp
        add     esi, 0x20
        mov     dword ptr [ecx + 0x3c], edx
        mov     edx, esi
        mov     ebp, dword ptr [edx]
        mov     dword ptr [ecx + 0x40], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [ecx + 0x44], ebp
        mov     ebp, dword ptr [edx + 8]
        mov     dword ptr [ecx + 0x48], ebp
        mov     ebp, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x4c], ebp
        mov     ebp, dword ptr [edx + 0x10]
        fadd    dword ptr [ecx + 0x28]
        mov     dword ptr [ecx + 0x50], ebp
        mov     ebp, dword ptr [edx + 0x14]
        fadd    st, st(1)
        mov     dword ptr [ecx + 0x54], ebp
        mov     ebp, dword ptr [edx + 0x18]
        mov     edx, dword ptr [edx + 0x1c]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 8], edi
        mov     eax, dword ptr [g_007da7ec]
        add     edi, 3
        fstp    st(0)
        add     esi, 0x20
        mov     dword ptr [ecx + 0x58], ebp
        mov     dword ptr [ecx + 0x5c], edx
        mov     dword ptr [g_007da7f4], edi
        cmp     edi, eax
        jge     L_489e61
        mov     ebp, dword ptr [esp + 0x20]
        cmp     edi, ebp
        jl      L_489e44
        cmp     ebp, eax
        jge     L_489e44
        mov     eax, dword ptr [g_007b957c]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [g_007da7e4]
        lea     eax, [ebp + ebp]
        push    eax
        mov     dword ptr [esp + 0x24], eax
        call    FUN_0048b960
        call    FUN_006f49a0
L_489e44:
        mov     eax, dword ptr [esp + 0x28]
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x10], ebx
        jl      L_489d1c
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x1c
        ret     0xc
L_489e61:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x1c
        ret     0xc
    }
}
