/*
 * FUN_006023fc (extent 0x6023fc-0x60245d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004f9260(void);
extern void __cdecl FUN_004f9380(void);
extern void __cdecl FUN_00623270(void);
extern void __cdecl FUN_006232c0(void);

__declspec(naked) void FUN_006023fc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    eax
        mov    esi, ecx
        push    edi
        call    FUN_004f9260
        mov    ecx, dword ptr [esi + 0x225c]
        push    edi
        call    FUN_00623270
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004f9380
        mov    ecx, dword ptr [esi + 0x225c]
        push    edi
        call    FUN_006232c0
        pop    edi
        pop    esi
        ret    4
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x224c], al
        ret    4
    }
}
