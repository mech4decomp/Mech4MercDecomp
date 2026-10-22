/*
 * FUN_0049a792 (extent 0x49a792-0x49a983) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00493880(void);
extern void __cdecl FUN_004938b0(void);
extern void __cdecl FUN_00493940(void);
extern void __cdecl FUN_004939d0(void);
extern void __cdecl FUN_0049a580(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0049a792(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xc0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a7d9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_0049a580
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a7d9:
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
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00493940
        push    edi
        lea    ecx, [esi + 0x60]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x6c]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x78]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x84]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x90]
        call    FUN_004adf40
        push    edi
        lea    ecx, [esi + 0xa4]
        call    FUN_004adf40
        lea    eax, [esi + 0xbc]
        push    eax
        push    edi
        call    FUN_00412a50
        mov    edx, dword ptr [eax]
        add    esp, 8
        push    1
        lea    ecx, [esi + 0xb8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        add    esi, 0xb9
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
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
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00493880
        push    0x3f800000
        lea    ecx, [esi + 0x60]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0x6c]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0x78]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0x84]
        call    FUN_004aeb30
        push    0
        lea    ecx, [esi + 0x90]
        call    FUN_004adfb0
        push    0x41200000
        lea    ecx, [esi + 0xa4]
        call    FUN_004adfb0
        mov    byte ptr [esi + 0xb8], 0
        mov    byte ptr [esi + 0xb9], 1
        pop    esi
        ret    
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
    }
}
