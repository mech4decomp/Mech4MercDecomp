/*
 * FUN_0049a8ec (extent 0x49a8ec-0x49a9da) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da93c;
extern int    g_007da96c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004938b0(void);
extern void __cdecl FUN_004939d0(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0049a8ec(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004938b0
        ret    4
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004939d0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        lea    ecx, [edi + 0x60]
        push    ecx
        lea    ecx, [esi + 0x60]
        call    FUN_004ae4c0
        lea    edx, [edi + 0x6c]
        push    edx
        lea    ecx, [esi + 0x6c]
        call    FUN_004ae4c0
        lea    eax, [edi + 0x78]
        push    eax
        lea    ecx, [esi + 0x78]
        call    FUN_004ae4c0
        lea    ecx, [edi + 0x84]
        push    ecx
        lea    ecx, [esi + 0x84]
        call    FUN_004ae4c0
        mov    dl, byte ptr [edi + 0xb8]
        mov    al, byte ptr [edi + 0xb9]
        add    edi, 0xbc
        push    edi
        lea    ecx, [esi + 0xbc]
        mov    byte ptr [esi + 0xb8], dl
        mov    byte ptr [esi + 0xb9], al
        call    FUN_00412740
        call    FUN_006f49a0
        pop    edi
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
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a9ce
        mov    eax, dword ptr [g_007da93c]
        push    eax
        push    0x7b2c60
        push    0x52e
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x49aab0
        mov    dword ptr [esi + 0x18], 0x49a7a0
        mov    dword ptr [g_007da96c], esi
        pop    esi
        ret    
L_a9ce:
        mov    dword ptr [g_007da96c], 0
        pop    esi
        ret    
    }
}
