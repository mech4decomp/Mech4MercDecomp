/*
 * FUN_00621e88 (extent 0x621e88-0x6220ff) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f25c0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);

__declspec(naked) void FUN_00621e88(void)
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
        je    L_20d2
        push    ebp
        push    esi
L_2000:
        mov    esi, dword ptr [edx]
        test    esi, esi
        je    L_20b5
        mov    ebp, dword ptr [esi + 8]
        cmp    ebp, 1
        jne    L_2021
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x24]
        add    eax, ecx
        mov    dword ptr [esi], eax
        jmp    L_20b5
L_2021:
        test    ebp, ebp
        jne    L_2046
        mov    edi, dword ptr [esp + 0x20]
        mov    dl, byte ptr [esi + 0x18]
        cmp    dl, byte ptr [edi]
        jne    L_204a
        mov    ax, word ptr [esi + 0x1a]
        cmp    ax, word ptr [edi + 2]
        jne    L_204a
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x24]
        add    eax, ecx
        mov    dword ptr [esi], eax
        jmp    L_20b5
L_2046:
        mov    edi, dword ptr [esp + 0x20]
L_204a:
        cmp    ebx, -1
        jne    L_209a
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi]
        xor    ebx, ebx
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_20b5
        push    edi
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    edi, eax
        test    edi, edi
        je    L_20b5
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_20b5
        mov    ebx, edi
L_209a:
        test    ebx, ebx
        je    L_20b5
        mov    edx, dword ptr [ebx + 0x4cc]
        inc    edx
        neg    ebp
        cmp    ebp, edx
        jne    L_20b5
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esp + 0x24]
        add    ecx, eax
        mov    dword ptr [esi], ecx
L_20b5:
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x10]
        add    edx, 4
        cmp    edx, eax
        mov    dword ptr [esp + 0x1c], edx
        jne    L_2000
        mov    ecx, dword ptr [esp + 0x14]
        pop    esi
        pop    ebp
L_20d2:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        test    al, al
        pop    edi
        pop    ebx
        je    L_20f9
        mov    byte ptr [ecx + 0x2ec], 1
L_20f9:
        add    esp, 8
        ret    0xc
    }
}
