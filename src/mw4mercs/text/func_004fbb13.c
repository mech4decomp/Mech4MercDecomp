/*
 * FUN_004fbb13 (extent 0x4fbb13-0x4fbc24) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00501470(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_00767460(void);

__declspec(naked) void FUN_004fbb13(void)
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x1c]
        push    eax
        add    ecx, dword ptr [esp + 8]
        call    FUN_00767430
        ret    8
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_00767460
        add    esp, 0xc
        test    al, al
        jne    L_bb81
        mov    ecx, dword ptr [esp + 0xc]
        push    esi
        call    FUN_00767430
        mov    al, 1
        pop    esi
        ret    0x10
L_bb81:
        xor    al, al
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        add    eax, edx
        push    eax
        call    FUN_00767430
        ret    8
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_bbeb
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    al, 1
        pop    esi
        ret    0x10
L_bbeb:
        xor    al, al
        pop    esi
        ret    0x10
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x775d6c
        call    FUN_00501470
        test    byte ptr [esp + 8], 1
        je    L_bc1e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_bc1e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
