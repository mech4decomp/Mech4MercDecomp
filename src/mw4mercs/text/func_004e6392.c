/*
 * FUN_004e6392 (extent 0x4e6392-0x4e646c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc76c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004e6392(void)
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
        push    ecx
        mov    eax, dword ptr [g_007dc76c]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax]
        push    4
        lea    eax, [esp + 0xc]
        mov    dword ptr [esp + 0xc], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        lea    ecx, [edi + 0x30]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov    edx, dword ptr [esi]
        add    esp, 8
        push    4
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x4c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    edi, 0x50
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x7740bc
        mov    eax, dword ptr [esi + 0x30]
        test    eax, eax
        je    L_6463
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6463
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6463:
        mov    ecx, esi
        call    FUN_00415380
        pop    esi
        ret    
    }
}
