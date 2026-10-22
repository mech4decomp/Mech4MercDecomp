/*
 * FUN_005e79d7 (extent 0x5e79d7-0x5e7a6b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2568;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005e7a30(void);
extern void __cdecl FUN_005e7a90(void);
extern void __cdecl FUN_005f8320(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005e79d7(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x420
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7a22
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2568]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005e7a30
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_7a22:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_005f8320
        push    edi
        mov    ecx, esi
        mov    byte ptr [esi + 0x41d], 0
        mov    dword ptr [esi], 0x7894ac
        call    FUN_005e7a90
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
