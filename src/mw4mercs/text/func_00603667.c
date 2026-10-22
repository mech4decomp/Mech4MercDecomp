/*
 * FUN_00603667 (extent 0x603667-0x60370d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f26c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006036e0(void);
extern void __cdecl FUN_00603a30(void);
extern void __cdecl FUN_00603a40(void);
extern void __cdecl FUN_00603a50(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00603667(void)
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
        push    0x90
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_36b0
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f26c0]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_006036e0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_36b0:
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00603a30
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00603a40
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00603a50
        mov    dword ptr [esi + 0x8c], edi
        pop    edi
        mov    dword ptr [esi], 0x78b794
        mov    eax, esi
        pop    esi
        ret    0xc
    }
}
