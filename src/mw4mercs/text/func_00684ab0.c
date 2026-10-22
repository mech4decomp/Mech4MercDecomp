/*
 * FUN_00684ab0 (603 B) — HUD element update/aim helper. Reads a global
 * camera (FUN_00415230 gate), computes a target vector, and either
 * copies a list (FUN_00684770) or performs a full aim/cone computation
 * with virtual calls (+0xf8), FPU distance math, and list construction
 * (FUN_00684530). Returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2560;
extern float g_007b220c;
extern float g_00798bd0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00684770(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_00684530(void);

__declspec(naked) void FUN_00684ab0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x174
        mov     eax, dword ptr [g_007f2560]
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [esi + 0x4]
        push    edi
        push    eax
        mov     dword ptr [ebp - 0x14], 0x0
        mov     dword ptr [ebp - 0x10], 0x0
        mov     dword ptr [ebp - 0xc], 0x0
        mov     dword ptr [ebp - 0x8], 0x0
        mov     dword ptr [ebp - 0x4], 0x0
        call    FUN_00415230
        cmp     al, 0x1
        mov     edi, dword ptr [ebp + 0xc]
        jnz     L_684b2a
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        test    eax, eax
        jz      L_684b2a
        mov     ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        jz      L_684b15
        fld     dword ptr [eax + 0x94]
        fadd    st(0), st(0)
        fstp    qword ptr [ebp - 0x14]
    L_684b15:
        mov     ecx, dword ptr [eax + 0x78]
        mov     edx, dword ptr [eax + 0x7c]
        mov     eax, dword ptr [eax + 0x80]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x4], eax
    L_684b2a:
        mov     esi, dword ptr [edi + 0x1c]
        test    esi, esi
        jnz     L_684b97
        mov     ecx, dword ptr [edi]
        push    ecx
        lea     ecx, [ebp - 0x174]
        call    FUN_00684770
        lea     edx, [ebp - 0x174]
        push    edx
        lea     ecx, [ebp - 0x130]
        call    FUN_00684770
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [edi + 0x18]
        mov     esi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0xec], eax
        lea     eax, [ebp - 0x130]
        mov     dword ptr [ebp - 0xe8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 0x120], edx
        call    FUN_00684770
        mov     ecx, dword ptr [ebp - 0xec]
        mov     edx, dword ptr [ebp - 0xe8]
        mov     dword ptr [esi + 0x44], ecx
        pop     edi
        mov     dword ptr [esi + 0x48], edx
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    L_684b97:
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x38]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fst     dword ptr [ebp + 0xc]
        fcomp   dword ptr [g_007b220c]
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_684bd6
        fld     qword ptr [edi + 0x24]
        jmp     L_684c31
    L_684bd6:
        fld     qword ptr [edi + 0x24]
        mov     edx, dword ptr [esi]
        push    0x0
        push    ecx
        lea     eax, [ebp - 0x2c]
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xf8]
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     edx, [ebp - 0x2c]
        push    edx
        lea     ecx, [ebp - 0xc]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0xc]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x48], eax
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x10], eax
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp - 0x48]
        fdiv    dword ptr [ebp + 0xc]
        fadd    qword ptr [edi + 0x24]
    L_684c31:
        mov     edx, dword ptr [esi]
        push    ebx
        push    0x1
        push    ecx
        lea     eax, [ebp - 0x2c]
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xf8]
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     edx, [ebp - 0x2c]
        push    edx
        lea     ecx, [ebp - 0x44]
        call    FUN_0040ca10
        mov     ebx, dword ptr [edi]
        mov     ecx, dword ptr [ebx + 0x30]
        lea     esi, [ebx + 0x18]
        lea     eax, [ebp - 0x54]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004e8dc0
        lea     edx, [ebp - 0x54]
        push    edx
        lea     ecx, [ebp - 0xc]
        call    FUN_0040c5d0
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x20], eax
        mov     dword ptr [ebp - 0x1c], ecx
        lea     eax, [ebp - 0x44]
        push    eax
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp - 0x20]
        mov     dword ptr [ebp - 0x18], edx
        call    FUN_0040c9e0
        mov     eax, dword ptr [ebx + 0x40]
        lea     edx, [ebp - 0x20]
        push    edx
        push    esi
        push    eax
        lea     ecx, [ebp - 0xe4]
        call    FUN_00684530
        fld     dword ptr [ebp - 0xb4]
        fadd    dword ptr [g_00798bd0]
        lea     ecx, [ebp - 0xe4]
        push    ecx
        lea     ecx, [ebp - 0xa0]
        fstp    dword ptr [ebp - 0xb4]
        call    FUN_00684770
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x5c], edx
        lea     edx, [ebp - 0xa0]
        mov     dword ptr [ebp - 0x90], ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x58], eax
        call    FUN_00684770
        mov     eax, dword ptr [ebp - 0x5c]
        mov     ecx, dword ptr [ebp - 0x58]
        pop     ebx
        mov     dword ptr [esi + 0x44], eax
        pop     edi
        mov     dword ptr [esi + 0x48], ecx
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
