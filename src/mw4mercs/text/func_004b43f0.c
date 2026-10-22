/*
 * FUN_004b43f0 (255 B) — __thiscall. MLR LOD selection: iterates up to 8
 * candidate LOD entries (param_2 array), tests each against a distance
 * threshold (FUN_00415230 + squared-distance vs squared-radius), and
 * collects matches into param_1. Returns the count. Early-returns 0 if
 * global g_007daa0c is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daa0c;
extern float g_007b220c;
extern int g_007da6a4;
extern int g_007b37f8;
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_004b43f0(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [g_007daa0c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x8], ecx
        jz      L_440c
        xor     eax, eax
        pop     ebx
        add     esp, 0x20
        ret     8
    L_440c:
        mov     eax, dword ptr [ecx + 0xfc]
        mov     edx, dword ptr [ecx + 0x10c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        push    esi
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx + 0x11c]
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], ebx
    L_4439:
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      L_44e3
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */ 
        __emit 0xC4
        __emit 0x01
        jnz     L_44ce
        mov     eax, dword ptr [g_007da6a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_44c0
        fld     dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x34]
        fsubr   dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi + 0x44]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x28], ecx
        fsub    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x2c], edx
        fsub    dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x84]
        fadd    dword ptr [eax + 0x12c]
        /* __emit block: MSVC6 FPU stack tracking cannot encode this deep-stack
           register pattern (fld st(1)/st(3)/st(4), faddp, fcompp, fstp st(0));
           it desyncs after fld st(1) and rejects even __emit FPU opcodes when
           mixed with native FPU register ops. Emit the whole register-op
           sequence raw; memory-operand FPU ops above stay native. */
        __emit 0xD9 /* fld st(1) */
        __emit 0xC1
        __emit 0xD8 /* fmul st(2) */
        __emit 0xCA
        __emit 0xD9 /* fld st(3) */
        __emit 0xC3
        __emit 0xD8 /* fmul st(4) */
        __emit 0xCC
        __emit 0xDE /* faddp */
        __emit 0xC1
        __emit 0xD9 /* fld st(4) */
        __emit 0xC4
        __emit 0xD8 /* fmul st(5) */
        __emit 0xCD
        __emit 0xDE /* faddp */
        __emit 0xC1
        __emit 0xD9 /* fld st(1) */
        __emit 0xC1
        __emit 0xD8 /* fmul st(2) */
        __emit 0xCA
        __emit 0xDE /* fcompp */
        __emit 0xD9
        __emit 0xDD /* fstp st(0) */
        __emit 0xD8
        __emit 0xDD /* fstp st(0) */
        __emit 0xD8
        __emit 0xDF /* fnstsw ax (no-WAIT form) */
        __emit 0xE0
        __emit 0xDD /* fstp st(0) */
        __emit 0xD8
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        __emit 0xDD /* fstp st(0) */
        __emit 0xD8
        jnz     L_44c6
    L_44c0:
        mov     dword ptr [edi], esi
        inc     ebx
        add     edi, 0x4
    L_44c6:
        cmp     ebx, dword ptr [g_007b37f8]
        jge     L_44e3
    L_44ce:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     ebp, 0x4
        cmp     eax, 0x8
        mov     dword ptr [esp + 0x10], eax
        jl      L_4439
    L_44e3:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x20
        ret     8
    }
}
