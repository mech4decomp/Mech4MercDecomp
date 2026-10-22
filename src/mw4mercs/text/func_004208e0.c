/*
 * FUN_004208e0 (168 B) — __thiscall (RET 0x4). Computes the axis-aligned
 * bounding box (min/max, 6 floats) of a list of 3-vectors. [EDX] = {ptr,
 * count}; result written to [ECX]. FPU compares with FNSTSW/TEST AH.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004208e0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [edx]
        fld     dword ptr [eax]
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        fst     dword ptr [ecx + 0x4]
        cmp     esi, 0x1
        fstp    dword ptr [ecx]
        fld     dword ptr [eax + 0x4]
        fst     dword ptr [ecx + 0xc]
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [eax + 0x8]
        fst     dword ptr [ecx + 0x14]
        fstp    dword ptr [ecx + 0x10]
        jbe     L_420984
        lea     edx, [eax + 0xc]
        dec     esi
L_42090c:
        fld     dword ptr [edx]
        fcomp   dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_42091d
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx], eax
        jmp     L_42092e
L_42091d:
        fld     dword ptr [edx]
        fcomp   dword ptr [ecx + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_42092e
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx + 0x4], eax
L_42092e:
        fld     dword ptr [edx + 0x4]
        fcomp   dword ptr [ecx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_420943
        mov     eax, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        jmp     L_420956
L_420943:
        fld     dword ptr [edx + 0x4]
        fcomp   dword ptr [ecx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_420956
        mov     eax, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0xc], eax
L_420956:
        fld     dword ptr [edx + 0x8]
        fcomp   dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_42096b
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [ecx + 0x10], eax
        jmp     L_42097e
L_42096b:
        fld     dword ptr [edx + 0x8]
        fcomp   dword ptr [ecx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_42097e
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [ecx + 0x14], eax
L_42097e:
        add     edx, 0xc
        dec     esi
        jnz     L_42090c
L_420984:
        pop     esi
        ret     0x4
    }
}
