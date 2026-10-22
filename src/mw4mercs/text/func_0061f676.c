/*
 * FUN_0061f676 (extent 0x61f676-0x61f77d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008058b8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0061ef00(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void FUN_0061f676(void)
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
        sub    esp, 8
        push    ebx
        mov    ebx, dword ptr [g_008058b8]
        mov    eax, dword ptr [ebx + 0xc]
        test    eax, eax
        je    L_f776
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_006f3c80
        mov    esi, dword ptr [ebx + 0x14]
        cmp    esi, dword ptr [ebx + 0x18]
        mov    dword ptr [esp + 0x14], eax
        je    L_f6cf
        test    esi, esi
        je    L_f6c3
        mov    dword ptr [esi], eax
L_f6c3:
        add    esi, 4
        mov    dword ptr [ebx + 0x14], esi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    
L_f6cf:
        push    ebp
        push    edi
        mov    edi, dword ptr [ebx + 0x10]
        mov    eax, esi
        sub    eax, edi
        sar    eax, 2
        cmp    eax, 1
        mov    dword ptr [esp + 0x10], 1
        mov    dword ptr [esp + 0x14], eax
        lea    ecx, [esp + 0x10]
        jb    L_f6f4
        lea    ecx, [esp + 0x14]
L_f6f4:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x14], ecx
        je    L_f70e
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        jmp    L_f710
L_f70e:
        xor    ebp, ebp
L_f710:
        mov    edx, dword ptr [esp + 0x1c]
        push    0
        push    edx
        push    ebp
        push    esi
        push    edi
        call    FUN_0061ef00
        add    esp, 0x14
        test    eax, eax
        je    L_f72c
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax], ecx
L_f72c:
        mov    ecx, esi
        sub    ecx, esi
        add    eax, 4
        sar    ecx, 2
        test    ecx, ecx
        mov    edi, eax
        jle    L_f749
        sub    esi, eax
L_f73e:
        mov    edx, dword ptr [esi + edi]
        mov    dword ptr [edi], edx
        add    edi, 4
        dec    ecx
        jne    L_f73e
L_f749:
        mov    eax, dword ptr [ebx + 0x10]
        test    eax, eax
        je    L_f759
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f759:
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [ebx + 0x14], edi
        pop    edi
        lea    ecx, [ebp + eax*4]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebx + 0x10], ebp
        pop    ebp
        pop    esi
        mov    dword ptr [ebx + 0x18], ecx
        pop    ebx
        add    esp, 8
        ret    
L_f776:
        xor    eax, eax
        pop    ebx
        add    esp, 8
        ret    
    }
}
