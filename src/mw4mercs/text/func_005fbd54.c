/*
 * FUN_005fbd54 (extent 0x5fbd54-0x5fbe77) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);

__declspec(naked) void FUN_005fbd54(void)
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
        fld    dword ptr [g_0076d064]
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
        sub    esp, 0x14
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x150]
        test    ecx, ecx
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        je    L_bd8c
        mov    eax, dword ptr [ecx]
        push    esi
        push    edi
        call    dword ptr [eax + 0x10]
L_bd8c:
        lea    ecx, [esi + 0x370]
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_bdd2
        mov    esi, dword ptr [esi + 0x150]
L_bdb7:
        cmp    eax, esi
        je    L_bdc5
        mov    edx, dword ptr [eax]
        push    0
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 0x10]
L_bdc5:
        lea    ecx, [esp + 8]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_bdb7
L_bdd2:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        pop    edi
        pop    esi
        add    esp, 0x14
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
        mov    al, byte ptr [ecx + 0x3f1]
        test    al, al
        je    L_be2d
        mov    eax, dword ptr [ecx + 0x3f4]
        cmp    eax, -1
        jle    L_be37
        mov    dl, byte ptr [ecx + 0xdc]
        test    dl, dl
        jne    L_be37
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        ret    
L_be2d:
        mov    al, byte ptr [ecx + 0xdc]
        test    al, al
        je    L_be3b
L_be37:
        mov    eax, dword ptr [ecx + 0x2c]
        ret    
L_be3b:
        mov    eax, dword ptr [ecx + 0x78]
        add    ecx, 0x78
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x298]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x3f0]
        ret    
    }
}
