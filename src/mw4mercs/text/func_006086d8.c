/*
 * FUN_006086d8 (extent 0x6086d8-0x60873a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00608740(void);
extern void __cdecl FUN_006088f0(void);
extern void __cdecl FUN_00608c10(void);
extern void __cdecl FUN_00608c80(void);
extern void __cdecl FUN_00608d60(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006086d8(void)
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
        call    FUN_00608d60
        neg    al
        sbb    eax, eax
        neg    eax
        ret    8
        nop    
        nop    
        call    FUN_00608c10
        call    FUN_0075db4a
        ret    8
        nop    
        nop    
        nop    
        call    FUN_00608c80
        call    FUN_0075db4a
        ret    8
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 8]
        mov    edx, dword ptr [esi + 0x14]
        lea    ecx, [esi + 0x14]
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [esi + 0x28]
        lea    ecx, [esi + 0x28]
        call    dword ptr [eax + 8]
        mov    ecx, esi
        call    FUN_00608740
        mov    ecx, esi
        call    FUN_006088f0
        pop    esi
        ret    
    }
}
