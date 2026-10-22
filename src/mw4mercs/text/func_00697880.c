/*
 * FUN_00697880 (266 B) — Animation/state update routine with FPU math.
 *
 * __thiscall (ECX = this = ESI), RET 8 (two stack params at EBP+8/+0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00697af0(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */

extern double g_76d970;
extern double g_78d0c0;

__declspec(naked) void __stdcall FUN_00697880(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x1c
        push    ebx
        push    esi
        mov     esi, ecx
        fld     qword ptr [esi + 0x78]
        push    edi
        fcomp   qword ptr [g_76d970]
        __emit  0xDF            /* __emit: fnstsw ax no-WAIT form (MSVC6 adds 9B) */
        __emit  0xE0
        __emit  0xF6            /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xC4
        __emit  0x40
        jz      L_6978aa
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x78], eax
        mov     dword ptr [esi + 0x7c], ecx
L_6978aa:
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x1c]
        lea     edi, [esi + 0x38]
        xor     ebx, ebx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        jz      L_6978d7
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_697903
L_6978d7:
        mov     dword ptr [esp + 0x20], ecx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00561a30
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
L_697903:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 0x4]
        fmul    dword ptr [eax + 0x14]
        call    FUN_0075db4a
        fld     qword ptr [esi + 0x78]
        fcomp   qword ptr [ebp + 0x8]
        mov     ecx, eax
        __emit  0xDF            /* __emit: fnstsw ax no-WAIT form (MSVC6 adds 9B) */
        __emit  0xE0
        __emit  0xF6            /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xC4
        __emit  0x41
        jz      L_69794a
L_697924:
        dec     ecx
        mov     edx, dword ptr [esi + 0x74]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x74], edx
        jl      L_697934
        mov     dword ptr [esi + 0x74], ebx
L_697934:
        fld     qword ptr [esi + 0x78]
        fadd    qword ptr [g_78d0c0]
        fst     qword ptr [esi + 0x78]
        fcomp   qword ptr [ebp + 0x8]
        __emit  0xDF            /* __emit: fnstsw ax no-WAIT form (MSVC6 adds 9B) */
        __emit  0xE0
        __emit  0xF6            /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xC4
        __emit  0x41
        __emit  0x75            /* __emit: backward jnz rel-offset miscomputed by MSVC6 (off-by-1); ref 75 DA */
        __emit  0xDA
L_69794a:
        lea     ecx, [esi + 0x8c]
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_697975
        mov     ecx, esi
        call    FUN_00697af0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x2c], ecx
        mov     dword ptr [esi + 0x30], edx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_697975:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x2c], eax
        pop     edi
        mov     dword ptr [esi + 0x30], ecx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
