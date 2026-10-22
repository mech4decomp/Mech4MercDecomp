/*
 * FUN_00494dd0 (522 B) — MLR particle/effect curve offset validation.
 * __thiscall, RET 0x4.
 *
 * Validates particle-count limits and curve U/V offsets against
 * thresholds, emitting warnings via FUN_006fabf0 and clamping values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;
extern float g_0077016c;
extern float g_00770168;
extern float g_0076c5b0;
extern float g_00770164;
extern float g_00770160;

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004ad160(void);
extern void __cdecl FUN_004aed40(void);
extern void __cdecl FUN_004abcc0(void);

__declspec(naked) void FUN_00494dd0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x268]
        mov     eax, 0x100
        cmp     ecx, eax
        push    edi
        jle     L4E11
        test    bl, bl
        jz      L4FCF
        mov     dword ptr [esi + 0x268], eax
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    0x7b2984
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L4E11
        int     3
L4E11:
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     edx, [ebp - 0x14]
        lea     edi, [esi + 0x274]
        push    edx
        mov     ecx, edi
        call    FUN_004ad160
        fld     dword ptr [g_007b220c]
        fmul    dword ptr [g_0077016c]
        fcomp   dword ptr [ebp - 0x14]
        __emit 0xDF   /* fnstsw ax: MSVC6 emits 9B-prefixed fstsw; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L4E83
        test    bl, bl
        jz      L4FCF
        fld     dword ptr [g_007b220c]
        lea     ecx, [edi + 0x4]
        fmul    dword ptr [g_00770168]
        fsqrt
        fstp    dword ptr [ebp - 0x1c]
        mov     ebx, dword ptr [ebp - 0x1c]
        push    ebx
        call    FUN_004aed40
        push    ebx
        lea     ecx, [edi + 0x10]
        call    FUN_004aed40
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    0x7b29d0
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L4E80
        int     3
L4E80:
        mov     ebx, dword ptr [ebp + 0x8]
L4E83:
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        lea     ecx, [esi + 0x2ac]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x8], eax
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L4EB3
        mov     dword ptr [ebp + 0x8], 0x0
L4EB3:
        mov     ecx, dword ptr [ebp - 0x8]
        lea     edx, [ebp - 0xc]
        push    edx
        lea     eax, [ebp - 0x10]
        mov     dword ptr [ebp - 0x1c], ecx
        push    eax
        lea     ecx, [esi + 0x29c]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x1c]
        mov     edi, 0x3f800000
        fcomp   dword ptr [g_00770164]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L4EF7
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_00770160]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L4F25
L4EF7:
        test    bl, bl
        jz      L4FCF
        mov     dword ptr [esi + 0x2a0], 0x0
        mov     dword ptr [esi + 0x2b0], edi
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    0x7b2a10
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L4F25
        int     3
L4F25:
        lea     edx, [ebp - 0x8]
        push    edx
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [esi + 0x2a4]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x8], ecx
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L4F55
        mov     dword ptr [ebp + 0x8], 0x0
L4F55:
        mov     edx, dword ptr [ebp - 0x8]
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [esi + 0x294]
        mov     dword ptr [ebp - 0x1c], edx
        call    FUN_004ad160
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_00770164]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L4F94
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_00770160]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L4FBE
L4F94:
        test    bl, bl
        jz      L4FCF
        mov     dword ptr [esi + 0x298], 0x0
        mov     dword ptr [esi + 0x2a8], edi
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        push    0x7b2a5c
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L4FBE
        int     3
L4FBE:
        push    ebx
        mov     ecx, esi
        call    FUN_004abcc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L4FCF:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
