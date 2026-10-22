/*
 * FUN_0055289C (874 B) — __thiscall (ECX = this). Object transform/aim
 * update.
 *
 * Reads position data from this (or a linked object at this+0x58c),
 * copies a 12-dword block, builds a transform via matrix helpers
 * (FUN_0040c410 / FUN_00428730 / FUN_00766c60), computes a normalized
 * direction vector with FPU math (constants 0x76d59c/0x76d064/0x77d0f8),
 * and registers the result with FUN_004e2f40 / FUN_0041fcb0/fcd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7dc728;
extern float g_76d59c;
extern float g_76d064;
extern float g_77d0f8;

extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00766c60(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0041c830(void);

__declspec(naked) void FUN_0055289C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0x88
        push    ebx
        push    ebp
        mov     ebx, ecx
        cmp     dword ptr [ebx + 0x564], 4
        push    esi
        push    edi
        jne     L_5528d8
        mov     eax, dword ptr [ebx + 0xd8]
        lea     esi, [eax + 0x80]
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x10], eax
        mov     ecx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        mov     edx, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x18], edx
        jmp     L_552937
L_5528d8:
        mov     ecx, dword ptr [ebx + 0x58c]
        test    ecx, ecx
        je      L_552913
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x18], eax
        mov     esi, dword ptr [ecx + 0xd8]
        add     esi, 0x80
        jmp     L_552937
L_552913:
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        lea     esi, [eax + 0x80]
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x18], eax
L_552937:
        mov     ecx, 0xc
        lea     edi, [esp + 0x68]
        rep movsd
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [esp + 0x6c]
        call    FUN_00428730
        lea     edx, [esp + 0x10]
        lea     ebp, [ebx + 0x278]
        push    edx
        mov     ecx, ebp
        call    FUN_0040c410
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, ebp
        call    FUN_00766c60
        fld     dword ptr [ebx + 0x344]
        fadd    dword ptr [ebx + 0x294]
        lea     ecx, [ebx + 0x2c4]
        mov     dword ptr [ebx + 0x29c], ecx
        mov     ecx, dword ptr [ebx + 0x384]
        lea     eax, [ebx + 0x298]
        fstp    dword ptr [ebx + 0x290]
        mov     dword ptr [ebx + 0x2a8], ecx
        mov     ecx, dword ptr [g_7dc728]
        push    eax
        mov     dword ptr [eax], ebp
        mov     dword ptr [ebx + 0x2ac], 0x2000
        call    FUN_004e2f40
        mov     esi, eax
        cmp     dword ptr [ebx + 0x564], 4
        jne     L_552b50
        mov     ecx, dword ptr [ebx + 0x58c]
        test    ecx, ecx
        je      L_552a00
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x18], eax
        mov     esi, dword ptr [ecx + 0xd8]
        add     esi, 0x80
        jmp     L_552a24
L_552a00:
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        lea     esi, [eax + 0x80]
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x18], eax
L_552a24:
        mov     ecx, 0xc
        lea     edi, [esp + 0x68]
        rep movsd
        mov     ecx, dword ptr [ebx + 0x298]
        lea     esi, [ebx + 0x298]
        fld     dword ptr [ecx + 0x18]
        fcomp   dword ptr [g_76d59c]
        __emit 0xDF          /* FNSTSW AX no-WAIT (MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        je      L_552a52
        mov     dword ptr [ecx + 0x18], 0x38d1b717
L_552a52:
        mov     eax, dword ptr [ecx + 0x18]
        lea     edx, [esp + 0x44]
        push    edx
        push    eax
        call    FUN_004e8dc0
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x6c]
        call    FUN_00428730
        fld     dword ptr [esp + 0x44]
        fsub    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x4c]
        fsub    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x2c]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_77d0f8]
        __emit 0xDF          /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_552afa
        lea     edx, [esp + 0x2c]
        push    edx
        jmp     L_552aff
L_552afa:
        lea     eax, [esp + 0x38]
        push    eax
L_552aff:
        mov     ecx, ebp
        call    FUN_00766c60
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, ebp
        call    FUN_0040c410
        mov     edx, dword ptr [ebx + 0x294]
        mov     ecx, dword ptr [g_7dc728]
        lea     eax, [ebx + 0x2c4]
        mov     dword ptr [ebx + 0x29c], eax
        mov     eax, dword ptr [ebx + 0x384]
        push    esi
        mov     dword ptr [ebx + 0x290], edx
        mov     dword ptr [esi], ebp
        mov     dword ptr [ebx + 0x2ac], 0x2000
        mov     dword ptr [ebx + 0x2a8], eax
        call    FUN_004e2f40
        mov     esi, eax
L_552b50:
        test    esi, esi
        je      L_552b82
        lea     edi, [ebx + 0x65c]
        mov     ecx, edi
        call    FUN_0041fcb0
        lea     ecx, [ebx + 0x690]
        call    FUN_0041fcb0
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
        push    esi
        lea     ecx, [ebx + 0x690]
        call    FUN_0041fcd0
        jmp     L_552b98
L_552b82:
        lea     ecx, [ebx + 0x65c]
        call    FUN_0041fcb0
        lea     ecx, [ebx + 0x690]
        call    FUN_0041fcb0
L_552b98:
        lea     edi, [ebx + 0x2b0]
        mov     ecx, edi
        call    FUN_0041fcb0
        test    esi, esi
        je      L_552bf9
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
        fld     dword ptr [ebp + 0x18]
        fld     st(0)
        lea     ecx, [esp + 0x1c]
        fmul    dword ptr [ebp + 0xc]
        push    ecx
        push    ebp
        lea     ecx, [esp + 0x64]
        fstp    dword ptr [esp + 0x24]
        fld     st(0)
        fmul    dword ptr [ebp + 0x10]
        fstp    dword ptr [esp + 0x28]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0040c9e0
        mov     edx, dword ptr [esi + 0xd8]
        add     edx, 0x80
        push    edx
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [ebx + 0x2b8]
        call    FUN_0041c830
L_552bf9:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x88
        ret
    }
}
