/*
 * FUN_005b6e41 (extent 0x5b6e41-0x5b6ed8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f210c;
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004e7150(void);
extern void __cdecl FUN_004e7200(void);

__declspec(naked) void FUN_005b6e41(void)
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
        mov    eax, dword ptr [g_007f210c]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004e7150
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0xb4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0xb8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0xbc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    edi, 0xc0
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        lea    ecx, [esi + 0x9c]
        mov    dword ptr [esi], 0x7867e8
        call    FUN_00417980
        lea    ecx, [esi + 0x94]
        call    FUN_00417980
        mov    ecx, esi
        call    FUN_004e7200
        pop    esi
        ret    
    }
}
