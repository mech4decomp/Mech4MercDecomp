/*
 * FUN_0050dd62 (extent 0x50dd62-0x50de41) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0050d690(void);
extern void __cdecl FUN_0050d7f0(void);
extern void __cdecl FUN_0050d860(void);
extern void __cdecl FUN_0050d8d0(void);

__declspec(naked) void FUN_0050dd62(void)
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
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 4]
        push    edi
        push    eax
        push    ebx
        call    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esi + 0x10]
        push    0
        push    0
        lea    edi, [ecx + eax*4]
        mov    eax, dword ptr [edi]
        push    edx
        push    ebx
        push    eax
        call    FUN_0050d860
        add    esp, 0x1c
        cmp    eax, -1
        jne    L_dda7
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    
L_dda7:
        mov    ecx, dword ptr [edi]
        push    eax
        push    ecx
        call    FUN_0050d7f0
        add    esp, 8
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 4]
        push    edi
        push    eax
        push    ebx
        call    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esi + 0x10]
        push    0
        push    0
        lea    edi, [ecx + eax*4]
        mov    eax, dword ptr [edi]
        push    edx
        push    ebx
        push    eax
        call    FUN_0050d860
        add    esp, 0x1c
        cmp    eax, -1
        jne    L_ddf7
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    
L_ddf7:
        mov    ecx, dword ptr [edi]
        push    eax
        push    ecx
        call    FUN_0050d690
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebx
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
        mov    eax, dword ptr [esp + 4]
        push    edi
        mov    edi, dword ptr [eax + 4]
        test    edi, edi
        jle    L_de3f
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [eax]
L_de29:
        mov    eax, dword ptr [esi]
        push    ebx
        push    ebp
        push    eax
        call    FUN_0050d8d0
        add    esp, 0xc
        add    esi, 4
        dec    edi
        jne    L_de29
        pop    esi
        pop    ebp
        pop    ebx
L_de3f:
        pop    edi
        ret    
    }
}
