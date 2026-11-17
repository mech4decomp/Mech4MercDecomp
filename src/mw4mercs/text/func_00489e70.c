/*
 * FUN_00489E70 (0x5A4 B) — __thiscall (ECX = this, RET 0Ch). Variant of
 * FUN_00489A00 that appends [this+0x18] scaled entries selected through a
 * 16-bit index array at [this+0x14]. Each iteration allocates an entry via
 * FUN_004889B0, copies three records (0x30-byte via indices at [this+0xC]
 * in the first path, 0x20-byte via indices in the second) into the target
 * slot, sums their +8 floats minus the third argument into the entry's [0],
 * and stores the slot index and [this] flag. Grows the global arrays
 * (0x7DA7F0/0x7DA7E8/0x7DA7E0 and 0x7DA7F4/0x7DA7EC/0x7DA7E4) by doubling
 * through FUN_006F4950 / FUN_004084D0 / FUN_00491D50 / FUN_0048BC50 /
 * FUN_0048BC10 / FUN_00491B20 / FUN_004084E0 / FUN_006F49A0. Returns the
 * iteration count.
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
extern void __cdecl FUN_0048bc10(void);
extern void __cdecl FUN_00491d50(void);
extern void __cdecl FUN_00491b20(void);

__declspec(naked) int FUN_00489E70(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        fild    dword ptr [esi + 0x18]
        push    edi
        fmul    qword ptr [g_0076fdd8]
        call    FUN_0075db4a
        mov     ebx, dword ptr [esi]
        test    ebx, 0x40000000
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x24], ebx
        je      L_48a183
        mov     ecx, dword ptr [g_007da7f0]
        cmp     ecx, dword ptr [g_007da7e8]
        jl      L_489eb7
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_489eb7:
        test    eax, eax
        mov     edx, dword ptr [g_007da7e0]
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], 0
        jle     L_48a406
        mov     edx, dword ptr [esi + 8]
        mov     ebp, dword ptr [esi + 0xc]
        mov     edi, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x20], edx
        jmp     L_489ee7
L_489ee3:
        mov     ebx, dword ptr [esp + 0x24]
L_489ee7:
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        call    FUN_004889b0
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 4], ebx
        mov     esi, dword ptr [g_007da7f0]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [g_007da7e0]
        mov     ebx, dword ptr [edx]
        xor     edx, edx
        mov     dx, word ptr [edi]
        lea     ecx, [esi + esi*2]
        shl     ecx, 4
        add     ecx, ebx
        add     edi, 2
        add     edi, 2
        lea     edx, [edx + edx*2]
        shl     edx, 4
        mov     ebx, dword ptr [edx + ebp]
        fld     dword ptr [edx + ebp + 8]
        add     edx, ebp
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
        mov     dword ptr [ecx + 0x2c], edx
        xor     edx, edx
        mov     dx, word ptr [edi - 2]
        mov     dword ptr [ecx + 0x28], ebx
        lea     edx, [edx + edx*2]
        shl     edx, 4
        mov     ebx, dword ptr [edx + ebp]
        add     edx, ebp
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
        mov     dword ptr [ecx + 0x5c], edx
        xor     edx, edx
        mov     dx, word ptr [edi]
        mov     dword ptr [ecx + 0x58], ebx
        lea     edx, [edx + edx*2]
        shl     edx, 4
        add     edx, ebp
        add     edi, 2
        mov     ebx, dword ptr [edx]
        fld     dword ptr [ecx + 0x68]
        fsub    dword ptr [esp + 0x40]
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
        mov     dword ptr [ecx + 0x74], ebx
        mov     ebx, dword ptr [edx + 0x18]
        mov     dword ptr [ecx + 0x78], ebx
        mov     ebx, dword ptr [edx + 0x1c]
        fadd    dword ptr [ecx + 0x38]
        mov     dword ptr [ecx + 0x7c], ebx
        mov     ebx, dword ptr [edx + 0x20]
        fadd    st, st(1)
        mov     dword ptr [ecx + 0x80], ebx
        mov     ebx, dword ptr [edx + 0x24]
        mov     dword ptr [eax + 8], esi
        fstp    dword ptr [eax]
        mov     eax, dword ptr [g_007da7e8]
        mov     dword ptr [ecx + 0x84], ebx
        mov     ebx, dword ptr [edx + 0x28]
        fstp    st(0)
        mov     edx, dword ptr [edx + 0x2c]
        add     esi, 3
        cmp     esi, eax
        mov     dword ptr [ecx + 0x88], ebx
        mov     dword ptr [ecx + 0x8c], edx
        mov     dword ptr [g_007da7f0], esi
        jge     L_48a406
        mov     ebx, dword ptr [esp + 0x14]
        cmp     esi, ebx
        jl      L_48a164
        cmp     ebx, eax
        jge     L_48a164
        mov     eax, dword ptr [g_007b957c]
        push    eax
        call    FUN_006f4950
        lea     esi, [ebx + ebx]
        mov     ebx, dword ptr [g_007da7e0]
        cmp     esi, dword ptr [ebx + 4]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1c], ebx
        je      L_48a15f
        test    esi, esi
        jbe     L_48a14b
        lea     ecx, [esi + esi*2]
        shl     ecx, 4
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        je      L_48a0e3
        lea     ecx, [esi - 1]
        test    ecx, ecx
        mov     ebx, eax
        jl      L_48a0d7
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
L_48a0be:
        mov     ecx, ebx
        call    FUN_00491d50
        mov     eax, dword ptr [esp + 0x18]
        add     ebx, 0x30
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jne     L_48a0be
        mov     eax, dword ptr [esp + 0x2c]
L_48a0d7:
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_48a0ef
L_48a0e3:
        mov     dword ptr [esp + 0x18], 0
        mov     ecx, dword ptr [esp + 0x18]
L_48a0ef:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_48a147
        mov     ebx, dword ptr [ebx + 4]
        cmp     esi, ebx
        jae     L_48a0fe
        mov     ebx, esi
L_48a0fe:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        je      L_48a130
        lea     esi, [ebx + ebx*2]
        shl     esi, 4
        sub     eax, ecx
        add     esi, ecx
        mov     dword ptr [esp + 0x2c], eax
        inc     ebx
        jmp     L_48a11a
L_48a116:
        mov     eax, dword ptr [esp + 0x2c]
L_48a11a:
        add     eax, esi
        push    eax
        mov     ecx, esi
        call    FUN_0048bc50
        dec     ebx
        sub     esi, 0x30
        test    ebx, ebx
        ja      L_48a116
        mov     esi, dword ptr [esp + 0x14]
L_48a130:
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x20]
        add     esp, 4
L_48a147:
        mov     dword ptr [ebx], ecx
        jmp     L_48a15c
L_48a14b:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx], 0
L_48a15c:
        mov     dword ptr [ebx + 4], esi
L_48a15f:
        call    FUN_006f49a0
L_48a164:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_489ee3
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_48a183:
        mov     edx, dword ptr [g_007da7f4]
        cmp     edx, dword ptr [g_007da7ec]
        jl      L_48a19d
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_48a19d:
        test    eax, eax
        mov     ecx, dword ptr [g_007da7e4]
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x10], 0
        jle     L_48a406
        mov     eax, dword ptr [esi + 8]
        mov     ebp, dword ptr [esi + 0xc]
        mov     edi, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x30], ebp
        jmp     L_48a1d1
L_48a1cd:
        mov     ebx, dword ptr [esp + 0x24]
L_48a1d1:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x10]
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x38]
        push    edx
        call    FUN_004889b0
        mov     edx, dword ptr [g_007da7e4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [g_007da7f4]
        mov     dword ptr [eax + 4], ebx
        mov     ebx, dword ptr [edx]
        xor     edx, edx
        mov     dx, word ptr [edi]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, esi
        shl     ecx, 5
        add     ecx, ebx
        add     edi, 2
        add     edi, 2
        shl     edx, 5
        mov     ebx, dword ptr [edx + ebp]
        fld     dword ptr [edx + ebp + 8]
        add     edx, ebp
        fst     dword ptr [ecx + 8]
        mov     dword ptr [ecx], ebx
        fld     dword ptr [ecx + 0x48]
        mov     ebx, dword ptr [edx + 4]
        fsub    dword ptr [esp + 0x40]
        mov     dword ptr [ecx + 4], ebx
        mov     ebx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0xc], ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x10], ebx
        mov     ebx, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x14], ebx
        mov     ebx, dword ptr [edx + 0x18]
        mov     edx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x1c], edx
        xor     edx, edx
        mov     dx, word ptr [edi - 2]
        mov     dword ptr [ecx + 0x18], ebx
        shl     edx, 5
        mov     ebx, dword ptr [edx + ebp]
        add     edx, ebp
        mov     dword ptr [ecx + 0x20], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 0x24], ebx
        mov     ebx, dword ptr [edx + 8]
        mov     dword ptr [ecx + 0x28], ebx
        mov     ebx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x2c], ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x30], ebx
        mov     ebx, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x34], ebx
        mov     ebx, dword ptr [edx + 0x18]
        mov     edx, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x3c], edx
        xor     edx, edx
        mov     dx, word ptr [edi]
        mov     dword ptr [ecx + 0x38], ebx
        shl     edx, 5
        mov     ebx, dword ptr [edx + ebp]
        add     edx, ebp
        mov     dword ptr [ecx + 0x40], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 0x44], ebx
        mov     ebx, dword ptr [edx + 8]
        mov     dword ptr [ecx + 0x48], ebx
        mov     ebx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x4c], ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     dword ptr [ecx + 0x50], ebx
        mov     ebx, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x54], ebx
        mov     ebx, dword ptr [edx + 0x18]
        mov     edx, dword ptr [edx + 0x1c]
        add     edi, 2
        mov     dword ptr [ecx + 0x58], ebx
        mov     dword ptr [ecx + 0x5c], edx
        fadd    dword ptr [ecx + 0x28]
        mov     dword ptr [eax + 8], esi
        add     esi, 3
        mov     dword ptr [g_007da7f4], esi
        fadd    st, st(1)
        fstp    dword ptr [eax]
        mov     eax, dword ptr [g_007da7ec]
        cmp     esi, eax
        fstp    st(0)
        jge     L_48a406
        mov     ebx, dword ptr [esp + 0x1c]
        cmp     esi, ebx
        jl      L_48a3f1
        cmp     ebx, eax
        jge     L_48a3f1
        mov     eax, dword ptr [g_007b957c]
        push    eax
        call    FUN_006f4950
        mov     esi, dword ptr [g_007da7e4]
        mov     eax, dword ptr [esi + 4]
        add     ebx, ebx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x14], esi
        je      L_48a3ec
        test    ebx, ebx
        jbe     L_48a3d8
        mov     ecx, ebx
        shl     ecx, 5
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        je      L_48a370
        lea     ecx, [ebx - 1]
        test    ecx, ecx
        mov     esi, eax
        jl      L_48a364
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
L_48a34b:
        mov     ecx, esi
        call    FUN_00491b20
        mov     eax, dword ptr [esp + 0x18]
        add     esi, 0x20
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jne     L_48a34b
        mov     eax, dword ptr [esp + 0x2c]
L_48a364:
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_48a37c
L_48a370:
        mov     dword ptr [esp + 0x18], 0
        mov     ecx, dword ptr [esp + 0x18]
L_48a37c:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        je      L_48a3d4
        mov     eax, dword ptr [esi + 4]
        cmp     ebx, eax
        jae     L_48a38f
        mov     eax, ebx
L_48a38f:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_48a3c5
        mov     ebp, dword ptr [esp + 0x2c]
        mov     esi, eax
        shl     esi, 5
        add     esi, ecx
        sub     ebp, ecx
        lea     ebx, [eax + 1]
L_48a3a6:
        lea     eax, [esi + ebp]
        push    eax
        mov     ecx, esi
        call    FUN_0048bc10
        dec     ebx
        sub     esi, 0x20
        test    ebx, ebx
        ja      L_48a3a6
        mov     ebp, dword ptr [esp + 0x30]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x14]
L_48a3c5:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 4
L_48a3d4:
        mov     dword ptr [esi], ecx
        jmp     L_48a3e9
L_48a3d8:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_48a3e9:
        mov     dword ptr [esi + 4], ebx
L_48a3ec:
        call    FUN_006f49a0
L_48a3f1:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_48a1cd
L_48a406:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0xc
    }
}
