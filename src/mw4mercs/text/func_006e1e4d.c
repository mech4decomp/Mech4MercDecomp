/*
 * FUN_006e1e4d (extent 0x6e1e4d-0x6e2073) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b108;
extern int    g_0076b110;
extern void __cdecl FUN_006e1e30(void);
extern void __cdecl FUN_006e1e40(void);
extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e2b60(void);
extern void __cdecl FUN_006e2bc0(void);

__declspec(naked) void FUN_006e1e4d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 8
        push    esi
        push    edi
        mov    esi, ecx
        lea    edi, [esi + 0x14]
        push    edi
        mov    dword ptr [esp + 0x10], edi
        call    dword ptr [g_0076b110]
        mov    al, byte ptr [esi + 0x38]
        test    al, al
        jne    L_1e79
        push    edi
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        add    esp, 8
        ret    
L_1e79:
        mov    edx, dword ptr [esi + 4]
        dec    edx
        mov    eax, edx
        push    ebx
        xor    ebx, ebx
        test    eax, eax
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esp + 0xc], eax
        jle    L_1ed8
        mov    esi, dword ptr [esi]
        push    ebp
        add    esi, 0x74
L_1e93:
        lea    edi, [esi - 0x74]
        push    esi
        mov    ecx, edi
        call    FUN_006e2b60
        mov    ecx, dword ptr [esi + 8]
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [esi - 0x6c], ecx
        mov    ecx, esi
        mov    dword ptr [esi - 0x70], eax
        lea    eax, [esi - 0x68]
        sub    ecx, edi
        mov    edx, 0x19
L_1eb6:
        mov    ebp, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebp
        add    eax, 4
        dec    edx
        jne    L_1eb6
        mov    edx, dword ptr [esi + 0x70]
        mov    eax, dword ptr [esp + 0x10]
        inc    ebx
        add    esi, 0x74
        cmp    ebx, eax
        mov    dword ptr [edi + 0x70], edx
        jl    L_1e93
        mov    edi, dword ptr [esp + 0x14]
        pop    ebp
L_1ed8:
        push    edi
        call    dword ptr [g_0076b100]
        pop    ebx
        pop    edi
        pop    esi
        add    esp, 8
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
        sub    esp, 0x10
        push    esi
        push    edi
        mov    edi, ecx
        lea    esi, [edi + 0x14]
        push    esi
        mov    dword ptr [esp + 0x18], esi
        call    dword ptr [g_0076b110]
        mov    al, byte ptr [edi + 0x38]
        test    al, al
        jne    L_1f1b
        push    esi
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        add    esp, 0x10
        ret    4
L_1f1b:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        push    ebx
        push    ebp
        jne    L_2007
        mov    eax, dword ptr [edi + 0x48]
        lea    ebp, [eax + 0x32]
        lea    ecx, [ebp*8 + 4]
        push    ecx
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_006e1e30
        add    esp, 4
        test    eax, eax
        je    L_1f84
        lea    esi, [eax + 4]
        mov    dword ptr [eax], ebp
        lea    eax, [ebp - 1]
        test    eax, eax
        mov    dword ptr [esp + 0x14], esi
        jl    L_1f7e
        lea    ebx, [eax + 1]
L_1f5a:
        mov    ecx, esi
        call    FUN_006e2840
        push    0x76b768
        mov    ecx, esi
        mov    dword ptr [esi + 4], 0
        call    FUN_006e2bc0
        add    esi, 8
        dec    ebx
        jne    L_1f5a
        mov    esi, dword ptr [esp + 0x14]
L_1f7e:
        mov    dword ptr [esp + 0x10], esi
        jmp    L_1f8c
L_1f84:
        mov    dword ptr [esp + 0x10], 0
L_1f8c:
        mov    eax, dword ptr [edi + 0x44]
        test    eax, eax
        jle    L_1fc9
        mov    ebx, dword ptr [edi + 0x40]
        mov    esi, dword ptr [esp + 0x10]
        lea    ebp, [ebx + 4]
        sub    ebx, esi
        mov    dword ptr [esp + 0x14], eax
L_1fa3:
        lea    edx, [ebx + esi]
        push    edx
        mov    ecx, esi
        call    FUN_006e2b60
        mov    eax, dword ptr [ebp]
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [esp + 0x14]
        add    ebp, 8
        add    esi, 8
        dec    eax
        mov    dword ptr [esp + 0x14], eax
        jne    L_1fa3
        mov    ebp, dword ptr [esp + 0x18]
L_1fc9:
        mov    ecx, dword ptr [edi + 0x40]
        test    ecx, ecx
        je    L_1ffd
        mov    eax, dword ptr [ecx - 4]
        lea    edx, [ecx - 4]
        lea    esi, [ecx + eax*8]
        dec    eax
        mov    dword ptr [esp + 0x18], edx
        js    L_1ff4
        lea    ebx, [eax + 1]
L_1fe3:
        sub    esi, 8
        mov    ecx, esi
        call    FUN_006e29e0
        dec    ebx
        jne    L_1fe3
        mov    edx, dword ptr [esp + 0x18]
L_1ff4:
        push    edx
        call    FUN_006e1e40
        add    esp, 4
L_1ffd:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x40], ecx
        mov    dword ptr [edi + 0x48], ebp
L_2007:
        mov    edx, dword ptr [edi + 0x40]
        mov    esi, dword ptr [edi + 0x44]
        mov    ebp, dword ptr [esp + 0x24]
        lea    ebx, [edx + esi*8]
        push    ebp
        mov    ecx, ebx
        call    FUN_006e2b60
        mov    ecx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [ebp + 4]
        inc    esi
        push    ecx
        mov    dword ptr [ebx + 4], eax
        mov    dword ptr [edi + 0x44], esi
        call    dword ptr [g_0076b100]
        pop    ebp
        pop    ebx
        pop    edi
        pop    esi
        add    esp, 0x10
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        lea    eax, [esi + 0x14]
        push    eax
        call    dword ptr [g_0076b108]
        xor    eax, eax
        mov    byte ptr [esi + 0x38], al
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0x40], eax
        mov    dword ptr [esi + 0x44], eax
        mov    dword ptr [esi + 0x48], eax
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x34], eax
        mov    eax, esi
        pop    esi
        ret    
    }
}
