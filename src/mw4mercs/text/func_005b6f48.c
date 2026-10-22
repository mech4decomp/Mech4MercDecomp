/*
 * FUN_005b6f48 (extent 0x5b6f48-0x5b7044) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005b6f90(void);

__declspec(naked) void FUN_005b6f48(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi + 0x78]
        mov    esi, ecx
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [eax + 0x28]
        mov    edx, dword ptr [eax + 0x2c]
        push    1
        push    1
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005b6f90
        xor    ecx, ecx
        cmp    eax, -1
        setge    cl
        mov    dword ptr [edi + 0x174], eax
        pop    edi
        pop    esi
        mov    eax, ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        lea    edx, [eax + 1]
        cmp    edx, 4
        mov    eax, dword ptr [esp + 8]
        ja    L_7014
        jmp    dword ptr [edx*4 + 0x5b7044]
        or    eax, 0xffffffff
        ret    0x10
        mov    edx, dword ptr [ecx + 0xa4]
        sub    edx, eax
        js    L_7014
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        je    L_6fc5
        mov    dword ptr [ecx + 0xa4], edx
L_6fc5:
        xor    eax, eax
        ret    0x10
        mov    edx, dword ptr [ecx + 0xa8]
        sub    edx, eax
        js    L_7014
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        je    L_6fe2
        mov    dword ptr [ecx + 0xa8], edx
L_6fe2:
        mov    eax, 1
        ret    0x10
        mov    edx, dword ptr [ecx + 0xac]
        sub    edx, eax
        js    L_7014
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        je    L_7002
        mov    dword ptr [ecx + 0xac], edx
L_7002:
        mov    eax, 2
        ret    0x10
        mov    edx, dword ptr [ecx + 0xb0]
        sub    edx, eax
        jns    L_7026
L_7014:
        mov    dl, byte ptr [esp + 0xc]
        test    dl, dl
        je    L_703c
        mov    edx, dword ptr [ecx + 0xb0]
        sub    edx, eax
        js    L_703c
L_7026:
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        je    L_7034
        mov    dword ptr [ecx + 0xb0], edx
L_7034:
        mov    eax, 3
        ret    0x10
L_703c:
        mov    eax, 0xfffffffe
        ret    0x10
        // jump-table data @ 0x005B7044 (0 relocated pointers)
    }
}
