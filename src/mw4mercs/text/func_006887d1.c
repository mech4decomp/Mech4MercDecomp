/*
 * FUN_006887d1 (extent 0x6887d1-0x68884e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00688850(void);
extern void __cdecl FUN_00689010(void);

__declspec(naked) void FUN_006887d1(void)
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
        sub    esp, 0x10
        lea    eax, [esp + 3]
        push    eax
        lea    edx, [esp + 8]
        push    edx
        call    FUN_00689010
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        add    esp, 0x10
        ret    8
        nop    
        nop    
        mov    eax, 1
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
        push    esi
        mov    esi, ecx
        call    FUN_00688850
        test    byte ptr [esp + 8], 1
        je    L_8848
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8848:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
