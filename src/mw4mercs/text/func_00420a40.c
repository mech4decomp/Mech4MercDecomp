/*
 * FUN_00420a40 (161 B) — __thiscall (RET 0x8). Component-wise min/max of
 * two 6-vectors [EDX] and [ESI]; writes the 6 floats to [ECX] and returns
 * ECX. FPU compares with FNSTSW/TEST AH.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00420a40(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        fld     dword ptr [edx]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x1
        jz      L_420a58
        fld     dword ptr [edx]
        jmp     L_420a5a
L_420a58:
        fld     dword ptr [esi]
L_420a5a:
        fstp    dword ptr [ecx]
        fld     dword ptr [edx + 0x4]
        fcomp   dword ptr [esi + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_420a6e
        fld     dword ptr [edx + 0x4]
        jmp     L_420a71
L_420a6e:
        fld     dword ptr [esi + 0x4]
L_420a71:
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [edx + 0x8]
        fcomp   dword ptr [esi + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_420a86
        fld     dword ptr [edx + 0x8]
        jmp     L_420a89
L_420a86:
        fld     dword ptr [esi + 0x8]
L_420a89:
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [edx + 0xc]
        fcomp   dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_420a9e
        fld     dword ptr [edx + 0xc]
        jmp     L_420aa1
L_420a9e:
        fld     dword ptr [esi + 0xc]
L_420aa1:
        fstp    dword ptr [ecx + 0xc]
        fld     dword ptr [edx + 0x10]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_420ab6
        fld     dword ptr [edx + 0x10]
        jmp     L_420ab9
L_420ab6:
        fld     dword ptr [esi + 0x10]
L_420ab9:
        fstp    dword ptr [ecx + 0x10]
        fld     dword ptr [edx + 0x14]
        fcomp   dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_420ad5
        fld     dword ptr [edx + 0x14]
        mov     eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop     esi
        ret     0x8
L_420ad5:
        fld     dword ptr [esi + 0x14]
        mov     eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop     esi
        ret     0x8
    }
}
