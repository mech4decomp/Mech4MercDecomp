/*
 * FUN_0061fcc7 (extent 0x61fcc7-0x61fdef) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008050a0;
extern int    g_008050a4;
extern int    g_008058ac;
extern void __cdecl FUN_0061f560(void);
extern void __cdecl FUN_0061f5d0(void);
extern void __cdecl FUN_0061f680(void);
extern void __cdecl FUN_0061f990(void);
extern void __cdecl FUN_0061fa80(void);
extern void __cdecl FUN_0061fc80(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fc80(void);

__declspec(naked) void FUN_0061fcc7(void)
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
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        call    FUN_00649150
        mov    eax, dword ptr [g_008058ac]
        dec    eax
        je    L_fd09
        sub    eax, 0xd
        jne    L_fd8e
        push    0x78c998
        mov    ecx, esi
        call    FUN_0061fc80
        mov    ecx, dword ptr [esi + 4]
        call    FUN_0061f680
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    4
L_fd09:
        lea    eax, [esp + 0xc]
        push    eax
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0064fc80
        add    esp, 4
        call    FUN_00649150
        mov    ebx, dword ptr [esp + 0x14]
        mov    ecx, ebx
        shr    ecx, 4
        and    cl, 1
        test    bl, 1
        mov    byte ptr [esp + 0x14], cl
        mov    edi, dword ptr [esp + 0x14]
        je    L_fd46
        mov    edx, dword ptr [esp + 0xc]
        push    edi
        push    0
        push    edx
        jmp    L_fd53
L_fd46:
        test    bl, 2
        je    L_fd5b
        mov    eax, dword ptr [esp + 0xc]
        push    edi
        push    1
        push    eax
L_fd53:
        mov    ecx, dword ptr [esi + 4]
        call    FUN_0061f560
L_fd5b:
        test    bl, 4
        je    L_fd79
        mov    ecx, dword ptr [esp + 0xc]
        push    edi
        push    0
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_0061f5d0
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    4
L_fd79:
        test    bl, 8
        je    L_fd8e
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esi + 4]
        push    edi
        push    1
        push    edx
        call    FUN_0061f5d0
L_fd8e:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        pop    ecx
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
        push    esi
        mov    esi, ecx
        call    FUN_00649150
        mov    eax, dword ptr [g_008058ac]
        sub    eax, 2
        je    L_fdcf
        sub    eax, 0xc
        jne    L_fdeb
        push    0x78c998
        mov    ecx, esi
        call    FUN_0061fc80
        mov    ecx, dword ptr [esi + 8]
        call    FUN_0061fa80
        xor    eax, eax
        pop    esi
        ret    
L_fdcf:
        mov    eax, dword ptr [g_008050a0]
        test    eax, eax
        jne    L_fde6
        mov    eax, dword ptr [g_008050a4]
        mov    ecx, dword ptr [esi + 8]
        push    eax
        call    FUN_0061f990
L_fde6:
        call    FUN_00649150
L_fdeb:
        xor    eax, eax
        pop    esi
        ret    
    }
}
