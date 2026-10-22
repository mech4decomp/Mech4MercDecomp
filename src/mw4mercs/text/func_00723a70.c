/*
 * FUN_00723a70 (extent 0x723a70-0x723bca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b460;
extern int    g_0076b464;
extern int    g_0076b468;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern int    g_00896c88;
extern int    g_008aaea4;
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_00723a30(void);
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void FUN_00723a70(void)
{
    __asm {
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        mov    eax, ebx
        and    eax, 0xffffff00
        cmp    eax, 0x100
        jne    L_3a97
        mov    eax, dword ptr [g_00896c88]
        push    0x3f2
        push    eax
        call    FUN_0072d830
        pop    ebx
        ret    4
L_3a97:
        cmp    eax, 0x200
        jne    L_3ab3
        mov    ecx, dword ptr [g_00896c88]
        push    0x3f3
        push    ecx
        call    FUN_0072d830
        pop    ebx
        ret    4
L_3ab3:
        cmp    eax, 0x400
        jne    L_3acf
        mov    edx, dword ptr [g_00896c88]
        push    0x3f4
        push    edx
        call    FUN_0072d830
        pop    ebx
        ret    4
L_3acf:
        push    esi
        mov    esi, dword ptr [g_0076b468]
        push    0
        call    esi
        cmp    eax, 7
        jne    L_3b05
        push    1
        call    esi
        and    eax, 0xffffff00
        cmp    eax, 0xd00
        jne    L_3b05
        xor    eax, eax
        push    0x40
        mov    al, bh
        push    0x87dd64
        push    0
        push    eax
        call    dword ptr [g_0076b460]
        jmp    L_3b2a
L_3b05:
        push    0x40
        mov    esi, ebx
        shr    esi, 8
        push    0x87dd64
        mov    ecx, esi
        push    0
        and    ecx, 0xff
        push    ecx
        call    dword ptr [g_0076b460]
        and    esi, 0x100
        add    eax, esi
L_3b2a:
        shl    eax, 0x10
        inc    eax
        push    eax
        call    dword ptr [g_0076b464]
        pop    esi
        mov    eax, 0x87dd64
        pop    ebx
        ret    4
        nop    
        cmp    dword ptr [g_0085b4a0], 1
        mov    al, byte ptr [g_0087bc35]
        jne    L_3b6b
        test    al, al
        je    L_3b5f
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00723a30
        ret    4
L_3b5f:
        push    6
        push    2
        call    FUN_0070e220
        ret    4
L_3b6b:
        test    al, al
        je    L_3b7c
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        call    FUN_00723a30
        ret    4
L_3b7c:
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    edx
        call    FUN_00723a30
        mov    esi, eax
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        mov    al, byte ptr [g_0087bc35]
        je    L_3bb6
        test    al, al
        jne    L_3bc4
        mov    eax, dword ptr [g_008aaea4]
        test    eax, eax
        jne    L_3bba
        push    6
        xor    esi, esi
        push    2
        push    esi
        call    FUN_0070e1b0
        mov    eax, esi
        pop    esi
        ret    4
L_3bb6:
        test    al, al
        jne    L_3bc4
L_3bba:
        push    6
        push    2
        push    esi
        call    FUN_0070e1b0
L_3bc4:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
