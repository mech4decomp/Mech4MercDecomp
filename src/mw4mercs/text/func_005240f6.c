/*
 * FUN_005240f6 (extent 0x5240f6-0x524255) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00529770(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005240f6(void)
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
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 4]
        mov    edx, dword ptr [eax]
        push    ecx
        push    edx
        call    FUN_00529770
        add    esp, 8
        ret    0xc
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0xc]
        mov    esi, dword ptr [edx]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x3528]
        test    cl, cl
        mov    dword ptr [esi], 0
        jne    L_4152
        xor    eax, eax
        pop    esi
        ret    0xc
L_4152:
        fld    dword ptr [eax + 0x352c]
        call    FUN_0075db4a
        mov    dword ptr [esi], eax
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0xc]
        mov    esi, dword ptr [edx]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x3518]
        test    cl, cl
        mov    dword ptr [esi], 0
        jne    L_41a2
        xor    eax, eax
        pop    esi
        ret    0xc
L_41a2:
        fld    dword ptr [eax + 0x351c]
        call    FUN_0075db4a
        mov    dword ptr [esi], eax
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0xc]
        mov    esi, dword ptr [edx]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x3520]
        test    cl, cl
        mov    dword ptr [esi], 0
        jne    L_41f2
        xor    eax, eax
        pop    esi
        ret    0xc
L_41f2:
        fld    dword ptr [eax + 0x3524]
        call    FUN_0075db4a
        mov    dword ptr [esi], eax
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x3514]
        ret    0xc
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x40ee8]
        test    edx, edx
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [eax], 0
        je    L_424d
        mov    dword ptr [eax], 1
L_424d:
        mov    eax, 1
        ret    8
    }
}
