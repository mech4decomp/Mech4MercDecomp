/*
 * FUN_0072bbe0 (extent 0x72bbe0-0x72bcde) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b3c0;
extern int    g_0076b560;
extern char   g_007b7121;
extern int    g_00858bf8;
extern int    g_00881a58;
extern void __cdecl FUN_0072bbe0(void);
extern void __cdecl FUN_0072bce0(void);

__declspec(naked) void FUN_0072bbe0(void)
{
    __asm {
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        test    edi, edi
        je    L_bc2f
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [g_0076b560]
        jbe    L_bc0a
L_bbf7:
        mov    eax, dword ptr [g_00858bf8]
        push    0
        push    ebx
        push    0x100
        push    eax
        call    esi
        dec    edi
        jne    L_bbf7
L_bc0a:
        mov    ecx, dword ptr [g_00858bf8]
        push    0
        push    ebx
        push    0x101
        push    ecx
        call    esi
        mov    edx, dword ptr [g_00858bf8]
        push    0
        push    0
        push    0x102
        push    edx
        call    esi
        pop    esi
        pop    ebx
L_bc2f:
        pop    edi
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
        cmp    dword ptr [g_00881a58], 3
        jne    L_bcdb
        push    ebp
        push    esi
        push    edi
        push    0x882464
        call    dword ptr [g_0076b3c0]
        mov    edi, dword ptr [esp + 0x14]
        add    esp, 4
        push    edi
        mov    esi, eax
        call    FUN_0072bce0
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        jne    L_bc7b
        mov    al, byte ptr [g_007b7121]
        test    al, al
        je    L_bc7f
L_bc7b:
        xor    ebp, ebp
        jmp    L_bc83
L_bc7f:
        mov    ebp, dword ptr [esp + 0x18]
L_bc83:
        cmp    ebp, esi
        jge    L_bcce
        mov    eax, esi
        mov    esi, dword ptr [g_0076b560]
        sub    eax, ebp
        test    eax, eax
        jle    L_bcb4
        push    ebx
        mov    ebx, eax
L_bc98:
        push    0
        push    8
        push    0x100
        push    edi
        call    esi
        push    0
        push    8
        push    0x102
        push    edi
        call    esi
        dec    ebx
        jne    L_bc98
        pop    ebx
L_bcb4:
        push    0
        push    8
        push    0x101
        push    edi
        call    esi
        push    ebp
        push    0x25
        call    FUN_0072bbe0
        pop    edi
        pop    esi
        pop    ebp
        ret    0xc
L_bcce:
        mov    ebp, esi
        push    ebp
        push    0x25
        call    FUN_0072bbe0
        pop    edi
        pop    esi
        pop    ebp
L_bcdb:
        ret    0xc
    }
}
