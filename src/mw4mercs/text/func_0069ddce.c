/*
 * FUN_0069ddce (extent 0x69ddce-0x69e158) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_0069e140(void);
extern void __cdecl FUN_0069e160(void);
extern void __cdecl FUN_0069e180(void);

__declspec(naked) void FUN_0069ddce(void)
{
    __asm {
        mov    edi, edi
        /* __emit: jump-table DATA (reloc dwords) of preceding FUN_0069d4a0,
           mis-decoded as code by gen_bigfunc; emit raw bytes */
        __emit 0x3E   /* jt entry 0x0069d73e */
        __emit 0xD7
        __emit 0x69
        __emit 0x00
        __emit 0x2B   /* jt entry 0x0069d72b */
        __emit 0xD7
        __emit 0x69
        __emit 0x00
        __emit 0x1B   /* jt entry 0x0069d71b */
        __emit 0xD7
        __emit 0x69
        __emit 0x00
        __emit 0x08   /* jt entry 0x0069d708 */
        __emit 0xD7
        __emit 0x69
        __emit 0x00
        sub    esp, 8
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebx, dword ptr [esi + 0x10]
        shl    ebx, 3
        cmp    eax, -0x14
        je    L_ddff
        lea    ebx, [ebx + eax - 8]
L_ddff:
        push    1
        lea    eax, [esp + 0x10]
        xor    edi, edi
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    0xa
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    0xb
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    2
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edi
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x10]
        sub    eax, edi
        je    L_dfef
        dec    eax
        je    L_df20
        dec    eax
        jne    L_e0a8
        push    3
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    edi
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    1
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    2
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    3
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    6
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        mov    dword ptr [esp + 0x10], edi
        push    eax
        jmp    L_e0a1
L_df20:
        push    1
        push    edi
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    1
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    2
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    3
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    7
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    8
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    9
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], edi
        push    ecx
        jmp    L_e0a1
L_dfef:
        push    1
        push    edi
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    1
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    2
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    3
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    6
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        lea    edx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], edi
        push    edx
L_e0a1:
        mov    ecx, esi
        call    FUN_0041eb40
L_e0a8:
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    FUN_0041ea60
        push    1
        push    4
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    1
        push    5
        push    edi
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        push    2
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    FUN_0069e160
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    edi, dword ptr [edx + 0x14]
        mov    ecx, esi
        xor    edi, 0x85739531
        call    FUN_0069e140
        mov    ecx, dword ptr [edi + 0x1814]
        sub    eax, ebx
        push    eax
        mov    eax, dword ptr [esp + 0x2c]
        push    eax
        add    ecx, 0x6c6c
        call    FUN_0069e180
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x14]
        mov    edx, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 8]
        sub    eax, edx
        shl    eax, 3
        cmp    ecx, -0x14
        je    L_e157
        lea    eax, [eax + ecx - 8]
L_e157:
        ret    
    }
}
