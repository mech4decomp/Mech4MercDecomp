/*
 * FUN_00544417 (extent 0x544417-0x5444dc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00534650(void);

__declspec(naked) void FUN_00544417(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        push    esi
        sub    edx, eax
        mov    esi, dword ptr [ecx + edx*8 + 0x3580]
        test    esi, esi
        push    edi
        lea    edi, [ecx + edx*8]
        je    L_4476
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esi + 8], 0xffffffec
        call    dword ptr [edx + 4]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        test    esi, esi
        je    L_446c
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_446c:
        mov    dword ptr [edi + 0x3580], 0
L_4476:
        mov    ecx, dword ptr [edi + 0x3578]
        test    ecx, ecx
        je    L_4490
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [edi + 0x3578], 0
L_4490:
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        sub    edx, eax
        push    esi
        mov    esi, dword ptr [ecx + edx*8 + 0x3580]
        test    esi, esi
        jne    L_44c6
        push    eax
        call    FUN_00534650
        pop    esi
        ret    4
L_44c6:
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    dword ptr [esi + 8], 0xffffffec
        mov    eax, esi
        pop    esi
        ret    4
    }
}
