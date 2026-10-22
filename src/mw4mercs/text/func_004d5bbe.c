/*
 * FUN_004d5bbe (extent 0x4d5bbe-0x4d5d17) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004d5bbe(void)
{
    __asm {
        nop    
        nop    
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5bd2
        int 3    
L_5bd2:
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
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5bf2
        int 3    
L_5bf2:
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
        mov    eax, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        push    edi
        push    eax
        mov    esi, ecx
        push    ebx
        call    FUN_004151c0
        mov    ebp, dword ptr [esp + 0x20]
        xor    ecx, ecx
        cmp    ebx, 0x1c1
        sete    cl
        dec    ecx
        and    edi, ecx
        test    ebp, ebp
        jne    L_5c5d
        test    edi, edi
        je    L_5c5d
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [edi + 0x18]
        pop    edi
        mov    dword ptr [esi + 0x14], eax
        mov    byte ptr [esi + 0x1c], 0
        mov    dword ptr [esi + 0x18], edx
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
L_5c5d:
        test    ebp, ebp
        mov    byte ptr [esi + 0x1c], 1
        mov    dword ptr [esi + 0x14], 0
        jle    L_5c82
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, ebp
L_5c72:
        mov    eax, dword ptr [ecx]
        cmp    eax, dword ptr [esi + 0x14]
        jle    L_5c7c
        mov    dword ptr [esi + 0x14], eax
L_5c7c:
        add    ecx, 0xc
        dec    edx
        jne    L_5c72
L_5c82:
        test    edi, edi
        je    L_5c91
        mov    eax, dword ptr [edi + 0x14]
        cmp    dword ptr [esi + 0x14], eax
        jge    L_5c91
        mov    dword ptr [esi + 0x14], eax
L_5c91:
        mov    eax, dword ptr [esi + 0x14]
        lea    ecx, [eax + eax*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        test    edi, edi
        mov    dword ptr [esi + 0x18], eax
        je    L_5ce3
        mov    ebx, dword ptr [edi + 0x14]
        test    ebx, ebx
        jle    L_5ce3
        mov    edx, dword ptr [edi + 0x18]
        mov    ecx, eax
        sub    edx, eax
        mov    dword ptr [esp + 0x1c], ebx
L_5cbc:
        lea    edi, [edx + ecx]
        mov    ebp, dword ptr [edi]
        mov    ebx, ecx
        mov    dword ptr [ebx], ebp
        mov    ebp, dword ptr [edi + 4]
        mov    dword ptr [ebx + 4], ebp
        mov    edi, dword ptr [edi + 8]
        mov    dword ptr [ebx + 8], edi
        mov    edi, dword ptr [esp + 0x1c]
        add    ecx, 0xc
        dec    edi
        mov    dword ptr [esp + 0x1c], edi
        jne    L_5cbc
        mov    ebp, dword ptr [esp + 0x20]
L_5ce3:
        test    ebp, ebp
        jle    L_5d0e
        mov    ecx, dword ptr [esp + 0x24]
        mov    edi, ebp
L_5ced:
        mov    edx, dword ptr [ecx]
        lea    edx, [edx + edx*2]
        mov    ebx, ecx
        mov    ebp, dword ptr [ebx]
        lea    edx, [eax + edx*4 - 0xc]
        mov    dword ptr [edx], ebp
        mov    ebp, dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebx + 8]
        mov    dword ptr [edx + 4], ebp
        add    ecx, 0xc
        dec    edi
        mov    dword ptr [edx + 8], ebx
        jne    L_5ced
L_5d0e:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
    }
}
