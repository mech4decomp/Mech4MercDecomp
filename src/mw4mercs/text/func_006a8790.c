/*
 * FUN_006A8790 (671 B) — Animation load/init routine.
 *
 * Reads animation attributes from a config object, loads the animation
 * data, and computes per-frame speed values into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767d20(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0066b370(void);
extern void __cdecl FUN_004da880(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00698df0(void);
extern void __cdecl FUN_00699010(void);
extern void __cdecl FUN_00699940(void);
extern void __cdecl FUN_00698dc0(void);
extern void __cdecl FUN_00698fe0(void);
extern int *g_76b2ac;
extern int *g_76b2d8;
extern float g_76c5b0;

__declspec(naked) void FUN_006a8790(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x7c
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        push    0x796e48
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], esi
        call    FUN_00767d20
        push    0x76ff64
        mov     ecx, ebx
        call    FUN_00767d20
        mov     edi, dword ptr [eax + 0x4]
        push    0x799ea4
        push    edi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_87ea
        push    0x7719c8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_87e1
        int     3
L_87e1:
        mov     dword ptr [esi + 0x38], 0xbf800000
        jmp     L_87f7
L_87ea:
        push    edi
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x38]
        add     esp, 0x4
L_87f7:
        push    0x799e9c
        mov     ecx, ebx
        call    FUN_00767d20
        mov     dword ptr [ebp + 0xc], 0
        mov     eax, dword ptr [eax + 0x4]
        push    eax
        lea     ecx, [ebp + 0xc]
        call    FUN_00412780
        mov     ecx, dword ptr [ebp + 0xc]
        push    0x799e90
        push    ecx
        lea     ecx, [ebp - 0xc]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jz      L_884a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_884a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_884a:
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    edx
        call    FUN_0066b370
        mov     edi, eax
        push    0x799ea8
        mov     ecx, ebx
        mov     dword ptr [esi + 0x30], edi
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 0x4]
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax + 0x18]
        call    FUN_004da880
        xor     ebx, ebx
        push    0x2c
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x40], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_8899
        push    edi
        mov     ecx, eax
        call    FUN_00698b90
        mov     dword ptr [ebp + 0x8], eax
        jmp     L_889c
L_8899:
        mov     dword ptr [ebp + 0x8], ebx
L_889c:
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0x30]
        shr     eax, 0x4
        test    eax, eax
        mov     dword ptr [ebp - 0x10], eax
        jle     L_89ff
        mov     edi, dword ptr [edi + 0x2c]
        add     edi, 0xd
        mov     dword ptr [ebp - 0xc], edi
L_88b9:
        cmp     byte ptr [edi], 0
        jnz     L_89ea
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        call    FUN_00698df0
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        mov     esi, eax
        call    FUN_00699010
        push    0x0
        mov     edi, eax
        push    edi
        push    edi
        push    esi
        lea     ecx, [ebp - 0x1c]
        push    esi
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 0x18
        push    0x0
        push    edi
        push    edi
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        push    esi
        push    esi
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_8911
        lea     edx, [ebp - 0x28]
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        add     esp, 0x18
        jmp     L_8922
L_8911:
        lea     eax, [ebp - 0x34]
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        add     esp, 0x18
        fchs
L_8922:
        mov     ecx, dword ptr [ebp - 8]
        fst     dword ptr [ebp - 4]
        mov     edi, dword ptr [ebp + 0x8]
        fstp    dword ptr [ecx + 0x40]
        push    ebx
        mov     ecx, edi
        call    FUN_00698dc0
        push    ebx
        mov     ecx, edi
        mov     esi, eax
        call    FUN_00698fe0
        push    0x0
        mov     edi, eax
        push    edi
        push    edi
        push    esi
        lea     edx, [ebp - 0x40]
        push    esi
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 0x18
        push    0x0
        push    edi
        push    edi
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        push    esi
        push    esi
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_897b
        lea     eax, [ebp - 0x4c]
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        add     esp, 0x18
        jmp     L_898c
L_897b:
        lea     ecx, [ebp - 0x58]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        add     esp, 0x18
        fchs
L_898c:
        fld     dword ptr [ebp - 4]
        fcomp
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_89ea
        push    0x0
        push    edi
        push    edi
        push    esi
        lea     edx, [ebp - 0x64]
        push    esi
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 0x18
        push    0x0
        push    edi
        push    edi
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        push    esi
        push    esi
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_89d3
        lea     eax, [ebp - 0x70]
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        add     esp, 0x18
        jmp     L_89e4
L_89d3:
        lea     ecx, [ebp - 0x7c]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 0x8]
        add     esp, 0x18
        fchs
L_89e4:
        mov     edx, dword ptr [ebp - 8]
        fstp    dword ptr [edx + 0x40]
L_89ea:
        mov     edi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x10]
        inc     ebx
        add     edi, 0x10
        cmp     ebx, eax
        mov     dword ptr [ebp - 0xc], edi
        jl      L_88b9
L_89ff:
        mov     ecx, dword ptr [ebp + 0x8]
        test    ecx, ecx
        pop     edi
        pop     esi
        pop     ebx
        jz      L_8a0f
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_8a0f:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L_8a29
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8a29
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_8a29:
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
