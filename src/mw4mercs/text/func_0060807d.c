/*
 * FUN_0060807d (extent 0x60807d-0x608344) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f27d0;
extern void __cdecl FUN_006083c0(void);
extern void __cdecl FUN_006083e0(void);
extern void __cdecl FUN_00608400(void);
extern void __cdecl FUN_00608420(void);
extern void __cdecl FUN_00608440(void);
extern void __cdecl FUN_00608460(void);
extern void __cdecl FUN_00608480(void);
extern void __cdecl FUN_006084a0(void);
extern void __cdecl FUN_006084e0(void);
extern void __cdecl FUN_00608510(void);
extern void __cdecl FUN_00608540(void);
extern void __cdecl FUN_00608570(void);
extern void __cdecl FUN_00608620(void);
extern void __cdecl FUN_00608680(void);
extern void __cdecl FUN_00618a90(void);

__declspec(naked) void FUN_0060807d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x44]
        xor    ecx, 0x85739531
        call    FUN_00618a90
        mov    eax, 1
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
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        sub    esp, 0x50
        cmp    ecx, 0x3e8
        jle    L_80c3
        mov    ecx, dword ptr [ecx]
L_80c3:
        add    ecx, -0x64
        cmp    ecx, 0x1b
        ja    L_8337
        jmp    dword ptr [ecx*4 + 0x608344]
        mov    edx, dword ptr [esp + 0x58]
        lea    ecx, [esp + 0x5c]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        mov    dword ptr [esp + 0x68], 0xb
        call    FUN_00608460
        add    esp, 0x50
        ret    0xc
        mov    edx, dword ptr [esp + 0x58]
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        mov    dword ptr [esp + 0xc], 0xb
        call    FUN_00608480
        add    esp, 0x50
        ret    0xc
        mov    edx, dword ptr [esp + 0x58]
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        mov    dword ptr [esp + 0x10], 1
        call    FUN_00608400
        add    esp, 0x50
        ret    0xc
        mov    dword ptr [esp + 8], 2
        lea    ecx, [esp + 8]
        jmp    L_8178
        mov    dword ptr [esp + 0xc], 3
        lea    ecx, [esp + 0xc]
        jmp    L_8178
        mov    dword ptr [esp + 0x10], 4
        lea    ecx, [esp + 0x10]
        jmp    L_8178
        mov    dword ptr [esp + 0x14], 5
        lea    ecx, [esp + 0x14]
L_8178:
        mov    edx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_006083c0
        add    esp, 0x50
        ret    0xc
        mov    dword ptr [esp + 0x18], 6
        lea    ecx, [esp + 0x18]
        jmp    L_81d4
        mov    dword ptr [esp + 0x1c], 7
        lea    ecx, [esp + 0x1c]
        jmp    L_81d4
        mov    dword ptr [esp + 0x20], 8
        lea    ecx, [esp + 0x20]
        jmp    L_81d4
        mov    dword ptr [esp + 0x24], 9
        lea    ecx, [esp + 0x24]
        jmp    L_81d4
        mov    dword ptr [esp + 0x28], 0xa
        lea    ecx, [esp + 0x28]
L_81d4:
        mov    edx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_00608420
        add    esp, 0x50
        ret    0xc
        mov    dword ptr [esp + 0x2c], 2
        lea    ecx, [esp + 0x2c]
        jmp    L_8222
        mov    dword ptr [esp + 0x30], 3
        lea    ecx, [esp + 0x30]
        jmp    L_8222
        mov    dword ptr [esp + 0x34], 4
        lea    ecx, [esp + 0x34]
        jmp    L_8222
        mov    dword ptr [esp + 0x38], 5
        lea    ecx, [esp + 0x38]
L_8222:
        mov    edx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_006083e0
        add    esp, 0x50
        ret    0xc
        mov    dword ptr [esp + 0x3c], 6
        lea    ecx, [esp + 0x3c]
        jmp    L_827e
        mov    dword ptr [esp + 0x40], 7
        lea    ecx, [esp + 0x40]
        jmp    L_827e
        mov    dword ptr [esp + 0x44], 8
        lea    ecx, [esp + 0x44]
        jmp    L_827e
        mov    dword ptr [esp + 0x48], 9
        lea    ecx, [esp + 0x48]
        jmp    L_827e
        mov    dword ptr [esp + 0x4c], 0xa
        lea    ecx, [esp + 0x4c]
L_827e:
        mov    edx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_00608440
        add    esp, 0x50
        ret    0xc
        mov    ecx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    eax
        call    FUN_006084a0
        add    esp, 0x50
        ret    0xc
        mov    edx, dword ptr [esp + 0x58]
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_006084e0
        add    esp, 0x50
        ret    0xc
        mov    ecx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    eax
        call    FUN_00608510
        add    esp, 0x50
        ret    0xc
        mov    edx, dword ptr [esp + 0x58]
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_00608540
        add    esp, 0x50
        ret    0xc
        mov    ecx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    eax
        call    FUN_00608570
        add    esp, 0x50
        ret    0xc
        mov    edx, dword ptr [esp + 0x58]
        mov    ecx, dword ptr [g_007f27d0]
        push    edx
        push    eax
        call    FUN_00608620
        add    esp, 0x50
        ret    0xc
        mov    ecx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [g_007f27d0]
        push    eax
        call    FUN_00608680
        add    esp, 0x50
        ret    0xc
L_8337:
        mov    eax, 1
        add    esp, 0x50
        ret    0xc
        mov    edi, edi
        // jump-table data @ 0x00608344 (31 relocated pointers)
        __emit 0x42
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x50
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x5E
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x6C
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x90
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x9E
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0xAC
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0xBA
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0xC8
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0xD6
        __emit 0x80
        __emit 0x60
        __emit 0x00
        __emit 0xEC
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0xFA
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x08
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x16
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x3A
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x48
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x56
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x64
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x72
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0xFA
        __emit 0x80
        __emit 0x60
        __emit 0x00
        __emit 0x1E
        __emit 0x81
        __emit 0x60
        __emit 0x00
        __emit 0x96
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0xAD
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0xC4
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0xDB
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0xF2
        __emit 0x82
        __emit 0x60
        __emit 0x00
        __emit 0x09
        __emit 0x83
        __emit 0x60
        __emit 0x00
        __emit 0x20
        __emit 0x83
        __emit 0x60
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
