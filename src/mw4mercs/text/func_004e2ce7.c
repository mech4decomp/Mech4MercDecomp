/*
 * FUN_004e2ce7 (extent 0x4e2ce7-0x4e2de7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc72c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004b6a30(void);

__declspec(naked) void FUN_004e2ce7(void)
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
        mov    eax, dword ptr [g_007dc72c]
        mov    edx, dword ptr [esp + 0x14]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        push    eax
        push    ecx
        push    ebx
        push    edi
        mov    ecx, esi
        call    FUN_004b6a30
        and    edi, 0xff
        and    ebx, 0xff
        imul    edi, ebx
        xor    ebp, ebp
        mov    dword ptr [esi + 0x164], ebp
        lea    edx, [edi*4]
        mov    dword ptr [esi + 0x168], ebp
        mov    dword ptr [esi + 0x16c], ebp
        mov    dword ptr [esi + 0x170], ebp
        mov    dword ptr [esi + 0x174], ebp
        push    edx
        mov    dword ptr [esi + 0x178], ebp
        mov    dword ptr [esi], 0x773ea8
        call    FUN_004084d0
        mov    ecx, dword ptr [esp + 0x30]
        add    esp, 4
        cmp    edi, ebp
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x180], ebp
        mov    dword ptr [esi + 0x184], 0x3f800000
        mov    dword ptr [esi + 0x188], ebp
        mov    dword ptr [esi + 0x18c], ecx
        jle    L_2dde
        mov    ebx, eax
        mov    dword ptr [esp + 0x28], edi
L_2dac:
        push    8
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebp
        je    L_2dcc
        push    ebp
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773e90
        jmp    L_2dce
L_2dcc:
        xor    edi, edi
L_2dce:
        mov    eax, dword ptr [esp + 0x28]
        mov    dword ptr [ebx], edi
        add    ebx, 4
        dec    eax
        mov    dword ptr [esp + 0x28], eax
        jne    L_2dac
L_2dde:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x1c
    }
}
