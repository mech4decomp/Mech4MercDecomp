/*
 * FUN_005d89e3 (extent 0x5d89e3-0x5d8c13) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0068d440(void);

__declspec(naked) void FUN_005d89e3(void)
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x48]
        push    0x43fa0000
        push    eax
        mov    ecx, esi
        call    FUN_0068d440
        test    al, al
        je    L_8a0f
        mov    al, 1
        pop    esi
        ret    8
L_8a0f:
        mov    ecx, dword ptr [esp + 0xc]
        push    0x43fa0000
        push    ecx
        mov    ecx, esi
        call    FUN_0068d440
        test    al, al
        setne    al
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x100
        mov    ecx, dword ptr [ecx + 0x3c]
        mov    edx, 1
        mov    eax, 2
        push    esi
        xor    esi, esi
        mov    dword ptr [esp + 4], edx
        mov    dword ptr [esp + 8], edx
        mov    dword ptr [esp + 0x20], edx
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x28], edx
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [esp + 0x48], edx
        mov    dword ptr [esp + 0x4c], edx
        mov    dword ptr [esp + 0x50], edx
        mov    dword ptr [esp + 0x6c], edx
        mov    dword ptr [esp + 0x70], edx
        mov    dword ptr [esp + 0x74], edx
        mov    dword ptr [esp + 0x90], edx
        mov    dword ptr [esp + 0x94], edx
        mov    dword ptr [esp + 0x98], edx
        mov    dword ptr [esp + 0xb4], edx
        mov    dword ptr [esp + 0xb8], edx
        mov    dword ptr [esp + 0xbc], edx
        mov    dword ptr [esp + 0xd8], edx
        mov    dword ptr [esp + 0xdc], edx
        mov    dword ptr [esp + 0xe0], edx
        mov    dword ptr [esp + 0xe4], edx
        mov    dword ptr [esp + 0xfc], edx
        mov    dword ptr [esp + 0x100], edx
        mov    edx, dword ptr [esp + 0x10c]
        mov    dword ptr [esp + 0xc], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x30], esi
        mov    dword ptr [esp + 0x40], esi
        mov    dword ptr [esp + 0x44], esi
        mov    dword ptr [esp + 0x54], esi
        mov    dword ptr [esp + 0x68], esi
        mov    dword ptr [esp + 0x78], esi
        mov    dword ptr [esp + 0x8c], esi
        mov    dword ptr [esp + 0x9c], esi
        mov    dword ptr [esp + 0xb0], esi
        mov    dword ptr [esp + 0xc0], esi
        mov    dword ptr [esp + 0xc4], esi
        mov    dword ptr [esp + 0xd4], esi
        mov    dword ptr [esp + 0xe8], esi
        mov    dword ptr [esp + 0xf8], esi
        mov    esi, dword ptr [esp + 0x108]
        shl    edx, 9
        add    edx, esi
        mov    esi, dword ptr [ecx + 8]
        xor    ecx, ecx
        mov    cx, word ptr [esi + edx*2 + 0x40200]
        test    byte ptr [esp + 0x114], al
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x34], eax
        mov    dword ptr [esp + 0x38], eax
        mov    dword ptr [esp + 0x3c], eax
        mov    dword ptr [esp + 0x58], eax
        mov    dword ptr [esp + 0x5c], eax
        mov    dword ptr [esp + 0x60], eax
        mov    dword ptr [esp + 0x64], eax
        mov    dword ptr [esp + 0x7c], eax
        mov    dword ptr [esp + 0x80], eax
        mov    dword ptr [esp + 0x84], eax
        mov    dword ptr [esp + 0x88], eax
        mov    dword ptr [esp + 0xa0], eax
        mov    dword ptr [esp + 0xa4], eax
        mov    dword ptr [esp + 0xa8], eax
        mov    dword ptr [esp + 0xac], eax
        mov    dword ptr [esp + 0xc8], eax
        mov    dword ptr [esp + 0xcc], eax
        mov    dword ptr [esp + 0xd0], eax
        mov    dword ptr [esp + 0xec], eax
        mov    dword ptr [esp + 0xf0], eax
        mov    dword ptr [esp + 0xf4], eax
        pop    esi
        je    L_8be3
        test    ch, 3
        je    L_8be3
        xor    eax, eax
        add    esp, 0x100
        ret    0x10
L_8be3:
        test    ch, 0xc
        jne    L_8bf3
        xor    eax, eax
        add    esp, 0x100
        ret    0x10
L_8bf3:
        mov    edx, dword ptr [esp + 0x10c]
        sar    ecx, 0xc
        and    ecx, 7
        and    edx, 7
        lea    eax, [edx + ecx*8]
        mov    eax, dword ptr [esp + eax*4]
        add    esp, 0x100
        ret    0x10
    }
}
