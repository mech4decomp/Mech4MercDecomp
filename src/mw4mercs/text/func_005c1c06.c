/*
 * FUN_005c1c06 (extent 0x5c1c06-0x5c1cc8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007f1f84;
extern int    g_007f2460;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005c1c06(void)
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
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        mov    esi, dword ptr [ecx + 0x170]
        mov    dword ptr [ecx + 0x57c], 0
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_1c3d
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xbc]
L_1c3d:
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007f2460]
        sub    esp, 8
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        fld    dword ptr [edi + 0x57c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_1c6e
        call    FUN_006f49a0
        pop    edi
        add    esp, 8
        ret    
L_1c6e:
        fld    dword ptr [edi + 0x578]
        push    esi
        fadd    dword ptr [edi + 0x57c]
        push    0
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1cbd
        mov    eax, dword ptr [g_007f1f84]
        mov    esi, dword ptr [edi + 0x170]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_1cbd
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xbc]
        mov    dword ptr [edi + 0x57c], 0
L_1cbd:
        call    FUN_006f49a0
        pop    esi
        pop    edi
        add    esp, 8
        ret    
    }
}
