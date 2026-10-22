/*
 * FUN_007568d0 (extent 0x7568d0-0x756a1c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_00749600(void);
extern void __cdecl FUN_00757cb0(void);
extern void __cdecl FUN_00757d30(void);
extern void __cdecl FUN_00758160(void);
extern void __cdecl FUN_00758320(void);
extern void __cdecl FUN_00758380(void);

__declspec(naked) void FUN_007568d0(void)
{
    __asm {
        push    esi
        push    edi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    edi, dword ptr [esi + 4]
        test    edi, edi
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x50], eax
        mov    dword ptr [esi + 0x54], ecx
        je    L_6920
        push    1
        mov    edx, eax
        push    edx
        push    edi
        call    FUN_00758320
        mov    eax, dword ptr [esp + 0x10]
        push    1
        push    eax
        push    edi
        call    FUN_00758380
        mov    ecx, dword ptr [esi + 0x28]
        mov    edx, dword ptr [esi + 0x24]
        mov    eax, dword ptr [esi + 0x20]
        push    1
        push    ecx
        push    edx
        push    eax
        push    edi
        call    FUN_00758160
L_6920:
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    edi
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
        push    ecx
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        cmp    dword ptr [esi + 0x9c], 5
        jne    L_697c
        mov    eax, dword ptr [esi + 0x70]
        mov    ecx, dword ptr [eax + 0xec]
        push    ecx
        call    FUN_00749600
        cmp    eax, 4
        push    0x858ac8
        jne    L_69ac
        call    dword ptr [g_0076b100]
        xor    al, al
        pop    esi
        pop    ecx
        ret    
L_697c:
        mov    eax, dword ptr [esi]
        test    eax, eax
        jne    L_6992
        push    0x858ac8
        call    dword ptr [g_0076b100]
        xor    al, al
        pop    esi
        pop    ecx
        ret    
L_6992:
        lea    edx, [esp + 4]
        push    edx
        push    eax
        call    FUN_00757cb0
        mov    al, byte ptr [esi + 0x98]
        test    al, al
        push    0x858ac8
        je    L_69b7
L_69ac:
        call    dword ptr [g_0076b100]
        mov    al, 1
        pop    esi
        pop    ecx
        ret    
L_69b7:
        call    dword ptr [g_0076b100]
        mov    eax, dword ptr [esp + 4]
        and    eax, 1
        pop    esi
        pop    ecx
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
        sub    esp, 8
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi]
        test    eax, eax
        pop    esi
        je    L_6a0b
        lea    ecx, [esp + 4]
        push    ecx
        lea    edx, [esp + 4]
        push    edx
        push    eax
        call    FUN_00757d30
        push    0x858ac8
        call    dword ptr [g_0076b100]
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    
L_6a0b:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        xor    eax, eax
        add    esp, 8
        ret    
    }
}
