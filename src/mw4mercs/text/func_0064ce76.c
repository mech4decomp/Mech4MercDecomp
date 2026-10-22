/*
 * FUN_0064ce76 (extent 0x64ce76-0x64d000) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008058ac;
extern int    g_0080d9b0;
extern int    g_0080d9b4;
extern int    g_0080d9bc;
extern int    g_05030502;
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064cb90(void);

__declspec(naked) void FUN_0064ce76(void)
{
    __asm {
        mov    edi, edi
        mov    dl, 0xcb
        add    byte ptr fs:[esp + ecx*8], bl
        add    byte ptr fs:[esp + ecx*8 - 0x31bcff9c], cl
        add    byte ptr fs:[esi + ecx*8], dh
        add    byte ptr fs:[edx - 0x32], ah
        add    byte ptr fs:[eax], al
        add    dword ptr [g_05030502], eax
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x5050505
        add    eax, 0x90900405
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
        call    FUN_0064cb90
        push    0x7b5a74
        mov    esi, eax
        call    FUN_006498f0
        add    esp, 4
        test    al, al
        je    L_cffa
        push    edi
L_ceee:
        mov    edi, dword ptr [g_008058ac]
        push    esi
        call    FUN_0064c950
        mov    esi, eax
        call    FUN_00649150
        call    FUN_0064cb90
        push    eax
        call    FUN_0064c950
        lea    ecx, [edi - 5]
        add    esp, 8
        cmp    ecx, 0x2c
        ja    L_cfe0
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x64d014]
        jmp    dword ptr [edx*4 + 0x64d000]
        mov    ecx, dword ptr [g_0080d9bc]
        cmp    esi, ecx
        jne    L_cf3c
        cmp    eax, ecx
        je    L_cfde
L_cf3c:
        mov    edx, dword ptr [g_0080d9b4]
        cmp    esi, edx
        je    L_cf72
        cmp    eax, edx
        jne    L_cf8f
        cmp    esi, ecx
        sete    al
        test    al, al
        je    L_cf8f
        mov    esi, edx
        jmp    L_cfe0
        mov    ecx, dword ptr [g_0080d9bc]
        cmp    esi, ecx
        jne    L_cf68
        cmp    eax, ecx
        je    L_cfde
L_cf68:
        mov    edx, dword ptr [g_0080d9b4]
        cmp    esi, edx
        jne    L_cf7e
L_cf72:
        cmp    eax, edx
        je    L_cf8b
        cmp    eax, ecx
        jne    L_cf8f
        mov    esi, edx
        jmp    L_cfe0
L_cf7e:
        cmp    eax, edx
        jne    L_cf8f
        cmp    esi, ecx
        sete    al
        test    al, al
        je    L_cf8f
L_cf8b:
        mov    esi, edx
        jmp    L_cfe0
L_cf8f:
        push    0x10
        call    FUN_00562f40
        add    esp, 4
        mov    esi, 0x80da38
        jmp    L_cfe0
        mov    ecx, dword ptr [g_0080d9bc]
        cmp    esi, ecx
        jne    L_cfae
        cmp    eax, ecx
        je    L_cfde
L_cfae:
        push    0x10
        call    FUN_00562f40
        mov    ecx, dword ptr [g_0080d9bc]
        add    esp, 4
        jmp    L_cfde
        mov    ecx, dword ptr [g_0080d9b0]
        cmp    esi, ecx
        jne    L_cfce
        cmp    eax, ecx
        je    L_cfde
L_cfce:
        push    0x10
        call    FUN_00562f40
        mov    ecx, dword ptr [g_0080d9b0]
        add    esp, 4
L_cfde:
        mov    esi, ecx
L_cfe0:
        push    0x7b5a74
        call    FUN_006498f0
        add    esp, 4
        test    al, al
        jne    L_ceee
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_cffa:
        mov    eax, esi
        pop    esi
        ret    
        mov    edi, edi
        // jump-table data @ 0x0064D000 (0 relocated pointers)
    }
}
