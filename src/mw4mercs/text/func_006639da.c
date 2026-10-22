/*
 * FUN_006639da (extent 0x6639da-0x663baf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076f5d8;
extern int    g_00795440;
extern int    g_00795444;
extern void __cdecl FUN_00547bc0(void);
extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665ab0(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6940(void);
extern void __cdecl FUN_006a7510(void);

__declspec(naked) void FUN_006639da(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00795440]
        sub    esp, 0x64
        push    edi
        mov    edi, dword ptr [esp + 0x6c]
        push    eax
        push    edi
        call    FUN_00662f10
        add    esp, 8
        test    al, al
        je    L_3ac7
        fld    dword ptr [esp + 0x70]
        push    esi
        fmul    dword ptr [g_0076f5d8]
        push    0
        lea    ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x74]
        mov    esi, dword ptr [esp + 0x74]
        push    esi
        push    0x41200000
        push    0
        call    FUN_006a6600
        push    1
        push    esi
        push    0x41200000
        push    3
        lea    ecx, [esp + 0x18]
        call    FUN_006a6600
        lea    ecx, [esp + 8]
        push    ecx
        push    0x3f000000
        lea    edx, [esp + 0x24]
        push    edx
        push    0x3f000000
        lea    ecx, [esp + 0x40]
        call    FUN_006a6940
        mov    eax, dword ptr [esp + 0x74]
        push    0x3f4ccccd
        push    0x41400000
        push    eax
        push    2
        lea    ecx, [esp + 0x5c]
        call    FUN_006a7510
        mov    ecx, dword ptr [esp + 0x78]
        mov    edx, dword ptr [g_00795444]
        push    ecx
        push    edx
        lea    eax, [esp + 0x38]
        push    eax
        lea    ecx, [esp + 0x58]
        push    ecx
        push    edi
        call    FUN_00662fb0
        mov    eax, dword ptr [esp + 0x54]
        mov    edx, dword ptr [esp + 0x5c]
        sub    edx, eax
        add    esp, 0x14
        sar    edx, 2
        push    edx
        push    eax
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x54], 0x795458
        call    FUN_00665ab0
        mov    eax, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x3c]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_00547bc0
        pop    esi
L_3ac7:
        pop    edi
        add    esp, 0x64
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00795440]
        sub    esp, 0x64
        push    edi
        mov    edi, dword ptr [esp + 0x6c]
        push    eax
        push    edi
        call    FUN_00662f10
        add    esp, 8
        test    al, al
        je    L_3baa
        fld    dword ptr [esp + 0x70]
        push    esi
        fadd    st(0), st(0)
        push    1
        lea    ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x74]
        mov    esi, dword ptr [esp + 0x74]
        push    esi
        push    0
        push    0
        call    FUN_006a6600
        push    1
        push    esi
        push    0
        push    3
        lea    ecx, [esp + 0x18]
        call    FUN_006a6600
        lea    ecx, [esp + 8]
        push    ecx
        push    0x3e99999a
        lea    edx, [esp + 0x24]
        push    edx
        push    0x3f333333
        lea    ecx, [esp + 0x40]
        call    FUN_006a6940
        mov    eax, dword ptr [esp + 0x74]
        push    0x3f4ccccd
        push    0x41400000
        push    eax
        push    1
        lea    ecx, [esp + 0x5c]
        call    FUN_006a7510
        mov    ecx, dword ptr [g_00795444]
        push    2
        push    ecx
        lea    edx, [esp + 0x38]
        push    edx
        lea    eax, [esp + 0x58]
        push    eax
        push    edi
        call    FUN_00662fb0
        mov    eax, dword ptr [esp + 0x54]
        mov    ecx, dword ptr [esp + 0x5c]
        sub    ecx, eax
        add    esp, 0x14
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x54], 0x795458
        call    FUN_00665ab0
        mov    eax, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x3c]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_00547bc0
        pop    esi
L_3baa:
        pop    edi
        add    esp, 0x64
        ret    
    }
}
