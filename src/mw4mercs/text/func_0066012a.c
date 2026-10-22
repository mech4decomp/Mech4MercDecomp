/*
 * FUN_0066012a (extent 0x66012a-0x660314) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_00661e70(void);
extern void __cdecl FUN_006a22a0(void);

__declspec(naked) void FUN_0066012a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x7e6
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795254
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795254
        mov    ebx, ebp
        sub    ebx, 0x795254
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_019b
        cmp    edi, edx
        je    L_018f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_0191
L_018f:
        xor    eax, eax
L_0191:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_019b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795254
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795254
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
        pop    esi
        pop    ebp
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
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        push    esi
        push    edi
        mov    esi, ecx
        call    FUN_00661da0
        lea    edi, [esi + 0x24]
        mov    ecx, edi
        call    FUN_006a22a0
        mov    dword ptr [edi], 0x795284
        pop    edi
        mov    dword ptr [esi], 0x795260
        mov    eax, esi
        pop    esi
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
        mov    eax, 0x7e7
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795290
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795290
        mov    ebx, ebp
        sub    ebx, 0x795290
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_02ab
        cmp    edi, edx
        je    L_029f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_02a1
L_029f:
        xor    eax, eax
L_02a1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_02ab:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795290
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795290
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
        pop    esi
        pop    ebp
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
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
        ret    
    }
}
