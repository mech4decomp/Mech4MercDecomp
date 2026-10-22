/*
 * FUN_005b7d2c (extent 0x5b7d2c-0x5b7d97) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00858940;
extern float  g_00858944;
extern void __cdecl FUN_005b7e60(void);
extern void __cdecl FUN_005b7ee0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005b7d2c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        ret    8
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
        fild    dword ptr [g_00858940]
        push    esi
        push    edi
        mov    esi, ecx
        fmul    dword ptr [esp + 0xc]
        call    FUN_0075db4a
        fild    dword ptr [g_00858944]
        mov    edi, eax
        fmul    dword ptr [esp + 0x10]
        call    FUN_0075db4a
        push    eax
        push    edi
        push    0
        mov    ecx, esi
        call    FUN_005b7e60
        push    eax
        mov    ecx, esi
        call    FUN_005b7ee0
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x16a]
        ret    
    }
}
