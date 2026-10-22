/*
 * FUN_004eca0e (extent 0x4eca0e-0x4ecbb1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_004eddf0(void);
extern void __cdecl FUN_004ee3e0(void);
extern void __cdecl FUN_004ee460(void);

__declspec(naked) void FUN_004eca0e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        push    esi
        mov    edi, ecx
        push    eax
        call    FUN_004eddf0
        push    1
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    0x774818
        mov    ecx, esi
        mov    dword ptr [edi], 0x7747c8
        call    FUN_00411bf0
        mov    ebp, dword ptr [esp + 0x18]
        mov    esi, 0x774808
        mov    eax, ebp
        xor    edx, edx
L_ca4b:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_ca6f
        cmp    cl, dl
        je    L_ca6b
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_ca6f
        add    eax, 2
        add    esi, 2
        cmp    cl, dl
        jne    L_ca4b
L_ca6b:
        xor    eax, eax
        jmp    L_ca74
L_ca6f:
        sbb    eax, eax
        sbb    eax, -1
L_ca74:
        cmp    eax, edx
        jne    L_ca80
        mov    dword ptr [edi + 0x34], edx
        jmp    L_cb41
L_ca80:
        mov    esi, 0x7747fc
        mov    eax, ebp
L_ca87:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_caab
        cmp    cl, dl
        je    L_caa7
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_caab
        add    eax, 2
        add    esi, 2
        cmp    cl, dl
        jne    L_ca87
L_caa7:
        xor    eax, eax
        jmp    L_cab0
L_caab:
        sbb    eax, eax
        sbb    eax, -1
L_cab0:
        cmp    eax, edx
        jne    L_cac0
        mov    dword ptr [edi + 0x34], 1
        jmp    L_cb41
L_cac0:
        mov    esi, 0x7747ec
        mov    eax, ebp
L_cac7:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_caeb
        cmp    cl, dl
        je    L_cae7
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_caeb
        add    eax, 2
        add    esi, 2
        cmp    cl, dl
        jne    L_cac7
L_cae7:
        xor    eax, eax
        jmp    L_caf0
L_caeb:
        sbb    eax, eax
        sbb    eax, -1
L_caf0:
        cmp    eax, edx
        jne    L_cafd
        mov    dword ptr [edi + 0x34], 2
        jmp    L_cb41
L_cafd:
        mov    esi, 0x7747dc
        mov    eax, ebp
L_cb04:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_cb28
        cmp    cl, dl
        je    L_cb24
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_cb28
        add    eax, 2
        add    esi, 2
        cmp    cl, dl
        jne    L_cb04
L_cb24:
        xor    eax, eax
        jmp    L_cb2d
L_cb28:
        sbb    eax, eax
        sbb    eax, -1
L_cb2d:
        cmp    eax, edx
        jne    L_cb3a
        mov    dword ptr [edi + 0x34], 3
        jmp    L_cb41
L_cb3a:
        mov    dword ptr [edi + 0x34], 0xffffffff
L_cb41:
        mov    eax, 0xbf800000
        mov    dword ptr [edi + 0x28], eax
        mov    dword ptr [edi + 0x2c], eax
        mov    dword ptr [edi + 0x30], edx
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004ee3e0
        ret    4
        nop    
        nop    
        nop    
        mov    dword ptr [ecx], 0x7747c8
        jmp    FUN_004ee460
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x28], eax
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx + 0x2c], edx
        mov    dword ptr [ecx + 0x30], eax
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
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
