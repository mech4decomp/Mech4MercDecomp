/*
 * FUN_00603507 (extent 0x603507-0x6035a5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f26bc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00603580(void);
extern void __cdecl FUN_00603a30(void);
extern void __cdecl FUN_00603a40(void);
extern void __cdecl FUN_00603a50(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00603507(void)
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
        push    0x8c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3550
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f26bc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00603580
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_3550:
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
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_00603a50
        mov    dword ptr [esi], 0x78b45c
        mov    eax, esi
        pop    esi
        ret    0xc
    }
}
