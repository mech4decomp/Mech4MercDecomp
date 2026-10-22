/*
 * FUN_00607be1 (extent 0x607be1-0x607e4b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007f24d8;
extern int    g_007f27c8;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00607140(void);
extern void __cdecl FUN_006e2150(void);

__declspec(naked) void FUN_00607be1(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x64
        push    esi
        push    1
        push    eax
        call    FUN_00607140
        add    esp, 8
        test    eax, eax
        jne    L_7c1c
        mov    ecx, dword ptr [esp + 0x6c]
        push    0x78bc50
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        add    esp, 0x64
        ret    
L_7c1c:
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        jne    L_7c3f
        mov    ecx, dword ptr [esp + 0x6c]
        push    0x78bc50
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        add    esp, 0x64
        ret    
L_7c3f:
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_7c66
        mov    ecx, dword ptr [esp + 0x6c]
        push    0x78bccc
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        add    esp, 0x64
        ret    
L_7c66:
        mov    ecx, dword ptr [esi + 0x170]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fld    dword ptr [eax + 0x1c]
        sub    esp, 8
        fld    dword ptr [eax + 0x2c]
        sub    esp, 8
        fstp    qword ptr [esp + 8]
        sub    esp, 8
        lea    edx, [esp + 0x1c]
        fstp    qword ptr [esp + 8]
        fstp    qword ptr [esp]
        push    0x78bcbc
        push    edx
        call    dword ptr [g_0076b420]
        mov    ecx, dword ptr [esp + 0x8c]
        add    esp, 0x20
        lea    eax, [esp + 4]
        push    eax
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        add    esp, 0x64
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0xc8
        push    1
        push    eax
        call    FUN_00607140
        add    esp, 8
        test    eax, eax
        jne    L_7d03
        mov    ecx, dword ptr [esp + 0xcc]
        push    0x78bc50
        call    FUN_006e2150
        mov    al, 1
        add    esp, 0xc8
        ret    
L_7d03:
        mov    ecx, dword ptr [eax + 0x18]
        push    ecx
        lea    edx, [esp + 0x68]
        push    edx
        lea    eax, [esp + 8]
        push    0x78bcec
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    ecx, dword ptr [esp + 0xd0]
        call    FUN_006e2150
        mov    al, 1
        add    esp, 0xc8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    1
        push    eax
        call    FUN_00607140
        add    esp, 8
        test    eax, eax
        jne    L_7d66
        mov    ecx, dword ptr [esp + 8]
        push    0x78bc50
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        ret    
L_7d66:
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        jne    L_7d86
        mov    ecx, dword ptr [esp + 8]
        push    0x78bc50
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        ret    
L_7d86:
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_7daa
        mov    ecx, dword ptr [esp + 8]
        push    0x78bccc
        call    FUN_006e2150
        mov    al, 1
        pop    esi
        ret    
L_7daa:
        mov    edx, dword ptr [esi]
        push    0x6070e0
        mov    ecx, esi
        call    dword ptr [edx + 0x120]
        mov    al, 1
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    0x78bea8
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78be74
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78be40
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78be0c
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78bdcc
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78bd98
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78bd48
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78bd20
        mov    ecx, esi
        call    FUN_006e2150
        push    0x78bcf8
        mov    ecx, esi
        call    FUN_006e2150
        mov    al, 1
        pop    esi
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
        nop    
        nop    
        mov    dword ptr [g_007f27c8], 0
        ret    
    }
}
