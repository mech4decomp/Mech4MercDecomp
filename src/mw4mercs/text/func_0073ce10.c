/*
 * FUN_0073ce10 (extent 0x73ce10-0x73cfbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_00858954;
extern int    g_00858a50;
extern int    g_00859d70;
extern float  g_0087b638;
extern int    g_0087b63c;
extern int    g_0087bbe8;
extern int    g_008b2520;
extern int    g_008b28d4;
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0074c120(void);

__declspec(naked) void FUN_0073ce10(void)
{
    __asm {
        xor    eax, eax
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
        mov    eax, dword ptr [g_00858a50]
        sub    esp, 0x88
        test    eax, eax
        jne    L_ce4c
        mov    eax, dword ptr [g_0087bbe8]
        test    eax, eax
        je    L_cfb6
L_ce4c:
        mov    eax, dword ptr [g_008b2520]
        test    ah, 4
        jne    L_ce63
        mov    al, byte ptr [g_00858954]
        test    al, al
        je    L_cfb6
L_ce63:
        push    0
        push    0xb
        call    FUN_00713cc0
        mov    eax, dword ptr [g_008b28d4]
        push    eax
        push    1
        call    FUN_00713cc0
        mov    eax, dword ptr [g_00859d70]
        test    eax, eax
        je    L_ce9a
        push    1
        push    0xd
        call    FUN_00713cc0
        push    1
        push    0x10
        call    FUN_00713cc0
        push    1
        push    7
        jmp    L_ceb0
L_ce9a:
        push    0
        push    7
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
        push    3
        push    0x10
L_ceb0:
        call    FUN_00713cc0
        fild    dword ptr [g_0087b63c]
        mov    ecx, dword ptr [g_0087b638]
        mov    edx, dword ptr [g_0087b63c]
        fst    dword ptr [esp + 8]
        add    ecx, 0x14
        fild    dword ptr [g_0087b638]
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
        add    edx, 0xc
        or    eax, 0xffffffff
        fst    dword ptr [esp + 4]
        mov    dword ptr [esp + 0x18], eax
        fstp    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x38], eax
        mov    dword ptr [esp + 0x58], eax
        fstp    dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x78], eax
        __emit 0xDB  /* __emit: fild dword ptr [esp] zero-disp; MSVC6 drops the 00 disp byte (DB 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [esp + 4]
        lea    eax, [esp + 8]
        fst    dword ptr [esp + 0x2c]
        push    eax
        fild    dword ptr [esp + 4]
        mov    dword ptr [esp + 0x24], 0x3f400000
        mov    dword ptr [esp + 0x28], 0x3ec00000
        mov    dword ptr [esp + 0x14], 0
        fst    dword ptr [esp + 4]
        mov    dword ptr [esp + 0x18], 0x3f800000
        mov    ecx, dword ptr [esp + 4]
        fstp    dword ptr [esp + 0x4c]
        mov    dword ptr [esp + 0x44], 0x3f400000
        fstp    dword ptr [esp + 0x50]
        mov    dword ptr [esp + 0x48], 0x3f080000
        mov    dword ptr [esp + 0x34], 0
        mov    dword ptr [esp + 0x38], 0x3f800000
        mov    dword ptr [esp + 0x64], 0x3f580000
        mov    dword ptr [esp + 0x68], 0x3f080000
        mov    dword ptr [esp + 0x54], 0
        mov    dword ptr [esp + 0x58], 0x3f800000
        mov    dword ptr [esp + 0x6c], ecx
        mov    dword ptr [esp + 0x70], edx
        mov    dword ptr [esp + 0x84], 0x3f580000
        mov    dword ptr [esp + 0x88], 0x3ec00000
        mov    dword ptr [esp + 0x74], 0
        mov    dword ptr [esp + 0x78], 0x3f800000
        call    FUN_0074c120
L_cfb6:
        add    esp, 0x88
        ret    
    }
}
