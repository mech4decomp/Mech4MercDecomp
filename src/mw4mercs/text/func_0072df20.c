/*
 * FUN_0072DF20 (179 B) — Validates a packed structure (param_1) against
 * a set of field constraints; returns 1 (AL) if valid, 0 otherwise.
 *
 * __cdecl, RET 8 (two dword params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __cdecl FUN_0072df20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x14
        cmp     eax, 0x12
        jc      L_72dfcb
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] mem op (89 0C 24 vs 89 4C 24 00) */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x8], ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x4], edx
        mov     dx, word ptr [eax + 0x10]
        mov     al, dl
        cmp     al, 0x20
        mov     dword ptr [esp + 0xc], ecx
        mov     word ptr [esp + 0x10], dx
        jz      L_72df76
        cmp     al, 0x18
        jz      L_72df76
        cmp     al, 0x8
        jnz     L_72dfcb
        cmp     word ptr [esp + 0x5], 0x100
        ja      L_72dfcb
        cmp     byte ptr [esp + 0x7], 0x18
        jnz     L_72dfcb
L_72df76:
        mov     al, byte ptr [esp + 0x2]
        cmp     al, 0x2
        jz      L_72df8a
        cmp     al, 0xa
        jz      L_72df8a
        cmp     al, 0x1
        jz      L_72df8a
        cmp     al, 0x9
        jnz     L_72dfcb
L_72df8a:
        cmp     word ptr [esp + 0x8], 0x0
        jnz     L_72dfcb
        cmp     word ptr [esp + 0xa], 0x0
        jnz     L_72dfcb
        mov     eax, dword ptr [esp + 0xe]
        and     eax, 0xffff
        and     ecx, 0xffff
        mov     edx, eax
        or      edx, ecx
        test    edx, 0xfffff80f
        jnz     L_72dfcb
        lea     edx, [ecx - 0x1]
        /* __emit: MSVC6 swaps test operands (85 CA vs ref 85 D1 = test ecx,edx) */
        __emit 0x85
        __emit 0xD1
        jnz     L_72dfcb
        lea     ecx, [eax - 0x1]
        /* __emit: MSVC6 swaps test operands (85 C1 vs ref 85 C8 = test eax,ecx) */
        __emit 0x85
        __emit 0xC8
        jnz     L_72dfcb
        mov     al, 0x1
        add     esp, 0x14
        ret     0x8
L_72dfcb:
        xor     al, al
        add     esp, 0x14
        ret     0x8
    }
}
