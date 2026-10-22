/*
 * FUN_00619d40 (extent 0x619d40-0x619f9a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00599800(void);
extern void __cdecl FUN_00619ee0(void);

__declspec(naked) void FUN_00619d40(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_9d57
        xor    eax, eax
        ret    8
L_9d57:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_9d86
        xor    eax, eax
        ret    8
L_9d86:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_9db6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9dde
        test    cl, cl
        je    L_9dda
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9dde
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_9db6
L_9dda:
        xor    eax, eax
        jmp    L_9de3
L_9dde:
        sbb    eax, eax
        sbb    eax, -1
L_9de3:
        test    eax, eax
        jne    L_9dee
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_9dee:
        mov    esi, edi
        mov    eax, ebp
L_9df2:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9e1a
        test    cl, cl
        je    L_9e16
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9e1a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_9df2
L_9e16:
        xor    eax, eax
        jmp    L_9e1f
L_9e1a:
        sbb    eax, eax
        sbb    eax, -1
L_9e1f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_9e55:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9e7d
        test    cl, cl
        je    L_9e79
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9e7d
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_9e55
L_9e79:
        xor    eax, eax
        jmp    L_9e82
L_9e7d:
        sbb    eax, eax
        sbb    eax, -1
L_9e82:
        test    eax, eax
        jne    L_9e8d
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_9e8d:
        mov    esi, edi
        mov    eax, ebp
L_9e91:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9eb9
        test    cl, cl
        je    L_9eb5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_9eb9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_9e91
L_9eb5:
        xor    eax, eax
        jmp    L_9ebe
L_9eb9:
        sbb    eax, eax
        sbb    eax, -1
L_9ebe:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, ecx
        push    0x18
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_004084d0
        mov    edi, dword ptr [esp + 0x1c]
        mov    ebp, eax
        lea    ecx, [ebp + 0x10]
        xor    esi, esi
        add    esp, 4
        cmp    ecx, esi
        je    L_9f0d
        lea    eax, [edi + 0x10]
        push    eax
        call    FUN_00599800
L_9f0d:
        mov    eax, dword ptr [edi + 0xc]
        cmp    eax, esi
        mov    cl, byte ptr [edi]
        mov    edx, dword ptr [esp + 0x1c]
        mov    byte ptr [ebp], cl
        mov    dword ptr [ebp + 8], esi
        mov    dword ptr [ebp + 0xc], esi
        mov    dword ptr [ebp + 4], edx
        je    L_9f32
        push    ebp
        push    eax
        mov    ecx, ebx
        call    FUN_00619ee0
        mov    dword ptr [ebp + 0xc], eax
L_9f32:
        mov    edi, dword ptr [edi + 8]
        cmp    edi, esi
        mov    ebx, ebp
        je    L_9f90
L_9f3b:
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        lea    ecx, [esi + 0x10]
        xor    edx, edx
        add    esp, 4
        cmp    ecx, edx
        je    L_9f62
        mov    eax, dword ptr [edi + 0x10]
        cmp    eax, edx
        mov    dword ptr [ecx], eax
        je    L_9f5c
        inc    byte ptr [eax - 1]
L_9f5c:
        mov    al, byte ptr [edi + 0x14]
        mov    byte ptr [ecx + 4], al
L_9f62:
        mov    eax, dword ptr [edi + 0xc]
        cmp    eax, edx
        mov    cl, byte ptr [edi]
        mov    dword ptr [esi + 8], edx
        mov    byte ptr [esi], cl
        mov    dword ptr [esi + 0xc], edx
        mov    dword ptr [ebx + 8], esi
        mov    dword ptr [esi + 4], ebx
        je    L_9f87
        mov    ecx, dword ptr [esp + 0x10]
        push    esi
        push    eax
        call    FUN_00619ee0
        mov    dword ptr [esi + 0xc], eax
L_9f87:
        mov    edi, dword ptr [edi + 8]
        test    edi, edi
        mov    ebx, esi
        jne    L_9f3b
L_9f90:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
    }
}
