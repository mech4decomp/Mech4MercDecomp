/*
 * FUN_00613a65 (extent 0x613a65-0x613d76) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416d00(void);

__declspec(naked) void FUN_00613a65(void)
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
        sub    esp, 0x18
        push    esi
        add    ecx, 0x10
        push    edi
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        mov    eax, dword ptr [esp + 0x1c]
        add    eax, 0x18
        push    eax
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0x10], 0x779cdc
        call    FUN_0040f060
        lea    ecx, [esp + 0xc]
        call    FUN_00416d00
        test    eax, eax
        mov    edi, dword ptr [esp + 0x24]
        je    L_3b23
        mov    esi, dword ptr [g_0076b2ac]
L_3ab2:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        push    edi
        call    esi
        add    esp, 8
        test    eax, eax
        lea    ecx, [esp + 0xc]
        je    L_3b6a
        call    FUN_00416ca0
        lea    ecx, [esp + 0xc]
        call    FUN_00416d00
        test    eax, eax
        je    L_3b16
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [edx + 0x18]
        test    eax, eax
        mov    dword ptr [esp + 0x24], eax
        je    L_3aed
        inc    byte ptr [eax - 1]
L_3aed:
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        je    L_3b16
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3b16
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3b16:
        lea    ecx, [esp + 0xc]
        call    FUN_00416d00
        test    eax, eax
        jne    L_3ab2
L_3b23:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_3b3e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3b3e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3b3e:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        test    edi, edi
        je    L_3b60
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3b60
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3b60:
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x18
        ret    4
L_3b6a:
        call    FUN_00416d00
        mov    esi, eax
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_3b8c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3b8c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3b8c:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        test    edi, edi
        je    L_3bae
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3bae
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3bae:
        pop    edi
        mov    eax, esi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        add    ecx, 0x10
        push    edi
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x779cdc
        call    FUN_00416cc0
        mov    ebp, dword ptr [esp + 0x28]
        mov    edi, eax
        test    edi, edi
        je    L_3c38
L_3bef:
        mov    esi, dword ptr [edi + 0x1c]
        test    esi, esi
        je    L_3bf9
        inc    byte ptr [esi - 1]
L_3bf9:
        push    ebp
        push    esi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    esi, esi
        je    L_3c25
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3c25
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3c25:
        test    bl, bl
        lea    ecx, [esp + 0x10]
        jne    L_3c66
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_3bef
L_3c38:
        lea    ecx, [esp + 0x10]
        call    FUN_00416c60
        test    ebp, ebp
        je    L_3c5a
        mov    cl, byte ptr [ebp - 1]
        lea    eax, [ebp - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3c5a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3c5a:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
        ret    4
L_3c66:
        call    FUN_00416c60
        test    ebp, ebp
        je    L_3c84
        mov    cl, byte ptr [ebp - 1]
        lea    eax, [ebp - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3c84
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3c84:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
        sub    esp, 0x18
        push    ebx
        push    ebp
        push    esi
        add    ecx, 0x10
        push    edi
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x779cdc
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00416cc0
        test    eax, eax
        mov    edi, dword ptr [esp + 0x2c]
        je    L_3d17
        mov    ebp, dword ptr [g_0076b2ac]
L_3ccb:
        mov    esi, dword ptr [eax + 0x1c]
        test    esi, esi
        je    L_3cd5
        inc    byte ptr [esi - 1]
L_3cd5:
        push    edi
        push    esi
        call    ebp
        add    esp, 8
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    esi, esi
        je    L_3cfd
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3cfd
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3cfd:
        test    bl, bl
        jne    L_3d46
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416cc0
        test    eax, eax
        jne    L_3ccb
L_3d17:
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        test    edi, edi
        je    L_3d39
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3d39
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3d39:
        pop    edi
        pop    esi
        pop    ebp
        or    eax, 0xffffffff
        pop    ebx
        add    esp, 0x18
        ret    4
L_3d46:
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        test    edi, edi
        je    L_3d68
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3d68
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3d68:
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    4
    }
}
