/*
 * FUN_004c86b4 (extent 0x4c86b4-0x4c8a89) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa38;
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004c8510(void);
extern void __cdecl FUN_004c85e0(void);

__declspec(naked) void FUN_004c86b4(void)
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
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0x18]
        mov    edx, eax
        and    edx, 0xc0
        sub    esp, 0x10
        cmp    dl, 0x40
        jne    L_8736
        mov    edx, dword ptr [esp + 0x18]
        shr    eax, 5
        not    al
        test    al, 1
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    edx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x3f000000
        mov    dword ptr [esp + 0x10], 0x3f800000
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    dword ptr [esp + 0x18], 0x3e99999a
        push    edx
        je    L_8727
        add    ecx, 0xf0
        push    ecx
        call    FUN_004c85e0
        add    esp, 0x14
        add    esp, 0x10
        ret    
L_8727:
        add    ecx, 0xf0
        push    ecx
        call    FUN_004c8510
        add    esp, 0x14
L_8736:
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0x18]
        mov    edx, eax
        and    edx, 0xc0
        sub    esp, 0x10
        cmp    dl, 0x40
        jne    L_87b6
        mov    edx, dword ptr [esp + 0x18]
        shr    eax, 5
        not    al
        test    al, 1
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    edx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x3f800000
        mov    dword ptr [esp + 0x10], 0x3f800000
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    dword ptr [esp + 0x18], 0x3e99999a
        push    edx
        je    L_87a7
        add    ecx, 0xf0
        push    ecx
        call    FUN_004c85e0
        add    esp, 0x14
        add    esp, 0x10
        ret    
L_87a7:
        add    ecx, 0xf0
        push    ecx
        call    FUN_004c8510
        add    esp, 0x14
L_87b6:
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0x18]
        mov    edx, eax
        and    edx, 0xc0
        sub    esp, 0x10
        cmp    dl, 0x40
        jne    L_8836
        mov    edx, dword ptr [esp + 0x18]
        shr    eax, 5
        not    al
        test    al, 1
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    edx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x3f800000
        mov    dword ptr [esp + 0x10], 0x3f000000
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    dword ptr [esp + 0x18], 0x3e99999a
        push    edx
        je    L_8827
        add    ecx, 0xf0
        push    ecx
        call    FUN_004c85e0
        add    esp, 0x14
        add    esp, 0x10
        ret    
L_8827:
        add    ecx, 0xf0
        push    ecx
        call    FUN_004c8510
        add    esp, 0x14
L_8836:
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, eax
        and    ecx, 0xc0
        cmp    cl, 0x40
        jne    L_88e6
        shr    eax, 5
        not    al
        test    al, 1
        mov    dword ptr [esp + 4], 0x3f000000
        mov    dword ptr [esp + 8], 0x3f800000
        mov    dword ptr [esp + 0xc], 0x3f000000
        mov    dword ptr [esp + 0x10], 0x3e99999a
        je    L_88b8
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esi + 0xf0]
        push    eax
        call    FUN_004c85e0
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 0x14
        and    eax, 0xffffc7ff
        mov    dword ptr [esi + 0x18], eax
        pop    esi
        add    esp, 0x10
        ret    
L_88b8:
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esi + 0xf0]
        push    edx
        call    FUN_004c8510
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 0x14
        and    eax, 0xffffc7ff
        mov    dword ptr [esi + 0x18], eax
L_88e6:
        pop    esi
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, eax
        and    ecx, 0xc0
        cmp    cl, 0x40
        jne    L_8996
        shr    eax, 5
        not    al
        test    al, 1
        mov    dword ptr [esp + 4], 0x3f800000
        mov    dword ptr [esp + 8], 0x3f800000
        mov    dword ptr [esp + 0xc], 0x3f000000
        mov    dword ptr [esp + 0x10], 0x3e99999a
        je    L_8968
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esi + 0xf0]
        push    eax
        call    FUN_004c85e0
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 0x14
        and    eax, 0xffffc7ff
        mov    dword ptr [esi + 0x18], eax
        pop    esi
        add    esp, 0x10
        ret    
L_8968:
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esi + 0xf0]
        push    edx
        call    FUN_004c8510
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 0x14
        and    eax, 0xffffc7ff
        mov    dword ptr [esi + 0x18], eax
L_8996:
        pop    esi
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, eax
        and    ecx, 0xc0
        cmp    cl, 0x40
        jne    L_8a46
        shr    eax, 5
        not    al
        test    al, 1
        mov    dword ptr [esp + 4], 0x3f800000
        mov    dword ptr [esp + 8], 0x3f000000
        mov    dword ptr [esp + 0xc], 0x3f000000
        mov    dword ptr [esp + 0x10], 0x3e99999a
        je    L_8a18
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esi + 0xf0]
        push    eax
        call    FUN_004c85e0
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 0x14
        and    eax, 0xffffc7ff
        mov    dword ptr [esi + 0x18], eax
        pop    esi
        add    esp, 0x10
        ret    
L_8a18:
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esi + 0xf0]
        push    edx
        call    FUN_004c8510
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 0x14
        and    eax, 0xffffc7ff
        mov    dword ptr [esi + 0x18], eax
L_8a46:
        pop    esi
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x140]
        test    eax, eax
        je    L_8a69
        mov    ecx, dword ptr [g_007daa38]
        push    eax
        call    FUN_00416130
L_8a69:
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esi + 0x140], eax
        mov    eax, dword ptr [esi + 0x18]
        or    eax, 0x400
        mov    ecx, esi
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x40]
        pop    esi
        ret    4
    }
}
