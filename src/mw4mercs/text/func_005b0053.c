/*
 * FUN_005b0053 (extent 0x5b0053-0x5b00b0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00785d40;

__declspec(naked) void FUN_005b0053(void)
{
    __asm {
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    esi
        add    esp, 0xc
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 0x17
        je    L_007c
        mov    eax, dword ptr [ecx]
        push    0
        push    0x17
        call    dword ptr [eax + 4]
        xor    al, al
        pop    esi
        ret    
L_007c:
        fld    dword ptr [esi + 0x5f4]
        fcomp    dword ptr [g_00785d40]
        fnstsw  ax
        test    ah, 0x40
        jne    L_009d
        mov    al, byte ptr [esi + 0x609]
        test    al, al
        je    L_009d
        xor    al, al
        pop    esi
        ret    
L_009d:
        mov    edx, dword ptr [ecx]
        push    0
        push    0x13
        call    dword ptr [edx + 4]
        mov    al, 1
        mov    byte ptr [esi + 0x514], al
        pop    esi
        ret    
    }
}
