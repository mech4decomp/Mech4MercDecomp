/*
 * FUN_004ddf56 (extent 0x4ddf56-0x4de337) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_004dd7c0(void);
extern void __cdecl FUN_004de340(void);
extern void __cdecl FUN_004de350(void);
extern void __cdecl FUN_004df900(void);
extern void __cdecl FUN_004dfbb0(void);

__declspec(naked) void FUN_004ddf56(void)
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_dfb1
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax*8]
        sub    ecx, eax
        dec    eax
        lea    esi, [esi + ecx*4]
        js    L_df9b
        push    edi
        lea    edi, [eax + 1]
L_df87:
        sub    esi, 0x1c
        mov    ecx, esi
        mov    dword ptr [esi], 0x773910
        call    FUN_004dd7c0
        dec    edi
        jne    L_df87
        pop    edi
L_df9b:
        test    bl, 1
        je    L_dfa9
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_dfa9:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_dfb1:
        mov    ecx, esi
        mov    dword ptr [esi], 0x773910
        call    FUN_004dd7c0
        test    bl, 1
        je    L_dfcc
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_dfcc:
        mov    eax, esi
        pop    esi
        pop    ebx
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_e031
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax*8]
        sub    ecx, eax
        dec    eax
        lea    esi, [esi + ecx*4]
        js    L_e01b
        push    edi
        lea    edi, [eax + 1]
L_e007:
        sub    esi, 0x1c
        mov    ecx, esi
        mov    dword ptr [esi], 0x7738f8
        call    FUN_004dd7c0
        dec    edi
        jne    L_e007
        pop    edi
L_e01b:
        test    bl, 1
        je    L_e029
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_e029:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_e031:
        mov    ecx, esi
        mov    dword ptr [esi], 0x7738f8
        call    FUN_004dd7c0
        test    bl, 1
        je    L_e04c
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_e04c:
        mov    eax, esi
        pop    esi
        pop    ebx
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
        sub    esp, 0x1c
        push    ebx
        push    ebp
        mov    ebx, ecx
        mov    ecx, dword ptr [ebx + 0x20]
        mov    eax, dword ptr [ebx + 0x24]
        push    esi
        push    edi
        push    ecx
        push    eax
        push    eax
        mov    byte ptr [ebx + 0x3b74], 0
        mov    byte ptr [ebx + 0x2c], 1
        call    FUN_004dfbb0
        mov    ebp, dword ptr [ebx + 0x34]
        add    esp, 0xc
        test    ebp, ebp
        mov    dword ptr [ebx + 0x24], eax
        je    L_e1a8
        mov    edi, dword ptr [ebx + 0x38]
        add    edi, 0x10
        mov    dword ptr [esp + 0x10], 5
L_e0a1:
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_004c41d0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x77392c
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e0e6
L_e0c2:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e0d7
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_e0d7:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e0c2
L_e0e6:
        mov    eax, dword ptr [esp + 0x10]
        add    edi, 0x1c
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_e0a1
        mov    eax, dword ptr [ebp]
        test    eax, eax
        jle    L_e14e
        mov    edi, dword ptr [ebx + 0x3c]
        add    edi, 0x10
        mov    ebp, eax
L_e103:
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_004c41d0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x77392c
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e148
L_e124:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e139
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_e139:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e124
L_e148:
        add    edi, 0x1c
        dec    ebp
        jne    L_e103
L_e14e:
        mov    eax, dword ptr [ebx + 0x40]
        test    eax, eax
        je    L_e1a8
        lea    edi, [eax + 0x10]
        mov    ebp, 4
L_e15d:
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_004c41d0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x77392c
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e1a2
L_e17e:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e193
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_e193:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e17e
L_e1a2:
        add    edi, 0x1c
        dec    ebp
        jne    L_e15d
L_e1a8:
        lea    eax, [ebx + 0x54]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004df900
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e1e8
L_e1c4:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e1d9
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_e1d9:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e1c4
L_e1e8:
        lea    eax, [ebx + 0x70]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004df900
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e228
L_e204:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e219
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_e219:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e204
L_e228:
        lea    eax, [ebx + 0x8c]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004df900
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e26b
L_e247:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e25c
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_e25c:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e247
L_e26b:
        lea    eax, [ebx + 0xa8]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004df900
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        je    L_e2ae
L_e28a:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        je    L_e29f
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_e29f:
        lea    ecx, [esp + 0x14]
        call    FUN_004de340
        mov    esi, eax
        test    esi, esi
        jne    L_e28a
L_e2ae:
        lea    ecx, [ebx + 0xb4]
        call    FUN_004de350
        lea    esi, [ebx + 0xd0]
        mov    edi, 5
L_e2c4:
        mov    ecx, esi
        call    FUN_004de350
        add    esi, 0x1c
        dec    edi
        jne    L_e2c4
        lea    esi, [ebx + 0x15c]
        mov    edi, 0x212
L_e2dc:
        mov    ecx, esi
        call    FUN_004de350
        add    esi, 0x1c
        dec    edi
        jne    L_e2dc
        lea    eax, [ebx + 0x3b80]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_004c41d0
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x20], 0x773928
        call    FUN_004de340
        test    eax, eax
        je    L_e324
L_e30e:
        lea    ecx, [esp + 0x20]
        call    FUN_00417ad0
        lea    ecx, [esp + 0x20]
        call    FUN_004de340
        test    eax, eax
        jne    L_e30e
L_e324:
        lea    ecx, [ebx + 0x3b54]
        call    FUN_004de350
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    
    }
}
