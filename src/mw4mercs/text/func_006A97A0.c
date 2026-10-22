/*
 * FUN_006A97A0 (extent 0x6A97A0-0x6A9C21, 1153 bytes) - ANIM in-.text block.
 * __thiscall-style (ecx = this), ret 0xc. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int   *g_0076b2ac;
extern float *g_0076b2d8;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004da880(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00698dc0(void);
extern void __cdecl FUN_00698df0(void);
extern void __cdecl FUN_00698fe0(void);
extern void __cdecl FUN_00699010(void);
extern void __cdecl FUN_00699940(void);
extern void __cdecl FUN_0066b370(void);
extern void __cdecl FUN_00767d20(void);

__declspec(naked) void func_006A97A0(void)
{
    __asm {
        sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x94]
        push    edi
        mov     ebx, ecx
        push    0x796e48
        mov     ecx, esi
        call    FUN_00767d20
        push    0x76ff64
        mov     ecx, esi
        call    FUN_00767d20
        mov     edi, dword ptr [eax + 4]
        push    0x799ea4
        push    edi
        call    dword ptr [g_0076b2ac]
        add     esp, 8
        test    eax, eax
        jne     L_97ea
        mov     dword ptr [ebx + 0x30], 0xbf800000
        jmp     L_97f7
L_97ea:
        push    edi
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [ebx + 0x30]
        add     esp, 4
L_97f7:
        xor     ebp, ebp
        push    0x799f30
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        je      L_984e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_984e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_984e:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x94]
        push    ecx
        mov     ecx, edi
        call    FUN_0066b370
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebx + 0x48], eax
        mov     al, byte ptr [esp + 0x9c]
        test    al, al
        jne     L_99f7
        push    0x799f28
        mov     ecx, esi
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        je      L_98c8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_98c8
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_98c8:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_0066b370
        push    0x799f1c
        mov     ecx, esi
        mov     dword ptr [ebx + 0x44], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        push    0x799e90
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        je      L_9928
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_9928
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9928:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     ecx, edi
        call    FUN_0066b370
        push    0x799f10
        mov     ecx, esi
        mov     dword ptr [ebx + 0x4c], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        je      L_9988
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_9988
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9988:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_0066b370
        push    0x799f04
        mov     ecx, esi
        mov     dword ptr [ebx + 0x50], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        je      L_99e8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_99e8
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_99e8:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_0066b370
        mov     dword ptr [ebx + 0x54], eax
L_99f7:
        push    0x799ef8
        mov     ecx, esi
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        mov     edi, dword ptr [edi + 0x18]
        push    eax
        mov     ecx, edi
        call    FUN_004da880
        push    0x799eec
        mov     ecx, esi
        mov     dword ptr [ebx + 0x3c], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        mov     ecx, edi
        call    FUN_004da880
        push    0x799ea8
        mov     ecx, esi
        mov     dword ptr [ebx + 0x40], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        mov     ecx, edi
        call    FUN_004da880
        push    0x2c
        mov     dword ptr [ebx + 0x34], eax
        mov     dword ptr [ebx + 0x38], ebp
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_9a6d
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_00698b90
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jmp     L_9a73
L_9a6d:
        mov     dword ptr [esp + 0x14], ebp
        mov     edi, ebp
L_9a73:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edx + 0x10]
        mov     ecx, dword ptr [eax + 0x30]
        shr     ecx, 4
        test    ecx, ecx
        mov     dword ptr [esp + 0x20], ecx
        jle     L_9bed
        mov     eax, dword ptr [eax + 0x2c]
        add     eax, 0xd
        mov     dword ptr [esp + 0x1c], eax
L_9a96:
        cmp     byte ptr [eax], 0
        jne     L_9bd5
        push    ebp
        mov     ecx, edi
        call    FUN_00698df0
        push    ebp
        mov     ecx, edi
        mov     esi, eax
        call    FUN_00699010
        push    0
        mov     edi, eax
        push    edi
        push    edi
        push    esi
        lea     eax, [esp + 0x34]
        push    esi
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        fcomp   dword ptr [g_0076c5b0]
        add     esp, 0x18
        push    0
        push    edi
        push    edi
        fnstsw  ax
        push    esi
        push    esi
        test    ah, 0x41
        jne     L_9aee
        lea     ecx, [esp + 0x44]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        jmp     L_9b00
L_9aee:
        lea     edx, [esp + 0x50]
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        fchs
L_9b00:
        mov     edi, dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x18]
        push    ebp
        fstp    dword ptr [ebx + 0x38]
        mov     ecx, edi
        call    FUN_00698dc0
        push    ebp
        mov     ecx, edi
        mov     esi, eax
        call    FUN_00698fe0
        push    0
        mov     edi, eax
        push    edi
        push    edi
        push    esi
        lea     eax, [esp + 0x58]
        push    esi
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        fcomp   dword ptr [g_0076c5b0]
        add     esp, 0x18
        push    0
        push    edi
        push    edi
        fnstsw  ax
        push    esi
        push    esi
        test    ah, 0x41
        jne     L_9b5a
        lea     ecx, [esp + 0x68]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        jmp     L_9b6c
L_9b5a:
        lea     edx, [esp + 0x74]
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        fchs
L_9b6c:
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw  ax
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        test    ah, 1
        je      L_9bd1
        push    0
        push    edi
        push    edi
        push    esi
        lea     eax, [esp + 0x7c]
        push    esi
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        fcomp   dword ptr [g_0076c5b0]
        add     esp, 0x18
        push    0
        push    edi
        push    edi
        fnstsw  ax
        push    esi
        push    esi
        test    ah, 0x41
        jne     L_9bb9
        lea     ecx, [esp + 0x8c]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        jmp     L_9bce
L_9bb9:
        lea     edx, [esp + 0x98]
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        fchs
L_9bce:
        fstp    dword ptr [ebx + 0x38]
L_9bd1:
        mov     edi, dword ptr [esp + 0x14]
L_9bd5:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        inc     ebp
        add     eax, 0x10
        cmp     ebp, ecx
        mov     dword ptr [esp + 0x1c], eax
        jl      L_9a96
L_9bed:
        test    edi, edi
        je      L_9bf9
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
L_9bf9:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        je      L_9c18
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_9c18
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9c18:
        add     esp, 0x80
        ret     0xc
    }
}
