/*
 * FUN_007301d1 (extent 0x7301d1-0x730601) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0bc;
extern int    g_0076b140;
extern int    g_0076b238;
extern int    g_0076b434;
extern int    g_0076b43c;
extern int    g_0076b494;
extern int    g_0076b51c;
extern int    g_0076b528;
extern int    g_0076b544;
extern int    g_0076b570;
extern int    g_0076b5a4;
extern int    g_00858bf8;
extern int    g_00858bfc;
extern int    g_0087dbf0;
extern int    g_0087dbfc;
extern char   g_0087dc00;
extern int    g_008a9860;
extern void __cdecl FUN_007314e0(void);
extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_00731580(void);
extern void __cdecl FUN_007315e0(void);
extern void __cdecl FUN_00731610(void);

__declspec(naked) void FUN_007301d1(void)
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
        push    esi
        push    edi
        push    0x800
        push    0x40
        call    dword ptr [g_0076b0bc]
        mov    esi, eax
        mov    word ptr [esi], 0xac4
        mov    word ptr [esi + 2], 0x8000
        mov    edi, esi
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 4
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0x18d
        add    esi, 2
        add    esi, 2
        mov    word ptr [esi], 0x36
        add    esi, 2
        mov    word ptr [esi], 0
        add    esi, 2
        mov    word ptr [esi], 0
        add    esi, 2
        mov    word ptr [esi], 0
        add    esi, 2
        call    FUN_007315e0
        push    0x7a5e5c
        mov    word ptr [esi], ax
        push    0x8c
        add    esi, 2
        push    esi
        call    FUN_00731580
        mov    word ptr [g_008a9860], 0x3e8
        and    eax, 0xffff
        lea    eax, [esi + eax*2]
        push    eax
        call    FUN_007314e0
        mov    esi, eax
        mov    word ptr [esi], 0
        mov    word ptr [esi + 2], 0x5001
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0x59
        add    esi, 2
        mov    word ptr [esi + 2], 0x23
        add    esi, 2
        mov    word ptr [esi + 2], 0x3e
        add    esi, 2
        mov    word ptr [esi + 2], 0x10
        add    esi, 2
        add    esi, 2
        mov    word ptr [esi], 0x3e8
        add    esi, 2
        mov    word ptr [esi], 0xffff
        add    esi, 2
        push    0x7a5e94
        mov    word ptr [esi], 0x80
        push    0x93
        add    esi, 2
        push    esi
        call    FUN_00731610
        and    eax, 0xffff
        lea    eax, [esi + eax*2]
        mov    word ptr [eax], 0
        add    eax, 2
        push    eax
        call    FUN_007314e0
        mov    esi, eax
        mov    word ptr [esi], 0
        add    esi, 2
        mov    word ptr [esi], 0x5001
        add    esi, 2
        mov    word ptr [esi], 0
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    eax, dword ptr [g_0087dc00]
        mov    word ptr [esi + 2], 0xad
        add    esi, 2
        mov    word ptr [esi + 2], 0x23
        add    esi, 2
        add    esi, 2
        mov    word ptr [esi], 0x3e
        add    esi, 2
        mov    word ptr [esi], 0x10
        add    esi, 2
        mov    word ptr [esi], 0x3e9
        add    esi, 2
        mov    word ptr [esi], 0xffff
        add    esi, 2
        mov    word ptr [esi], 0x80
        add    esi, 2
        test    ah, 8
        je    L_0386
        push    0x7a5e80
        push    0x90
        jmp    L_0390
L_0386:
        push    0x7a5e74
        push    0x91
L_0390:
        push    esi
        call    FUN_00731610
        and    eax, 0xffff
        lea    eax, [esi + eax*2]
        mov    word ptr [eax], 0
        add    eax, 2
        push    eax
        call    FUN_007314e0
        mov    esi, eax
        mov    word ptr [esi], 0
        mov    word ptr [esi + 2], 0x5001
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0x101
        add    esi, 2
        mov    word ptr [esi + 2], 0x23
        add    esi, 2
        mov    word ptr [esi + 2], 0x3e
        add    esi, 2
        mov    word ptr [esi + 2], 0x10
        add    esi, 2
        add    esi, 2
        mov    word ptr [esi], 0x3ea
        add    esi, 2
        mov    word ptr [esi], 0xffff
        add    esi, 2
        push    0x7a5e6c
        mov    word ptr [esi], 0x80
        push    0x92
        add    esi, 2
        push    esi
        call    FUN_00731610
        and    eax, 0xffff
        lea    eax, [esi + eax*2]
        mov    word ptr [eax], 0
        add    eax, 2
        push    eax
        call    FUN_007314e0
        mov    esi, eax
        mov    word ptr [esi], 0x1281
        mov    word ptr [esi + 2], 0x5002
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 0
        add    esi, 2
        mov    word ptr [esi + 2], 7
        add    esi, 2
        mov    word ptr [esi + 2], 7
        add    esi, 2
        mov    word ptr [esi + 2], 0x17f
        add    esi, 2
        mov    word ptr [esi + 2], 0x18
        add    esi, 2
        add    esi, 2
        mov    word ptr [esi], 0x3eb
        add    esi, 2
        mov    word ptr [esi], 0xffff
        add    esi, 2
        mov    word ptr [esi], 0x82
        push    0x78f178
        add    esi, 2
        push    esi
        call    FUN_007314f0
        mov    ecx, dword ptr [g_00858bf8]
        mov    edx, dword ptr [g_00858bfc]
        push    0
        push    0x7304e0
        push    ecx
        push    edi
        and    eax, 0xffff
        push    edx
        mov    word ptr [esi + eax*2], 0
        call    dword ptr [g_0076b434]
        push    edi
        call    dword ptr [g_0076b238]
        push    eax
        call    dword ptr [g_0076b140]
        pop    edi
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
        mov    eax, dword ptr [esp + 8]
        sub    eax, 0x110
        je    L_055e
        dec    eax
        je    L_04f3
        xor    eax, eax
        ret    0x10
L_04f3:
        mov    eax, dword ptr [esp + 0xc]
        cmp    ax, 1
        jne    L_0510
        mov    ecx, dword ptr [g_008a9860]
        and    eax, 0xffff0000
        and    ecx, 0xffff
        add    eax, ecx
L_0510:
        or    ecx, 0xffffffff
        cmp    ax, 0x3e8
        mov    dword ptr [g_0087dbfc], ecx
        jne    L_052b
        mov    dword ptr [g_0087dbfc], 0
        jmp    L_0549
L_052b:
        cmp    ax, 0x3e9
        jne    L_053d
        mov    dword ptr [g_0087dbfc], 1
        jmp    L_0549
L_053d:
        cmp    ax, 0x3ea
        jne    L_0549
        mov    dword ptr [g_0087dbfc], ecx
L_0549:
        mov    edx, dword ptr [esp + 4]
        push    0
        push    edx
        call    dword ptr [g_0076b570]
        mov    eax, 1
        ret    0x10
L_055e:
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    0x79fe24
        push    esi
        call    dword ptr [g_0076b51c]
        lea    eax, [esp + 0xc]
        push    eax
        push    1
        push    0xcb
        push    0x3eb
        push    esi
        mov    dword ptr [esp + 0x20], 0x14
        call    dword ptr [g_0076b43c]
        mov    edx, dword ptr [g_0087dbf0]
        mov    al, byte ptr [edx]
        test    al, al
        mov    ecx, 0x8a9294
        je    L_05b7
L_05a1:
        cmp    al, 0xa
        je    L_05b7
        mov    byte ptr [ecx], al
        inc    ecx
        inc    edx
        cmp    ecx, 0x8a938e
        jae    L_05b7
        mov    al, byte ptr [edx]
        test    al, al
        jne    L_05a1
L_05b7:
        push    0x8a9294
        push    0x3eb
        push    esi
        mov    byte ptr [ecx], 0
        call    dword ptr [g_0076b528]
        test    byte ptr [g_0087dc00], 1
        mov    edi, dword ptr [g_0076b5a4]
        je    L_05eb
        push    0
        push    0x3e9
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_0076b544]
L_05eb:
        push    0x3e8
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_0076b494]
        pop    edi
        xor    eax, eax
        pop    esi
        ret    0x10
    }
}
