/*
 * FUN_005d7e9d (extent 0x5d7e9d-0x5d806b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007dc140;
extern int    g_007f243c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_0040ef80(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00411fd0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_005d6960(void);
extern void __cdecl FUN_00657ad0(void);
extern void __cdecl FUN_00658030(void);
extern void __cdecl FUN_0068d120(void);
extern void __cdecl FUN_0068eed0(void);

__declspec(naked) void FUN_005d7e9d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x38]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        call    FUN_0040ef80
        mov    ebp, dword ptr [edi + 0x1c]
        mov    ebx, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [edi + 0x10]
        mov    edx, dword ptr [edi + 0x28]
        sub    ebx, ebp
        mov    ebp, dword ptr [edi + 0x14]
        sub    ebp, ecx
        mov    ecx, dword ptr [edi + 0x2c]
        sub    ecx, edx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        push    0x788280
        mov    ecx, esi
        sar    ebx, 2
        sar    ebp, 2
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_0040eda0
        mov    esi, eax
        push    ebx
        push    0x788260
        mov    ecx, esi
        call    FUN_00411d10
        push    ebp
        push    0x788254
        mov    ecx, esi
        call    FUN_00411d10
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    0x788274
        mov    ecx, esi
        call    FUN_00411d10
        mov    edx, dword ptr [esp + 0x40]
        push    edx
        push    0x788248
        mov    ecx, esi
        call    FUN_00411c40
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    0x78823c
        mov    ecx, esi
        call    FUN_00411c40
        mov    ecx, dword ptr [esp + 0x44]
        push    ecx
        push    0x788230
        mov    ecx, esi
        call    FUN_00411c40
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov    dword ptr [esp + 0x10], 0
        jle    L_7fae
        mov    edx, dword ptr [edi + 0x28]
        mov    dword ptr [esp + 0x14], edx
L_7f69:
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x20]
        push    0x78826c
        push    ecx
        call    dword ptr [g_0076b420]
        mov    edx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        call    FUN_00411fd0
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        inc    eax
        add    edx, 0xc
        cmp    eax, ecx
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], edx
        jl    L_7f69
L_7fae:
        test    ebx, ebx
        jle    L_7fcd
        mov    esi, dword ptr [edi + 0x1c]
L_7fb5:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_7fc7
        mov    ecx, dword ptr [esp + 0x3c]
        push    ecx
        mov    ecx, eax
        call    FUN_005d6960
L_7fc7:
        add    esi, 4
        dec    ebx
        jne    L_7fb5
L_7fcd:
        test    ebp, ebp
        jle    L_7fec
        mov    esi, dword ptr [edi + 0x10]
L_7fd4:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_7fe6
        mov    edx, dword ptr [esp + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_0068eed0
L_7fe6:
        add    esi, 4
        dec    ebp
        jne    L_7fd4
L_7fec:
        mov    eax, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [edi + 0x3c]
        push    eax
        call    FUN_00657ad0
        mov    ecx, dword ptr [esp + 0x48]
        push    ecx
        mov    ecx, dword ptr [edi + 0x40]
        call    FUN_00658030
        mov    ecx, dword ptr [edi + 0x48]
        test    ecx, ecx
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        je    L_801b
        mov    edx, dword ptr [esp + 0x34]
        push    edx
        call    FUN_0068d120
L_801b:
        add    esp, 0x28
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8060
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x788288
        push    0x47c
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007f243c], eax
        ret    
L_8060:
        mov    dword ptr [g_007f243c], 0
        ret    
    }
}
