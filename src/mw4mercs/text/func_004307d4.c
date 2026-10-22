/*
 * FUN_004307d4 (extent 0x4307d4-0x430889) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b2210;
extern void __cdecl FUN_00491620(void);

__declspec(naked) void FUN_004307d4(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        lea    eax, [ecx + 0x2c]
        je    L_07ee
        lea    eax, [ecx + 0x70]
L_07ee:
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        lea    eax, [ecx + 0x24]
        je    L_080e
        lea    eax, [ecx + 0x68]
L_080e:
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
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        push    edi
        lea    eax, [esi + 0x2c]
        push    eax
        lea    edi, [esi + 0x24]
        push    ebx
        mov    ecx, edi
        call    FUN_00491620
        mov    eax, dword ptr [g_007b2210]
        test    eax, eax
        jne    L_0848
        and    dword ptr [edi + 4], 0xffffc3ff
L_0848:
        lea    ecx, [esi + 0x70]
        push    ecx
        push    ebx
        lea    ecx, [esi + 0x68]
        call    FUN_00491620
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_086e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_086e:
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        shl    eax, 5
        add    eax, edx
        ret    4
        nop    
        mov    eax, dword ptr [ecx + 0xa4]
        ret    4
    }
}
