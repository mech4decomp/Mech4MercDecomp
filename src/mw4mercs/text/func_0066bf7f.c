/*
 * FUN_0066bf7f (extent 0x66bf7f-0x66c313) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f27b8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0066bfa0(void);
extern void __cdecl FUN_0066c150(void);
extern void __cdecl FUN_0066c1d0(void);
extern void __cdecl FUN_0066c320(void);
extern void __cdecl FUN_0066c370(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0066bf7f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_0066c150
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_0066bfa0
        ret    4
        nop    
        nop    
        nop    
        sub    esp, 0x84
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x90]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x18]
        mov    edx, dword ptr [esi]
        push    0x64
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    0x65
        mov    ecx, esi
        call    dword ptr [edx + 0x1c]
        mov    eax, dword ptr [esp + 0x2c]
        cmp    eax, 1
        jne    L_c051
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        jne    L_c13c
        mov    eax, dword ptr [g_007f27b8]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [esp + 0x3c]
        inc    ecx
        push    ecx
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        mov    dword ptr [edi], ebx
        call    FUN_006f49a0
        mov    edx, dword ptr [esp + 0x3c]
        push    0
        inc    edx
        push    edx
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_0041e690
        mov    ecx, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    FUN_0066c320
        lea    ecx, [esp + 0xc]
        mov    bl, al
        call    FUN_0041e710
        pop    edi
        pop    esi
        mov    al, bl
        pop    ebx
        add    esp, 0x84
        ret    4
L_c051:
        cmp    eax, 2
        jne    L_c13c
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        jne    L_c0cd
        mov    ecx, dword ptr [g_007f27b8]
        push    ecx
        call    FUN_006f4950
        mov    edx, dword ptr [esp + 0x3c]
        inc    edx
        push    edx
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        mov    dword ptr [edi], ebx
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x3c]
        push    0
        inc    eax
        push    eax
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_0041e690
        mov    eax, dword ptr [esp + 0x3c]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        lea    edx, [esp + 0xc]
        push    edx
        mov    ecx, edi
        call    FUN_0066c370
        lea    ecx, [esp + 0xc]
        mov    bl, al
        call    FUN_0041e710
        pop    edi
        pop    esi
        mov    al, bl
        pop    ebx
        add    esp, 0x84
        ret    4
L_c0cd:
        cmp    eax, 1
        jne    L_c13c
        mov    eax, dword ptr [g_007f27b8]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [esp + 0x3c]
        inc    ecx
        push    ecx
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        mov    dword ptr [edi], ebx
        call    FUN_006f49a0
        mov    edx, dword ptr [esp + 0x3c]
        push    0
        inc    edx
        push    edx
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_0041e690
        mov    ecx, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    FUN_0066c1d0
        lea    ecx, [esp + 0xc]
        mov    bl, al
        call    FUN_0041e710
        pop    edi
        pop    esi
        mov    al, bl
        pop    ebx
        add    esp, 0x84
        ret    4
L_c13c:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x84
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    1
        lea    ecx, [esp + 0xf]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x13], 0
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [edi + 8]
        mov    ecx, dword ptr [edi + 4]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [edi + 0xc]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, dword ptr [edi + 0x14]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [edi + 0x1c]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x28]
        mov    ecx, dword ptr [edi + 0x24]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x30]
        mov    ecx, dword ptr [edi + 0x2c]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        mov    al, 1
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        call    dword ptr [eax + 4]
        cmp    byte ptr [eax], 0
        je    L_c1f5
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    4
L_c1f5:
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        mov    ecx, dword ptr [esi + 0x10]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi]
        sub    ebx, ecx
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ebp, eax
        cmp    dword ptr [ebp], 2
        mov    dword ptr [edi + 4], ebp
        je    L_c224
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    4
L_c224:
        cmp    dword ptr [ebp + 4], 1
        je    L_c236
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    4
L_c236:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x24], eax
        add    eax, ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    dword ptr [edi + 0xc], eax
        mov    eax, dword ptr [ebp + 0x1c]
        mov    dword ptr [esp + 0x10], eax
        add    eax, ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    dword ptr [edi + 0x14], eax
        mov    eax, dword ptr [ebp + 0x20]
        mov    dword ptr [esp + 0x14], eax
        add    eax, ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    dword ptr [edi + 0x1c], eax
        mov    eax, dword ptr [ebp + 0x24]
        mov    dword ptr [esp + 0x18], eax
        add    eax, ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    dword ptr [edi + 0x24], eax
        mov    eax, dword ptr [ebp + 0x28]
        mov    dword ptr [esp + 0x1c], eax
        add    eax, ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ebp, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [esi]
        mov    dword ptr [edi + 0x2c], eax
        lea    eax, [ebx + ebp]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, eax
        sub    ecx, ebx
        mov    dword ptr [edi + 8], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, ecx
        sub    edx, eax
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x10], edx
        mov    edx, eax
        sub    edx, ecx
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [edi + 0x18], edx
        mov    edx, ecx
        sub    edx, eax
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [edi + 0x20], edx
        mov    edx, eax
        sub    edx, ecx
        mov    dword ptr [edi + 0x28], edx
        sub    ebp, eax
        mov    dword ptr [edi + 0x30], ebp
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    4
    }
}
