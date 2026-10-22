/*
 * FUN_00663f70 (943 B) — large gameplay/vector helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2104;          /* 0x007f2104 */
extern float g_76c5b0;        /* 0x0076c5b0 */
extern float g_77016c;        /* 0x0077016c */
extern float g_77de8c;        /* 0x0077de8c */
extern float g_783388;        /* 0x00783388 */
extern float g_7b220c;        /* 0x007b220c */
extern float g_80da60;        /* 0x0080da60 */
extern float g_80da58;        /* 0x0080da58 */
extern float g_80da5c;        /* 0x0080da5c */
extern float g_80da54;        /* 0x0080da54 */
extern char g_80da78;         /* 0x0080da78 */
extern int g_7dab44;          /* 0x007dab44 */
extern int g_7dab40;          /* 0x007dab40 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_006a7710(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_004f8480(void);
extern void __cdecl FUN_005b8a20(void);

__declspec(naked) void FUN_00663f70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb4
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [g_7f2104]
        mov     ecx, ebx
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 4]
        push    esi
        call    FUN_00415230
        test    al, al
        jz      L_64319
        mov     edx, dword ptr [ebx]
        push    1
        lea     eax, [ebp - 0x18]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x70]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0x14], 0
        fld     dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x30], 0
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref is no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_64029
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp - 0x40]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x40]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x1c], eax
        fld     dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_77016c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_64319
L_64029:
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        push    0x3f4ccccd
        push    0x41100000
        push    edx
        push    1
        lea     ecx, [ebp - 0x84]
        call    FUN_006a7510
        lea     eax, [ebp + 0xb]
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_005cb210
        push    0
        lea     ecx, [ebp - 0xc]
        push    ecx
        push    ebx
        lea     ecx, [ebp - 0x84]
        call    FUN_006a7710
        mov     edx, dword ptr [ebp - 8]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x44], 0xbf800000
        mov     dword ptr [ebp - 0x1c], edx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_640ed
        mov     edx, esi
        cmp     dword ptr [edx], 0
        jz      L_640ed
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_640b1
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_640b3
L_640b1:
        xor     eax, eax
L_640b3:
        mov     ecx, dword ptr [eax + 0x17c]
        test    ecx, ecx
        jz      L_640ed
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_640e3
        mov     edx, esi
        mov     eax, dword ptr [edx]
        mov     eax, dword ptr [eax + 0x17c]
        jmp     L_640f4
L_640e3:
        xor     eax, eax
        mov     eax, dword ptr [eax + 0x17c]
        jmp     L_640f4
L_640ed:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x3c]
L_640f4:
        mov     esi, dword ptr [eax + 0xd8]
        mov     eax, dword ptr [ebp - 8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp - 0xb4]
        rep movsd
        mov     esi, dword ptr [ebp - 0xc]
        cmp     esi, eax
        pop     edi
        jz      L_642e0
L_6411c:
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x40]
        call    FUN_00419480
        fld     dword ptr [esi]
        fsub    dword ptr [ebp - 0x40]
        lea     ecx, [ebp - 0x54]
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [esi + 4]
        fsub    dword ptr [ebp - 0x3c]
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [esi + 8]
        fsub    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp - 0x4c]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x60], eax
        fld     dword ptr [ebp - 0x60]
        fst     dword ptr [ebp + 8]
        fcomp   dword ptr [g_77de8c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_642cf
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_64199
        mov     dword ptr [ebp + 8], 0
        jmp     L_641b0
L_64199:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_783388]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_641b0
        mov     dword ptr [ebp + 8], 0x43fa0000
L_641b0:
        lea     ecx, [ebp - 0xb4]
        push    ecx
        push    esi
        lea     ecx, [ebp - 0x28]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x28]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x24]
        fadd    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp - 0x58]
        mov     eax, dword ptr [ebp - 0x58]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x64], eax
        fld     dword ptr [ebp - 0x64]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_64206
        fld     dword ptr [g_76c5b0]
        jmp     L_6423d
L_64206:
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x48], edx
        mov     eax, dword ptr [ebp - 0x48]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x5c], eax
        fld     dword ptr [ebp - 0x5c]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_64235
        fld     dword ptr [g_76c5b0]
        jmp     L_6423d
L_64235:
        fld     dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x20]
        fpatan
L_6423d:
        fabs
        fmul    dword ptr [g_783388]
        fld     dword ptr [g_783388]
        fsub    dword ptr [ebp + 8]
        faddp   st(1), st(0)
        fst     dword ptr [ebp + 8]
        fcomp   dword ptr [ebp - 0x44]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_642cf
        fld     dword ptr [esi]
        fcomp   dword ptr [g_80da60]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_642cf
        fld     dword ptr [esi]
        fcomp   dword ptr [g_80da58]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_642cf
        fld     dword ptr [esi + 8]
        fcomp   dword ptr [g_80da5c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_642cf
        fld     dword ptr [esi + 8]
        fcomp   dword ptr [g_80da54]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_642cf
        mov     al, byte ptr [g_80da78]
        test    al, al
        jnz     L_642c6
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x20]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004f8480
        test    eax, eax
        jnz     L_642cf
L_642c6:
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 0x44], edx
        mov     dword ptr [ebp - 0x1c], esi
L_642cf:
        mov     eax, dword ptr [ebp - 8]
        add     esi, 0xc
        cmp     esi, eax
        jnz     L_6411c
        mov     esi, dword ptr [ebp - 0xc]
L_642e0:
        mov     ecx, dword ptr [ebp - 0x1c]
        cmp     ecx, eax
        jnz     L_642ec
        mov     ecx, dword ptr [ebp - 4]
        jmp     L_642fd
L_642ec:
        mov     edx, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xf0]
        mov     ecx, dword ptr [ebp - 4]
        mov     esi, dword ptr [ebp - 0xc]
L_642fd:
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    edx
        push    esi
        call    FUN_005b8a20
        add     esp, 8
L_64319:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
