/*
 * FUN_004ed577 (extent 0x4ed577-0x4ed65a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004ed9c0(void);

__declspec(naked) void FUN_004ed577(void)
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
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x24], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x28], eax
        xor    eax, eax
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi], 0x774928
        mov    eax, esi
        pop    esi
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004ed9c0
        test    byte ptr [esp + 8], 1
        je    L_d5d8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_d5d8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x24], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x28], eax
        mov    eax, dword ptr [esp + 0x14]
        lea    ecx, [esi + 0x34]
        xor    ebx, ebx
        mov    dword ptr [ecx], ebx
        mov    dword ptr [esi + 0x38], ebx
        push    eax
        mov    dword ptr [esi], 0x774928
        mov    dword ptr [esi + 0x10], edx
        call    FUN_00412780
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        mov    al, 1
        mov    byte ptr [esi + 0x2c], al
        mov    byte ptr [esi + 0x2e], al
        mov    eax, 0x3f800000
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x24], eax
        mov    byte ptr [esi + 0x2f], bl
        mov    byte ptr [esi + 0x30], bl
        mov    byte ptr [esi + 0x2d], bl
        mov    dword ptr [esi + 0x3c], ecx
        mov    dword ptr [esi + 0x40], edx
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x14
    }
}
