/*
 * FUN_00417b90 (493 B) — __thiscall. Container/network-message builder:
 * computes a 3D vector (position) from a set of input points, normalizes
 * it into the output object at [EBX+0x30..0x3c], and copies a default
 * template (DAT_007b9460) into the object. Returns a mode flag (1 or 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;
extern float g_007b220c;
extern int   g_007b9460;
extern void __cdecl FUN_00420250(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_004208e0(void);
extern void __cdecl FUN_00420d30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00417b90(void)
{
    __asm {
        sub     esp, 0x84
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x94]
        push    edi
        mov     ebx, ecx
        push    esi
        call    FUN_00420250
        push    ebx
        lea     ecx, [esp + 0x68]
        call    FUN_004206b0
        mov     edi, dword ptr [esi + 0x4]
        xor     ebp, ebp
        push    edi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_0040c2e0
        cmp     edi, ebp
        jbe     merge
        mov     ebp, dword ptr [esi]
        xor     esi, esi
    walk:
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esi + ebp*1]
        push    ecx
        lea     ecx, [esi + edx*1]
        call    FUN_0041c7d0
        add     esi, 0xc
        dec     edi
        /* __emit: MSVC6 miscomputes this backward JNZ rel8 (call-reloc in loop) */
        __emit 0x75
        __emit 0xE5
        mov     esi, dword ptr [esp + 0x98]
    merge:
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004208e0
        push    esi
        lea     ecx, [esp + 0x38]
        call    FUN_004208e0
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x3c]
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x34]
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x24]
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x1c]
        fmulp   st(1), st(0)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     elsepath
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_00420d30
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x34]
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        mov     edi, ebx
        fmul    dword ptr [g_0076d070]
        rep movsd
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebx + 0x30]
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x10], 0x2
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebx + 0x34]
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x44]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebx + 0x38]
        jmp     merge2
    elsepath:
        lea     edx, [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_00420d30
        push    ebx
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_0041c7d0
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x1c]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebx + 0x30]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebx + 0x34]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebx + 0x38]
    merge2:
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x54]
        mov     dword ptr [ebx + 0xc], ecx
        mov     dword ptr [ebx + 0x1c], edx
        mov     dword ptr [ebx + 0x2c], eax
        fld     dword ptr [ebx + 0x38]
        fld     dword ptr [ebx + 0x34]
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        fld     dword ptr [ebx + 0x30]
        fld     st(0)
        pop     edi
        fmul    st(0), st(1)
        pop     esi
        fld     st(2)
        pop     ebp
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [ebx + 0x3c]
        pop     ebx
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jz      done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    done:
        /* __emit: MSVC6 drops the 00 disp on mov eax,[esp]; ref is 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0x84
        ret     0x4
    }
}
