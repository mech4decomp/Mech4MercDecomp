/*
 * FUN_005a855e (extent 0x5a855e-0x5a862d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2090;
extern int    g_007f2598;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005a855e(void)
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
        je    L_857a
        xor    eax, eax
        ret    8
L_857a:
        fld    qword ptr [ecx + 0x18]
        fcomp    qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_858f
        mov    eax, 1
        ret    8
L_858f:
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
        je    L_85b9
        xor    eax, eax
        ret    8
L_85b9:
        fld    qword ptr [edx]
        fcomp    qword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_85cd
        mov    eax, 1
        ret    8
L_85cd:
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
        je    L_8621
        mov    eax, dword ptr [g_007f2598]
        push    0x5052a0
        push    0x5a8660
        push    0x784fa0
        push    1
        push    eax
        push    0x784fb8
        push    0x4a5
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f2090], esi
        pop    esi
        ret    
L_8621:
        mov    dword ptr [g_007f2090], 0
        pop    esi
        ret    
    }
}
