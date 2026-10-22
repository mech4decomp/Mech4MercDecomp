/*
 * FUN_004a5d91 (extent 0x4a5d91-0x4a5f03) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004a5a10(void);
extern void __cdecl FUN_004a9430(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004addb0(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a5d91(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x384
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5dd9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a5a10
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_5dd9:
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
        call    FUN_004a9430
        push    esi
        lea    ecx, [edi + 0x2b8]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x2c4]
        call    FUN_004adf40
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [edi + 0x2d8]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea    ecx, [edi + 0x2e0]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x2e8]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x2fc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x304]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x310]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x31c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x324]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x330]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x33c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x344]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x350]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x35c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x364]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x370]
        call    FUN_004addb0
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x37c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    edi, 0x380
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
