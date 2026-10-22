/*
 * FUN_00621d50 (113 B) — Removes an element from an int vector. Validates
 * index against (end-begin)/4, finds the matching value in the [edi+0xc,
 * edi+0x10) range, calls FUN_00624520(0), shifts the tail left by one
 * slot, and decrements the end pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624520(void);

__declspec(naked) void __fastcall FUN_00621d50(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        jl      L_bc
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        sub     edx, eax
        sar     edx, 0x2
        cmp     ecx, edx
        jnc     L_bc
        mov     edx, dword ptr [eax + ecx*0x4]
        test    edx, edx
        jz      L_bc
        mov     esi, dword ptr [edi + 0xc]
        mov     eax, dword ptr [edi + 0x10]
        cmp     esi, eax
        mov     ecx, edx
        jz      L_bc
L_7d:
        cmp     dword ptr [esi], ecx
        jz      L_8d
        add     esi, 0x4
        cmp     esi, eax
        jnz     L_7d
        pop     edi
        pop     esi
        ret     4
L_8d:
        mov     ecx, dword ptr [esi]
        push    0x0
        call    FUN_00624520
        mov     edx, dword ptr [edi + 0x10]
        lea     ecx, [esi + 0x4]
        cmp     ecx, edx
        jz      L_b6
        mov     eax, edx
        sub     eax, ecx
        sar     eax, 0x2
        test    eax, eax
        jle     L_b6
L_ab:
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [esi], ecx
        add     esi, 0x4
        dec     eax
        jnz     L_ab
L_b6:
        add     edx, -0x4
        mov     dword ptr [edi + 0x10], edx
L_bc:
        pop     edi
        pop     esi
        ret     4
    }
}
