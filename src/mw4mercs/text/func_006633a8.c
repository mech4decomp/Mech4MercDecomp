/*
 * FUN_006633a8 (extent 0x6633a8-0x66345d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00795440;
extern int    g_00795444;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a7510(void);

__declspec(naked) void FUN_006633a8(void)
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795450
        je    L_33c9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_33c9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795450
        je    L_33e9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_33e9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    eax, dword ptr [g_00795440]
        sub    esp, 0x34
        push    esi
        mov    esi, dword ptr [esp + 0x3c]
        push    eax
        push    esi
        call    FUN_00662f10
        add    esp, 8
        test    al, al
        je    L_3458
        push    0
        push    0x44480000
        push    0
        push    0
        lea    ecx, [esp + 0x14]
        call    FUN_006a6600
        push    0x3f4ccccd
        push    0x41400000
        push    0x41c80000
        push    1
        lea    ecx, [esp + 0x28]
        call    FUN_006a7510
        mov    ecx, dword ptr [esp + 0x40]
        mov    edx, dword ptr [g_00795444]
        push    ecx
        push    edx
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add    esp, 0x14
L_3458:
        pop    esi
        add    esp, 0x34
        ret    
    }
}
