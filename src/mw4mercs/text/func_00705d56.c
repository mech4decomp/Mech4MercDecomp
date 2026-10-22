/*
 * FUN_00705d56 (extent 0x705d56-0x705f9c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00705fe0(void);

__declspec(naked) void FUN_00705d56(void)
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
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        call    FUN_00705fe0
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        push    ebp
        push    edi
        mov    edi, ecx
        mov    dl, byte ptr [edi + 0x7c]
        test    dl, dl
        lea    eax, [edi + 0x7c]
        lea    ebp, [edi + 0x1878]
        lea    ecx, [edi + 0x1834]
        mov    dword ptr [edi + 0x1874], 0
        mov    byte ptr [ebp], 0
        mov    byte ptr [ecx], 0
        mov    byte ptr [edi + 0x18b8], 0
        mov    byte ptr [edi + 0x18f8], 0
        mov    byte ptr [edi + 0x1938], 0
        mov    byte ptr [edi + 0x1978], 0
        je    L_5f99
        push    ebx
        push    esi
        je    L_5f8b
L_5dd3:
        cmp    dl, 0x5c
        jne    L_5f8b
        movsx    edx, byte ptr [eax + 1]
        inc    eax
        add    edx, -0x61
        cmp    edx, 0x15
        ja    L_5f81
        xor    ebx, ebx
        mov    bl, byte ptr [edx + 0x705fc0]
        jmp    dword ptr [ebx*4 + 0x705f9c]
        mov    dl, byte ptr [eax + 2]
        add    eax, 2
        test    dl, dl
        mov    esi, ebp
        je    L_5f7e
L_5e0c:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5e0c
        jmp    L_5f7e
        mov    dl, byte ptr [eax + 2]
        add    eax, 2
        test    dl, dl
        mov    esi, ecx
        je    L_5f7e
L_5e35:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5e35
        jmp    L_5f7e
        movsx    edx, byte ptr [eax + 1]
        movsx    esi, byte ptr [eax + 2]
        mov    ebx, dword ptr [edi + 0x1874]
        lea    edx, [edx + edx*4]
        lea    edx, [esi + edx*2 - 0x210]
        lea    esi, [edx + 1]
        add    eax, 4
        cmp    esi, ebx
        jle    L_5e76
        mov    dword ptr [edi + 0x1874], esi
L_5e76:
        shl    edx, 6
        lea    esi, [edx + edi + 0xc34]
        mov    dl, byte ptr [eax]
        test    dl, dl
        je    L_5f7e
L_5e8a:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5e8a
        jmp    L_5f7e
        movsx    edx, byte ptr [eax + 1]
        movsx    esi, byte ptr [eax + 2]
        mov    ebx, dword ptr [edi + 0x1874]
        lea    edx, [edx + edx*4]
        lea    edx, [esi + edx*2 - 0x210]
        lea    esi, [edx + 1]
        add    eax, 4
        cmp    esi, ebx
        jle    L_5ecb
        mov    dword ptr [edi + 0x1874], esi
L_5ecb:
        shl    edx, 6
        lea    esi, [edx + edi + 0x1234]
        mov    dl, byte ptr [eax]
        test    dl, dl
        je    L_5f7e
L_5edf:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5edf
        jmp    L_5f7e
        mov    dl, byte ptr [eax + 2]
        add    eax, 2
        test    dl, dl
        lea    esi, [edi + 0x18b8]
        je    L_5f7e
L_5f08:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5f08
        jmp    L_5f7e
        mov    dl, byte ptr [eax + 2]
        add    eax, 2
        test    dl, dl
        lea    esi, [edi + 0x18f8]
        je    L_5f7e
L_5f2a:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5f2a
        jmp    L_5f7e
        mov    dl, byte ptr [eax + 2]
        add    eax, 2
        test    dl, dl
        lea    esi, [edi + 0x1938]
        je    L_5f7e
L_5f4c:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5f4c
        jmp    L_5f7e
        mov    dl, byte ptr [eax + 2]
        add    eax, 2
        test    dl, dl
        lea    esi, [edi + 0x1978]
        je    L_5f7e
L_5f6e:
        cmp    dl, 0x5c
        je    L_5f7e
        mov    byte ptr [esi], dl
        mov    dl, byte ptr [eax + 1]
        inc    esi
        inc    eax
        test    dl, dl
        jne    L_5f6e
L_5f7e:
        mov    byte ptr [esi], 0
L_5f81:
        mov    dl, byte ptr [eax]
        test    dl, dl
        jne    L_5dd3
L_5f8b:
        mov    dl, byte ptr [eax + 1]
        inc    eax
        test    dl, dl
        jne    L_5dd3
        pop    esi
        pop    ebx
L_5f99:
        pop    edi
        pop    ebp
        ret    
        // jump-table data @ 0x00705F9C (0 relocated pointers)
    }
}
