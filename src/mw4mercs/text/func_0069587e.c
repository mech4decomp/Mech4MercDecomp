/*
 * FUN_0069587e (extent 0x69587e-0x695a16) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0082db20;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_005cb3d0(void);
extern void __cdecl FUN_005e1c30(void);
extern void __cdecl FUN_00694b10(void);
extern void __cdecl FUN_00694ce0(void);
extern void __cdecl FUN_00696d30(void);
extern void __cdecl FUN_00696dc0(void);
extern void __cdecl FUN_00696e30(void);
extern void __cdecl FUN_00696e50(void);
extern void __cdecl FUN_00696ed0(void);

__declspec(naked) void FUN_0069587e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0x28
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    eax, dword ptr [ebp]
        push    esi
        xor    ebx, ebx
        mov    esi, eax
        and    esi, 0xfffffffc
        mov    dword ptr [esp + 0x30], ebx
        je    L_5a01
        mov    ecx, eax
        and    ecx, 1
        cmp    cl, 1
        jne    L_58d3
        and    eax, 2
        cmp    al, 2
        mov    dword ptr [ebp], esi
        jne    L_58bf
        cmp    esi, ebx
        je    L_58d3
        push    3
        mov    ecx, esi
        call    FUN_00696dc0
        jmp    L_58d3
L_58bf:
        cmp    esi, ebx
        je    L_58d3
        mov    ecx, esi
        call    FUN_00694ce0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_58d3:
        push    0x38
        mov    dword ptr [ebp], ebx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_5991
        push    edi
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x16]
        push    eax
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x24], ebx
        mov    dword ptr [esp + 0x28], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x76b768
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x76b768
        push    ecx
        push    0x76b768
        lea    ecx, [esp + 0x24]
        call    FUN_005480c0
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x17]
        push    edx
        lea    ecx, [esp + 0x38]
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x34], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x76b768
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x76b768
        push    ecx
        push    0x76b768
        lea    ecx, [esp + 0x30]
        call    FUN_005480c0
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        push    2
        mov    ecx, esi
        mov    dword ptr [esp + 0x40], 0xf
        call    FUN_00694b10
        mov    esi, eax
        pop    edi
        jmp    L_5993
L_5991:
        xor    esi, esi
L_5993:
        push    ebx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_00696ed0
        push    ebx
        push    1
        push    esi
        mov    ecx, ebp
        call    FUN_00696e50
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_00696e30
        lea    ecx, [esp + 0x10]
        call    FUN_00696d30
        lea    ecx, [esp + 0x14]
        call    FUN_00696d30
        mov    ebx, dword ptr [esp + 0x30]
        test    bl, 8
        je    L_59df
        lea    ecx, [esp + 0x24]
        and    ebx, 0xfffffff7
        call    FUN_005cb3d0
L_59df:
        test    bl, 4
        je    L_59e7
        and    ebx, 0xfffffffb
L_59e7:
        test    bl, 2
        je    L_5a01
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        sub    ecx, eax
        push    ecx
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_005e1c30
L_5a01:
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0082db20]
        ret    
    }
}
