/*
 * FUN_00728ea8 (extent 0x728ea8-0x728fca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b7114;
extern int    g_00859d70;
extern int    g_008816cc;
extern int    g_008816d0;
extern void __cdecl FUN_00713cc0(void);

__declspec(naked) void FUN_00728ea8(void)
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
        mov    eax, dword ptr [g_008816cc]
        test    eax, eax
        je    L_8ecc
        mov    eax, dword ptr [eax + 0x760]
        push    eax
        push    1
        mov    dword ptr [g_007b7114], eax
        call    FUN_00713cc0
L_8ecc:
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    1
        push    7
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    1
        push    0x14
        call    FUN_00713cc0
        push    0
        push    0x13
        call    FUN_00713cc0
        push    1
        push    0xe
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
        push    0
        push    0x15
        call    FUN_00713cc0
        push    0
        push    0x1c
        call    FUN_00713cc0
        mov    eax, dword ptr [g_00859d70]
        test    eax, eax
        je    L_8fb7
        mov    eax, dword ptr [g_008816d0]
        cmp    eax, -1
        jne    L_8f73
        push    1
        jmp    L_8f85
L_8f73:
        and    eax, 0xff000000
        cmp    eax, 0xff000000
        jne    L_8f83
        push    2
        jmp    L_8f85
L_8f83:
        push    3
L_8f85:
        push    0x10
        call    FUN_00713cc0
        mov    eax, dword ptr [g_008816d0]
        and    eax, 0xff000000
        cmp    eax, 0xff000000
        jne    L_8fc0
        mov    ecx, dword ptr [g_008816cc]
        mov    eax, dword ptr [ecx + 0x130]
        test    eax, eax
        jne    L_8fc0
        push    1
        push    0xd
        call    FUN_00713cc0
        ret    
L_8fb7:
        push    3
        push    0x10
        call    FUN_00713cc0
L_8fc0:
        push    3
        push    0xd
        call    FUN_00713cc0
        ret    
    }
}
