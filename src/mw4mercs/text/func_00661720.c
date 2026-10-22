/*
 * FUN_00661720 (extent 0x661720-0x661c28) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00660460(void);
extern void __cdecl FUN_00660640(void);
extern void __cdecl FUN_00660700(void);
extern void __cdecl FUN_00660780(void);
extern void __cdecl FUN_00660830(void);
extern void __cdecl FUN_006608d0(void);
extern void __cdecl FUN_006609a0(void);
extern void __cdecl FUN_00660aa0(void);
extern void __cdecl FUN_00660b50(void);
extern void __cdecl FUN_00660c40(void);
extern void __cdecl FUN_00660d40(void);
extern void __cdecl FUN_00660da0(void);
extern void __cdecl FUN_00660e10(void);
extern void __cdecl FUN_00660ea0(void);
extern void __cdecl FUN_00661c90(void);
extern void __cdecl FUN_00661cb0(void);
extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_00662e90(void);
extern void __cdecl FUN_006a2c30(void);
extern void __cdecl FUN_006a2e50(void);
extern void __cdecl FUN_006a3590(void);
extern void __cdecl FUN_006a3a80(void);
extern void __cdecl FUN_006a3b90(void);
extern void __cdecl FUN_006a3d70(void);
extern void __cdecl FUN_006a4130(void);
extern void __cdecl FUN_006a4320(void);
extern void __cdecl FUN_006a4650(void);

__declspec(naked) void FUN_00661720(void)
{
    __asm {
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0xc]
        mov    esi, ebp
        cmp    esi, edi
        je    L_1746
        mov    ebx, dword ptr [esp + 0x14]
L_1734:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        cmp    eax, ebx
        je    L_1750
        add    esi, 4
        cmp    esi, edi
        jne    L_1734
L_1746:
        mov    eax, dword ptr [ebp]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
L_1750:
        mov    eax, dword ptr [esi]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        add    eax, 0xfffff82f
        cmp    eax, 0x18
        push    esi
        ja    L_1c02
        jmp    dword ptr [eax*4 + 0x661c28]
        push    0x64
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660830
        mov    dword ptr [esi], 0x79506c
        mov    eax, esi
        jmp    L_1bfe
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006608d0
        mov    dword ptr [esi], 0x795048
        mov    eax, esi
        jmp    L_1bfe
        push    0x60
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a2c30
        mov    dword ptr [esi], 0x795024
        mov    eax, esi
        jmp    L_1bfe
        push    0x64
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006609a0
        mov    dword ptr [esi], 0x795000
        mov    eax, esi
        jmp    L_1bfe
        push    0x68
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a2e50
        mov    dword ptr [esi], 0x794fdc
        mov    eax, esi
        jmp    L_1bfe
        push    0x64
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660aa0
        mov    dword ptr [esi], 0x794fb8
        mov    eax, esi
        jmp    L_1bfe
        push    0x64
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660b50
        mov    dword ptr [esi], 0x794f94
        mov    eax, esi
        jmp    L_1bfe
        push    0x5c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660640
        mov    dword ptr [esi], 0x7950fc
        mov    eax, esi
        jmp    L_1bfe
        push    0x4c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a3590
        mov    dword ptr [esi], 0x794f70
        mov    eax, esi
        jmp    L_1bfe
        push    0x68
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660c40
        mov    dword ptr [esi], 0x794f4c
        mov    eax, esi
        jmp    L_1bfe
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660700
        mov    dword ptr [esi], 0x7950b4
        mov    eax, esi
        jmp    L_1bfe
        push    0x30
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a3a80
        mov    dword ptr [esi], 0x7950d8
        mov    eax, esi
        jmp    L_1bfe
        push    0x5c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660780
        mov    dword ptr [esi], 0x795090
        mov    eax, esi
        jmp    L_1bfe
        push    0x38
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a3b90
        mov    dword ptr [esi], 0x794f28
        mov    eax, esi
        jmp    L_1bfe
        push    0x60
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a3d70
        mov    dword ptr [esi], 0x794f04
        mov    eax, esi
        jmp    L_1bfe
        push    0x34
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660d40
        mov    dword ptr [esi], 0x794ee0
        mov    eax, esi
        jmp    L_1bfe
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660da0
        mov    dword ptr [esi], 0x794ebc
        mov    eax, esi
        jmp    L_1bfe
        push    0x5c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660e10
        mov    dword ptr [esi], 0x794e98
        mov    eax, esi
        jmp    L_1bfe
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00660ea0
        mov    dword ptr [esi], 0x794e74
        mov    eax, esi
        jmp    L_1bfe
        push    0x44
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a4130
        mov    dword ptr [esi], 0x794e50
        mov    eax, esi
        jmp    L_1bfe
        push    0x34
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a4320
        mov    dword ptr [esi], 0x7951f8
        mov    eax, esi
        jmp    L_1bfe
        push    0x34
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a4650
        mov    dword ptr [esi], 0x795230
        mov    eax, esi
        jmp    L_1bfe
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00661c90
        mov    dword ptr [esi], 0x795260
        mov    eax, esi
        jmp    L_1bfe
        push    0x50
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c02
        mov    ecx, esi
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_00661cb0
        mov    dword ptr [esi], 0x79529c
        mov    eax, esi
        jmp    L_1bfe
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1c02
        mov    ecx, eax
        call    FUN_00660460
L_1bfe:
        test    eax, eax
        jne    L_1c15
L_1c02:
        mov    esi, dword ptr [esp + 8]
        push    0
        push    0
        mov    ecx, esi
        call    FUN_00662e90
        mov    eax, esi
        pop    esi
        ret    
L_1c15:
        mov    esi, dword ptr [esp + 8]
        push    0
        push    eax
        mov    ecx, esi
        call    FUN_00662e90
        mov    eax, esi
        pop    esi
        ret    
        nop    
        // jump-table data @ 0x00661C28 (0 relocated pointers)
    }
}
