/*
 * FUN_004d633b (extent 0x4d633b-0x4d648a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004d6240(void);

__declspec(naked) void FUN_004d633b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
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
        sub    esp, 0xc
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x60]
        test    ecx, ecx
        lea    eax, [edi + 0x60]
        je    L_63c5
        mov    dword ptr [esp + 8], eax
        mov    eax, ecx
        push    esi
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 8], 0x772d80
L_6373:
        test    eax, eax
        je    L_63bd
        mov    esi, dword ptr [eax]
        test    esi, esi
        je    L_63bd
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x14
        test    al, 1
        lea    ecx, [esp + 8]
        je    L_63a4
        call    FUN_00417ad0
        push    esi
        mov    ecx, edi
        call    FUN_004d6240
        mov    eax, dword ptr [esp + 0xc]
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
        jmp    L_6373
L_63a4:
        call    FUN_00417ad0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
        mov    eax, dword ptr [esp + 0xc]
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
        jmp    L_6373
L_63bd:
        pop    esi
        mov    al, 1
        pop    edi
        add    esp, 0xc
        ret    
L_63c5:
        xor    al, al
        pop    edi
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 8]
        push    eax
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 4], 0
        call    FUN_00412740
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    0x772d84
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 4]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_641f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_641f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_641f:
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edx + 0x2c]
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    esi
        lea    esi, [edx + 0x2c]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_645e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_645e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_645e:
        lea    edx, [esp + 4]
        push    edx
        mov    ecx, esi
        call    FUN_00412740
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        pop    esi
        je    L_6486
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6486
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6486:
        pop    ecx
        ret    8
    }
}
