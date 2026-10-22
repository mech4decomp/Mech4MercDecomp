/*
 * FUN_005ec208 (extent 0x5ec208-0x5ec24d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_005ec1c0(void);
extern void __cdecl FUN_005eef30(void);
extern void __cdecl FUN_005eef70(void);

__declspec(naked) void FUN_005ec208(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005eef30
        push    edi
        mov    ecx, esi
        call    FUN_005ec1c0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        lea    ecx, [esi + 0x220]
        mov    dword ptr [esi], 0x789bac
        call    FUN_0041fc90
        mov    ecx, esi
        call    FUN_005eef70
        pop    esi
        ret    
    }
}
