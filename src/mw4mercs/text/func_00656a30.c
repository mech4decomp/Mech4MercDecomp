/*
 * FUN_00656a30 (272 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Iterates a 2D table of points, dispatching on a mode param via jump table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_784aec;   /* 0x00784aec */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern double g_7890a0;  /* 0x007890a0 */
extern float g_76d598;   /* 0x0076d598 */
extern int g_656b40;     /* 0x00656b40 (jump table base) */

extern float __cdecl FUN_00657140(int a, int b, int c);

__declspec(naked) void __stdcall FUN_00656a30(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    ebp
        mov     eax, 0x1
        mov     ebp, ecx
        or      ecx, 0xffffffff
        xor     edx, edx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1C], edx
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2C], ecx
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x3C], ecx
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x4C], eax
        mov     dword ptr [esp + 0x50], eax
        mov     dword ptr [esp + 0x10], edx
        lea     ebx, [esp + 0x18]
L_a8b:
        mov     eax, dword ptr [ebx]
        mov     edi, dword ptr [esp + 0x5C]
        mov     ecx, dword ptr [esp + 0x58]
        mov     esi, dword ptr [ebx - 0x4]
        add     edi, eax
        mov     eax, dword ptr [esp + 0x60]
        push    eax
        add     esi, ecx
        push    edi
        push    esi
        mov     ecx, ebp
        call    FUN_00657140
        fcomp   dword ptr [g_784aec]
        __emit 0xDF            /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0            /* __emit: ... (DF E0 no-WAIT form) */
        __emit 0xF6            /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4            /* __emit: ... */
        __emit 0x40            /* __emit: ... */
        jnz     L_b30
        mov     edx, dword ptr [ebp + 0x400004]
        lea     ecx, [esi + esi*2]
        lea     ecx, [edx + ecx*4]
        mov     edx, dword ptr [ecx]
        lea     eax, [edi + edi*4]
        shl     eax, 0x3
        cmp     dword ptr [edx + eax + 0x18], -1
        jz      L_b0b
        mov     edx, dword ptr [esp + 0x60]
        dec     edx
        cmp     edx, 0x7
        ja      L_b0b
        jmp     dword ptr [edx*4 + g_656b40]
L_ae3:
        mov     ecx, dword ptr [ecx]
        fld     dword ptr [ecx + eax + 0x24]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0            /* __emit: ... (DF E0 no-WAIT form) */
        __emit 0xF6            /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4            /* __emit: ... */
        __emit 0x41            /* __emit: ... */
        jz      L_b30
        jmp     L_b0b
L_af8:
        mov     edx, dword ptr [ecx]
        fld     dword ptr [edx + eax + 0x24]
        fcomp   qword ptr [g_7890a0]
        __emit 0xDF            /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0            /* __emit: ... (DF E0 no-WAIT form) */
        __emit 0xF6            /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4            /* __emit: ... */
        __emit 0x41            /* __emit: ... */
        jz      L_b30
L_b0b:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     ebx, 0x8
        cmp     eax, 0x8
        mov     dword ptr [esp + 0x10], eax
        jl      L_a8b
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xC
L_b30:
        fld     dword ptr [g_76d598]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xC
    }
}
