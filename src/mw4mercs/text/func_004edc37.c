/*
 * FUN_004edc37 (extent 0x4edc37-0x4edde6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa38;
extern int    g_007dc7fc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004161f0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004b83e0(void);
extern void __cdecl FUN_004ba320(void);
extern void __cdecl FUN_004c8a50(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004eda20(void);
extern void __cdecl FUN_004ee460(void);

__declspec(naked) void FUN_004edc37(void)
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        xor    eax, eax
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi], 0x774a50
        mov    eax, esi
        pop    esi
        ret    4
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
        push    esi
        mov    esi, ecx
        call    FUN_004ee460
        test    byte ptr [esp + 8], 1
        je    L_dc98
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_dc98:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        call    FUN_004d5b10
        mov    esi, dword ptr [esp + 0x18]
        lea    eax, [edi + 0x10]
        push    eax
        mov    dword ptr [eax], 0
        push    esi
        mov    dword ptr [edi], 0x774a50
        call    FUN_00412a00
        mov    ecx, dword ptr [g_007daa38]
        add    esp, 8
        call    FUN_00416110
        test    eax, eax
        je    L_dcec
        push    0xe
        push    esi
        mov    ecx, eax
        call    FUN_004b83e0
        mov    dword ptr [esp + 0x14], eax
        jmp    L_dcf4
L_dcec:
        mov    dword ptr [esp + 0x14], 0
L_dcf4:
        mov    eax, dword ptr [g_007dc7fc]
        mov    ecx, dword ptr [esp + 0x14]
        mov    ebp, dword ptr [eax]
        mov    dword ptr [edi + 0x14], ecx
        xor    al, al
L_dd04:
        test    ebp, ebp
        je    L_dd10
        mov    ebx, dword ptr [ebp]
        mov    ebp, dword ptr [ebp + 4]
        jmp    L_dd12
L_dd10:
        xor    ebx, ebx
L_dd12:
        test    ebx, ebx
        je    L_dd33
        test    al, al
        jne    L_dd74
        lea    ecx, [ebx + 0x10]
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x140]
        mov    edx, dword ptr [esp + 0x14]
        cmp    ecx, edx
        sete    al
        jmp    L_dd04
L_dd33:
        test    al, al
        jne    L_dd74
        push    0x48
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_dd52
        push    0xa
        mov    ecx, eax
        call    FUN_004eda20
        mov    ebx, eax
        jmp    L_dd54
L_dd52:
        xor    ebx, ebx
L_dd54:
        mov    ecx, dword ptr [g_007dc7fc]
        push    ebx
        call    FUN_004179b0
        lea    ecx, [ebx + 0x10]
        call    FUN_0041fd80
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, eax
        call    FUN_004c8a50
L_dd74:
        mov    edx, dword ptr [ebx + 0x44]
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esp + 0x14], edx
        call    FUN_004161f0
        lea    ecx, [ebx + 0x10]
        call    FUN_0041fd80
        lea    ebx, [edi + 0x24]
        push    ebx
        lea    ebp, [edi + 0x20]
        push    ebp
        lea    ecx, [edi + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x20]
        lea    edx, [edi + 0x18]
        push    edx
        mov    edx, dword ptr [ecx + 0x10]
        push    edx
        mov    ecx, eax
        call    FUN_004ba320
        mov    ecx, dword ptr [edi + 0x18]
        mov    eax, dword ptr [esi]
        push    0x40
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [edi + 0x1c]
        mov    edx, dword ptr [esi]
        push    0x40
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebp]
        mov    edx, dword ptr [esi]
        push    0x20
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebx]
        mov    edx, dword ptr [esi]
        push    1
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
