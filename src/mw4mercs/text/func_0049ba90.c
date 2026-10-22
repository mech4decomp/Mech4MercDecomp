/*
 * FUN_0049ba90 (983 B) — MLR particle/flare light-list rebuild (__thiscall,
 * RET 0x4). Reallocates four light arrays (dword/12B/16B/dword element
 * lists), copies old data, then computes per-light intensity normalization.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0049d3f0(void);
extern void __cdecl FUN_00487900(void);

__declspec(naked) void FUN_0049ba90(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x28]
        push    edi
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00421e60
        add     esp, 0x4
        push    0x4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebx + 0x174]
        cmp     eax, esi
        mov     dword ptr [esp + 0x18], eax
        jz      loc_49bb4c
        test    eax, eax
        jbe     loc_49bb25
        lea     edx, [eax*0x4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     ebp, dword ptr [ebx + 0x170]
        add     esp, 0x4
        test    ebp, ebp
        mov     edi, eax
        jz      short loc_49bb1d
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, esi
        jc      short loc_49baf8
        mov     ecx, esi
loc_49baf8:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      short loc_49bb14
        mov     edx, ebp
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
loc_49bb07:
        mov     esi, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], esi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      short loc_49bb07
loc_49bb14:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
loc_49bb1d:
        mov     dword ptr [ebx + 0x170], edi
        jmp     short loc_49bb3e
loc_49bb25:
        mov     ecx, dword ptr [ebx + 0x170]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x170], 0x0
loc_49bb3e:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x174], edx
loc_49bb4c:
        mov     ebp, dword ptr [ebx + 0x17c]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x18], eax
        jz      loc_49bc1c
        test    eax, eax
        jbe     loc_49bbf5
        mov     edi, eax
        lea     eax, [eax + eax*0x2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      short loc_49bb93
        push    0x454eb0
        push    edi
        push    0xc
        push    esi
        call    FUN_00406c90
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ecx
        jmp     short loc_49bb9f
loc_49bb93:
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
loc_49bb9f:
        mov     edx, dword ptr [ebx + 0x178]
        test    edx, edx
        jz      short loc_49bbed
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jc      short loc_49bbb3
        mov     eax, ebp
loc_49bbb3:
        mov     esi, eax
        dec     eax
        test    esi, esi
        jz      short loc_49bbda
        lea     esi, [eax + eax*0x2]
        mov     ebp, edx
        lea     esi, [ecx + esi*0x4]
        sub     ebp, ecx
        lea     edi, [eax + 0x1]
loc_49bbc7:
        lea     ecx, [esi + ebp*0x1]
        push    ecx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      short loc_49bbc7
loc_49bbda:
        mov     eax, dword ptr [ebx + 0x178]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
loc_49bbed:
        mov     dword ptr [ebx + 0x178], ecx
        jmp     short loc_49bc0e
loc_49bbf5:
        mov     edx, dword ptr [ebx + 0x178]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x178], 0x0
loc_49bc0e:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x17c], eax
        mov     eax, dword ptr [esp + 0x10]
loc_49bc1c:
        mov     ebp, dword ptr [ebx + 0x184]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x18], eax
        jz      loc_49bce8
        test    eax, eax
        jbe     loc_49bcc1
        mov     edi, eax
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      short loc_49bc60
        push    0x49d3e0
        push    edi
        push    0x10
        push    esi
        call    FUN_00406c90
        mov     eax, esi
        mov     dword ptr [esp + 0x14], eax
        jmp     short loc_49bc6c
loc_49bc60:
        mov     dword ptr [esp + 0x14], 0x0
        mov     eax, dword ptr [esp + 0x14]
loc_49bc6c:
        mov     ecx, dword ptr [ebx + 0x180]
        test    ecx, ecx
        jz      short loc_49bcb9
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, ebp
        jc      short loc_49bc80
        mov     edi, ebp
loc_49bc80:
        mov     edx, edi
        dec     edi
        test    edx, edx
        jz      short loc_49bca6
        mov     esi, edi
        shl     esi, 0x4
        mov     ebp, ecx
        add     esi, eax
        sub     ebp, eax
        inc     edi
loc_49bc93:
        lea     eax, [esi + ebp*0x1]
        push    eax
        mov     ecx, esi
        call    FUN_0049d3f0
        dec     edi
        sub     esi, 0x10
        test    edi, edi
        ja      short loc_49bc93
loc_49bca6:
        mov     eax, dword ptr [ebx + 0x180]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x4
loc_49bcb9:
        mov     dword ptr [ebx + 0x180], eax
        jmp     short loc_49bcda
loc_49bcc1:
        mov     ecx, dword ptr [ebx + 0x180]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x180], 0x0
loc_49bcda:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x184], edx
loc_49bce8:
        mov     ebp, dword ptr [ebx + 0x18c]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x18], eax
        jz      loc_49bd70
        test    eax, eax
        jbe     loc_49bd49
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x188]
        add     esp, 0x4
        test    edi, edi
        mov     esi, eax
        jz      short loc_49bd41
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, ebp
        jc      short loc_49bd1c
        mov     ecx, ebp
loc_49bd1c:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      short loc_49bd38
        mov     edx, edi
        lea     eax, [esi + ecx*0x4]
        sub     edx, esi
        inc     ecx
loc_49bd2b:
        mov     ebp, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      short loc_49bd2b
loc_49bd38:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
loc_49bd41:
        mov     dword ptr [ebx + 0x188], esi
        jmp     short loc_49bd62
loc_49bd49:
        mov     eax, dword ptr [ebx + 0x188]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x188], 0x0
loc_49bd62:
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x18c], ecx
loc_49bd70:
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x51ba43b7
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x1c], 0x0
        jle     loc_49be26
loc_49bd90:
        mov     esi, dword ptr [ebx + 0x180]
        mov     edi, dword ptr [ebx + 0x170]
        mov     ebx, dword ptr [ebx + 0x178]
        mov     ebp, esi
        add     esi, 0xc
loc_49bda7:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ecx]
        push    0xc
        push    ebx
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx]
        push    0xc
        push    ebp
        call    dword ptr [eax + 0x20]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ecx]
        push    0x4
        push    esi
        call    dword ptr [edx + 0x20]
        fld     dword ptr [esi]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      short loc_49bdde
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x14], eax
loc_49bdde:
        fld     dword ptr [esi]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     short loc_49bdf1
        mov     ecx, dword ptr [esi]
        mov     dword ptr [esp + 0x18], ecx
loc_49bdf1:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        call    FUN_00487900
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x8
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [esp + 0x10]
        inc     ecx
        add     ebx, 0xc
        add     ebp, 0x10
        add     esi, 0x10
        add     edi, 0x4
        cmp     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jl      short loc_49bda7
        mov     ebx, dword ptr [esp + 0x24]
loc_49be26:
        xor     ecx, ecx
        test    eax, eax
        jle     short loc_49be5d
        mov     eax, dword ptr [ebx + 0x188]
        fld     dword ptr [esp + 0x18]
        mov     ebx, dword ptr [ebx + 0x180]
        fsub    dword ptr [esp + 0x14]
        add     ebx, 0xc
loc_49be43:
        fld     dword ptr [ebx]
        inc     ecx
        fsub    dword ptr [esp + 0x14]
        add     ebx, 0x10
        add     eax, 0x4
        fdiv    st(0), st(1)
        fstp    dword ptr [eax - 0x4]
        cmp     ecx, dword ptr [esp + 0x10]
        jl      short loc_49be43
        fstp    st(0)
loc_49be5d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x4
    }
}
