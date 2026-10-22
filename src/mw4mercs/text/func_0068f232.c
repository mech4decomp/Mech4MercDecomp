/*
 * FUN_0068f232 (extent 0x68f232-0x68f446) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0082db14;
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0068f232(void)
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
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    cl, byte ptr [esp + 4]
        push    ebx
        xor    ebx, ebx
        mov    dword ptr [eax + 8], ebx
        mov    byte ptr [eax + 0x10], cl
        mov    dword ptr [eax + 0xc], ebx
        push    esi
        mov    dword ptr [eax + 0x38], ebx
        mov    ecx, dword ptr [eax + 0xc]
        mov    esi, ecx
        sub    esi, ecx
        mov    dword ptr [eax + 0x10], ebx
        mov    dword ptr [eax + 0x34], 0x798fb8
        sar    esi, 3
        cmp    esi, ebx
        mov    dword ptr [eax + 0x3c], ebx
        mov    dword ptr [eax], 0x798fb0
        mov    edx, dword ptr [eax + 8]
        mov    byte ptr [eax + 0x25], bl
        mov    dword ptr [eax + 0x28], ebx
        mov    byte ptr [eax + 0x27], bl
        mov    dword ptr [eax + 0x14], ebx
        mov    dword ptr [eax + 0x18], ebx
        mov    dword ptr [eax + 0x1c], ebx
        mov    dword ptr [eax + 0x20], ebx
        mov    byte ptr [eax + 0x24], bl
        jle    L_f2a7
        push    edi
L_f293:
        mov    edi, dword ptr [ecx]
        mov    dword ptr [edx], edi
        mov    edi, dword ptr [ecx + 4]
        mov    dword ptr [edx + 4], edi
        add    ecx, 8
        add    edx, 8
        dec    esi
        jne    L_f293
        pop    edi
L_f2a7:
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [eax + 8]
        pop    esi
        mov    byte ptr [eax + 0x26], bl
        mov    word ptr [eax + 0x2c], bx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 0x30], ecx
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
        mov    dl, byte ptr [esp + 0x1c]
        mov    eax, ecx
        mov    cl, byte ptr [esp + 0x1c]
        push    ebx
        xor    ebx, ebx
        mov    dword ptr [eax + 8], ebx
        mov    byte ptr [eax + 0x10], cl
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x14], ecx
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0xc], ebx
        push    esi
        mov    dword ptr [eax + 0x38], ebx
        mov    dword ptr [eax + 0x1c], ecx
        mov    ecx, dword ptr [eax + 0xc]
        mov    byte ptr [eax + 0x27], dl
        mov    edx, dword ptr [esp + 0x18]
        mov    esi, ecx
        sub    esi, ecx
        mov    dword ptr [eax + 0x10], ebx
        mov    dword ptr [eax + 0x18], edx
        mov    edx, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 0x34], 0x798fb8
        sar    esi, 3
        cmp    esi, ebx
        mov    dword ptr [eax + 0x3c], ebx
        mov    dword ptr [eax], 0x798fb0
        mov    dword ptr [eax + 0x20], edx
        mov    edx, dword ptr [eax + 8]
        mov    byte ptr [eax + 0x25], bl
        mov    dword ptr [eax + 0x28], ebx
        mov    byte ptr [eax + 0x24], bl
        jle    L_f34b
        push    edi
L_f337:
        mov    edi, dword ptr [ecx]
        mov    dword ptr [edx], edi
        mov    edi, dword ptr [ecx + 4]
        mov    dword ptr [edx + 4], edi
        add    ecx, 8
        add    edx, 8
        dec    esi
        jne    L_f337
        pop    edi
L_f34b:
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], ecx
        mov    cx, word ptr [esp + 0x10]
        pop    esi
        mov    byte ptr [eax + 0x26], bl
        mov    dword ptr [eax + 0x30], edx
        mov    word ptr [eax + 0x2c], cx
        pop    ebx
        ret    0x1c
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_0082db14]
        push    ebx
        push    esi
        mov    esi, ecx
        xor    ebx, ebx
        cmp    eax, esi
        push    edi
        mov    dword ptr [esi], 0x798fb0
        jne    L_f38d
        mov    dword ptr [g_0082db14], ebx
L_f38d:
        mov    eax, dword ptr [esi + 0x38]
        cmp    eax, ebx
        je    L_f3ae
L_f394:
        cmp    eax, ebx
        mov    edi, dword ptr [eax]
        je    L_f3a8
        mov    dword ptr [eax + 4], ebx
        push    eax
        mov    dword ptr [eax], ebx
        call    FUN_004084e0
        add    esp, 4
L_f3a8:
        cmp    edi, ebx
        mov    eax, edi
        jne    L_f394
L_f3ae:
        mov    dword ptr [esi + 0x38], ebx
        mov    eax, dword ptr [esi + 0xc]
        mov    edx, eax
        sub    edx, eax
        sar    edx, 3
        cmp    edx, ebx
        mov    dword ptr [esi + 0x3c], ebx
        mov    ecx, dword ptr [esi + 8]
        jle    L_f3d8
L_f3c5:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edi
        add    eax, 8
        add    ecx, 8
        dec    edx
        jne    L_f3c5
L_f3d8:
        mov    dword ptr [esi + 0xc], ecx
        mov    eax, dword ptr [esi + 0x38]
        cmp    eax, ebx
        mov    dword ptr [esi + 0x34], 0x798fb8
        je    L_f403
L_f3e9:
        cmp    eax, ebx
        mov    edi, dword ptr [eax]
        je    L_f3fd
        mov    dword ptr [eax + 4], ebx
        push    eax
        mov    dword ptr [eax], ebx
        call    FUN_004084e0
        add    esp, 4
L_f3fd:
        cmp    edi, ebx
        mov    eax, edi
        jne    L_f3e9
L_f403:
        mov    dword ptr [esi + 0x38], ebx
        mov    esi, dword ptr [esi + 8]
        cmp    esi, ebx
        mov    dword ptr [esp + 0xc], esi
        je    L_f41a
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f41a:
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
        nop    
        mov    al, byte ptr [ecx + 0x25]
        test    al, al
        jne    L_f443
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x14], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x18], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x1c], eax
        mov    dword ptr [ecx + 0x20], edx
L_f443:
        ret    0x10
    }
}
