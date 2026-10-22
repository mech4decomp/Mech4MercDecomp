/*
 * FUN_004eda06 (extent 0x4eda06-0x4edb1a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007daa48;
extern int    g_00849304;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004b9f50(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004eda06(void)
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
        mov    eax, dword ptr [g_007b8c10]
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        lea    edi, [esi + 0x10]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov    ecx, dword ptr [g_00849304]
        mov    ebp, dword ptr [esp + 0x28]
        push    ecx
        push    0x774a24
        lea    edx, [ebp + 0x14]
        push    edx
        push    ebp
        lea    ebx, [esi + 0x18]
        push    0x14
        mov    ecx, ebx
        mov    dword ptr [edi], 0x774a0c
        call    FUN_00415d70
        mov    eax, dword ptr [g_007daa48]
        push    eax
        mov    dword ptr [ebx + 0x2c], 0
        mov    dword ptr [esi], 0x774a08
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_daab
        push    ebp
        mov    ecx, eax
        call    FUN_004b9f50
        mov    dword ptr [esp + 0x28], eax
        jmp    L_dab3
L_daab:
        mov    dword ptr [esp + 0x28], 0
L_dab3:
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, edi
        call    FUN_0041fcd0
        lea    edi, [ebp - 1]
        test    edi, edi
        jl    L_db0e
        mov    ebp, 0x774a04
L_dad0:
        mov    edx, dword ptr [g_007b8c10]
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebx
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x24], edi
        call    FUN_00416180
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00415380
        dec    edi
        jns    L_dad0
L_db0e:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
    }
}
