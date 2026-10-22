/*
 * FUN_00621dc1 (extent 0x621dc1-0x621fcb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f25c0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00621930(void);

__declspec(naked) void FUN_00621dc1(void)
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
        nop    
        mov    edx, dword ptr [ecx]
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [ecx + 4]
        cmp    edx, esi
        push    edi
        je    L_1e17
        mov    edi, dword ptr [esp + 0x1c]
        mov    ebx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x14]
L_1de9:
        mov    eax, dword ptr [edx]
        test    eax, eax
        je    L_1dfe
        cmp    dword ptr [eax + 4], ebp
        jne    L_1dfe
        cmp    dword ptr [eax + 8], ebx
        jne    L_1dfe
        cmp    dword ptr [eax + 0xc], edi
        je    L_1e0c
L_1dfe:
        add    edx, 4
        cmp    edx, esi
        jne    L_1de9
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_1e0c:
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_00621930
L_1e17:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
        nop    
        nop    
        push    ebx
        push    ebp
        push    esi
        mov    ebp, ecx
        mov    edx, dword ptr [ebp]
        push    edi
        mov    edi, dword ptr [ebp + 4]
        cmp    edx, edi
        je    L_1e81
        mov    ecx, dword ptr [esp + 0x20]
        mov    esi, dword ptr [esp + 0x18]
L_1e38:
        mov    eax, dword ptr [edx]
        test    eax, eax
        je    L_1e66
        mov    ebx, dword ptr [eax + 4]
        cmp    ebx, dword ptr [esp + 0x14]
        jne    L_1e66
        mov    bl, byte ptr [eax + 0x18]
        cmp    bl, byte ptr [esi]
        jne    L_1e66
        mov    bx, word ptr [eax + 0x1a]
        cmp    bx, word ptr [esi + 2]
        jne    L_1e66
        mov    ebx, dword ptr [esp + 0x1c]
        cmp    dword ptr [eax + 8], ebx
        jne    L_1e66
        cmp    dword ptr [eax + 0xc], ecx
        je    L_1e74
L_1e66:
        add    edx, 4
        cmp    edx, edi
        jne    L_1e38
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
L_1e74:
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [eax + 0x14]
        push    ecx
        mov    ecx, ebp
        call    FUN_00621930
L_1e81:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [esp + 0xc]
        lea    edx, [eax + eax*2 + 6]
        mov    edx, dword ptr [ecx + edx*4]
        lea    eax, [eax + eax*2]
        mov    eax, dword ptr [ecx + eax*4 + 0x1c]
        push    ebx
        or    ebx, 0xffffffff
        cmp    edx, eax
        push    edi
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 8], eax
        je    L_1f9e
        push    ebp
        push    esi
L_1ec0:
        mov    esi, dword ptr [edx]
        test    esi, esi
        je    L_1f81
        mov    ecx, dword ptr [esp + 0x24]
        cmp    dword ptr [esi + 0xc], ecx
        jne    L_1f81
        mov    ebp, dword ptr [esi + 8]
        cmp    ebp, 1
        jne    L_1eee
        mov    eax, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x28]
        add    eax, edx
        mov    dword ptr [esi], eax
        jmp    L_1f81
L_1eee:
        test    ebp, ebp
        jne    L_1f13
        mov    edi, dword ptr [esp + 0x20]
        mov    al, byte ptr [esi + 0x18]
        cmp    al, byte ptr [edi]
        jne    L_1f17
        mov    cx, word ptr [esi + 0x1a]
        cmp    cx, word ptr [edi + 2]
        jne    L_1f17
        mov    eax, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x28]
        add    eax, edx
        mov    dword ptr [esi], eax
        jmp    L_1f81
L_1f13:
        mov    edi, dword ptr [esp + 0x20]
L_1f17:
        cmp    ebx, -1
        jne    L_1f66
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi]
        xor    ebx, ebx
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_1f81
        push    edi
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    edi, eax
        test    edi, edi
        je    L_1f81
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_1f81
        mov    ebx, edi
L_1f66:
        test    ebx, ebx
        je    L_1f81
        mov    edx, dword ptr [ebx + 0x4cc]
        inc    edx
        neg    ebp
        cmp    ebp, edx
        jne    L_1f81
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esp + 0x28]
        add    ecx, eax
        mov    dword ptr [esi], ecx
L_1f81:
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x10]
        add    edx, 4
        cmp    edx, eax
        mov    dword ptr [esp + 0x1c], edx
        jne    L_1ec0
        mov    ecx, dword ptr [esp + 0x14]
        pop    esi
        pop    ebp
L_1f9e:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        test    al, al
        pop    edi
        pop    ebx
        je    L_1fc5
        mov    byte ptr [ecx + 0x2ec], 1
L_1fc5:
        add    esp, 8
        ret    0x10
    }
}
