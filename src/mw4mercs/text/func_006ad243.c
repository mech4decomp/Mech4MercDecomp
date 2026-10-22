/*
 * FUN_006ad243 (extent 0x6ad243-0x6ad354) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00786dd0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041ec50(void);

__declspec(naked) void FUN_006ad243(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fsubr    dword ptr [esp + 0x14]
        add    eax, 0x80
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], edx
        fsub    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 8], eax
        fsub    dword ptr [esp + 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00786dd0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_d2d2
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_d2d4
L_d2d2:
        xor    al, al
L_d2d4:
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x99c]
        test    eax, eax
        __emit 0xC7  // mov dword ptr [esp], 0 with explicit disp8=0 (MSVC6 drops the 00 byte)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        je    L_d30b
        mov    ecx, dword ptr [eax + 0xe0]
        cmp    dword ptr [ecx + 0x14], 6
        jne    L_d30b
        __emit 0xC7  // mov dword ptr [esp], 1 with explicit disp8=0 (MSVC6 drops the 00 byte)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_d30b:
        mov    ecx, dword ptr [esp + 0xc]
        push    1
        lea    edx, [esp + 4]
        push    edx
        call    FUN_0041ec50
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [eax + ecx*4 + 0x848c]
        add    eax, 0x8484
        inc    edx
        mov    dword ptr [eax + ecx*4 + 8], edx
        inc    dword ptr [eax + 0xc00]
        pop    ecx
        ret    
    }
}
