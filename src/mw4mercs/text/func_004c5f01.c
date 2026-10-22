/*
 * FUN_004c5f01 (extent 0x4c5f01-0x4c5fed) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);

__declspec(naked) void FUN_004c5f01(void)
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
        sub    esp, 0x38
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00491280
        mov    edi, dword ptr [esi + 0x140]
        mov    ebx, dword ptr [esp + 0x4c]
        push    edi
        push    ebx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], 0
        call    FUN_00491670
        add    edi, 0x18
        push    edi
        add    ebx, 0x18
        lea    eax, [esp + 0x28]
        push    ebx
        push    eax
        call    FUN_004c8460
        mov    edi, dword ptr [esi + 0x144]
        mov    ebx, dword ptr [esp + 0x54]
        add    esp, 0xc
L_5f5d:
        test    edi, edi
        je    L_5f89
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_5f89
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_5f5d
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
        jmp    L_5f5d
L_5f89:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x38
        ret    0xc
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
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
L_5fa7:
        test    esi, esi
        je    L_5fbb
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_5fbb
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x24]
        jmp    L_5fa7
L_5fbb:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
L_5fd1:
        test    esi, esi
        je    L_5fe7
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_5fe7
        mov    eax, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [eax + 0x28]
        jmp    L_5fd1
L_5fe7:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
