/*
 * FUN_0049db13 (extent 0x49db13-0x49ddc3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00493940(void);
extern void __cdecl FUN_0049d430(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004addb0(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0049db13(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x248
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_db59
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_0049d430
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_db59:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea    ecx, [edi + 0x60]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x68]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x70]
        call    FUN_004addb0
        push    esi
        lea    ecx, [edi + 0x7c]
        call    FUN_004addb0
        push    esi
        lea    ecx, [edi + 0x88]
        call    FUN_004addb0
        push    esi
        lea    ecx, [edi + 0x94]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x9c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0xac]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0xb8]
        call    FUN_004adf40
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [edi + 0xcc]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea    ecx, [edi + 0xd4]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0xe0]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0xf4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0xfc]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x108]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x114]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x11c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x128]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x134]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x13c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x148]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x15c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x168]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x174]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x17c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x188]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x19c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x1a4]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x1b0]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x1c4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x1cc]
        call    FUN_004adf40
        push    esi
        lea    ecx, [edi + 0x1e0]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x1f4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x1fc]
        call    FUN_004adf40
        push    esi
        lea    ecx, [edi + 0x210]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x224]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [edi + 0x22c]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x228]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x231]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [edi + 0x230]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x232]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        add    edi, 0x233
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
