/*
 * FUN_005ebc9e (extent 0x5ebc9e-0x5ebd6d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2598;
extern int    g_007f25b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005ebc9e(void)
{
    __asm {
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        fld    qword ptr [ecx + 0x18]
        fcomp    qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x40
        je    L_bcba
        xor    eax, eax
        ret    8
L_bcba:
        fld    qword ptr [ecx + 0x18]
        fcomp    qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bccf
        mov    eax, 1
        ret    8
L_bccf:
        or    eax, 0xffffffff
        ret    8
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
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        fld    qword ptr [edx]
        fcomp    qword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x40
        je    L_bcf9
        xor    eax, eax
        ret    8
L_bcf9:
        fld    qword ptr [edx]
        fcomp    qword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bd0d
        mov    eax, 1
        ret    8
L_bd0d:
        or    eax, 0xffffffff
        ret    8
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
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bd61
        mov    eax, dword ptr [g_007f25b0]
        push    0x5052a0
        push    0x5ebda0
        push    0x789b20
        push    2
        push    eax
        push    0x789b30
        push    0x453
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f2598], esi
        pop    esi
        ret    
L_bd61:
        mov    dword ptr [g_007f2598], 0
        pop    esi
        ret    
    }
}
