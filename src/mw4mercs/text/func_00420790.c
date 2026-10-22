/*
 * FUN_00420790 (122 B) — __thiscall (RET 0x8). Component-wise min/max of
 * two 3-vectors [EDX] and [ESI]; writes the result (6 floats) to [ECX]
 * and returns ECX. FPU compares with FNSTSW/TEST AH.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00420790(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        fld     dword ptr [edx]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4207ac
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esi]
        jmp     L_4207b2
L_4207ac:
        mov     eax, dword ptr [esi]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [edx]
L_4207b2:
        fld     dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], eax
        fcomp   dword ptr [esi + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4207cd
        mov     eax, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        mov     eax, dword ptr [esi + 0x4]
        jmp     L_4207d6
L_4207cd:
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        mov     eax, dword ptr [edx + 0x4]
L_4207d6:
        fld     dword ptr [edx + 0x8]
        mov     dword ptr [ecx + 0xc], eax
        fcomp   dword ptr [esi + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4207f8
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [edx + 0x8]
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [ecx + 0x10], edx
        mov     eax, ecx
        pop     esi
        ret     0x8
L_4207f8:
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [edx + 0x8]
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x14], edx
        mov     eax, ecx
        pop     esi
        ret     0x8
    }
}
