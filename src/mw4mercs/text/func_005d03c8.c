/*
 * FUN_005d03c8 (extent 0x5d03c8-0x5d044c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0080daa4;
extern void __cdecl FUN_00416130(void);

__declspec(naked) void FUN_005d03c8(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_03e4
        mov    ecx, dword ptr [g_0080daa4]
        push    eax
        call    FUN_00416130
L_03e4:
        xor    al, al
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x4b0]
        mov    ebx, dword ptr [edi + 0x4b4]
        cmp    esi, ebx
        je    L_041e
L_0405:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_0417
        mov    ecx, dword ptr [g_0080daa4]
        push    eax
        call    FUN_00416130
L_0417:
        add    esi, 4
        cmp    esi, ebx
        jne    L_0405
L_041e:
        mov    eax, dword ptr [edi + 0x4b4]
        mov    edx, dword ptr [edi + 0x4b0]
        mov    ecx, eax
        sub    ecx, eax
        sar    ecx, 2
        test    ecx, ecx
        jle    L_0442
L_0435:
        mov    esi, dword ptr [eax]
        mov    dword ptr [edx], esi
        add    eax, 4
        add    edx, 4
        dec    ecx
        jne    L_0435
L_0442:
        mov    dword ptr [edi + 0x4b4], edx
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
