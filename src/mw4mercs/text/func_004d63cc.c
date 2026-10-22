/*
 * FUN_004d63cc (extent 0x4d63cc-0x4d64c3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004fcb30(void);

__declspec(naked) void FUN_004d63cc(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_64bb
        cmp    eax, -1
        jne    L_64bd
L_64bb:
        xor    eax, eax
L_64bd:
        ret    4
        ret    4
    }
}
