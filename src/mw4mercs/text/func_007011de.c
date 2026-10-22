/*
 * FUN_007011de (extent 0x7011de-0x70126d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00701270(void);
extern void __cdecl FUN_007012b0(void);

__declspec(naked) void FUN_007011de(void)
{
    __asm {
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [ecx + 4]
        test    esi, esi
        jne    L_11f1
        mov    eax, 4
        pop    esi
        pop    ecx
        ret    
L_11f1:
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 4]
        push    ecx
        push    esi
        call    dword ptr [eax + 0x18]
        cmp    dword ptr [esp + 4], 4
        jne    L_1209
        mov    edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x1c]
L_1209:
        mov    eax, dword ptr [esp + 4]
        pop    esi
        pop    ecx
        ret    
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_1225
        mov    dl, byte ptr [ecx + 0xc]
        test    dl, dl
        je    L_1225
        mov    edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x20]
L_1225:
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [ecx + 8]
        and    eax, 0xf00
        cmp    eax, 0x200
        je    L_125d
        cmp    eax, 0x300
        jne    L_1268
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_00701270
        xor    eax, eax
        ret    8
L_125d:
        mov    edx, dword ptr [esp + 4]
        push    ecx
        push    edx
        call    FUN_007012b0
L_1268:
        xor    eax, eax
        ret    8
    }
}
