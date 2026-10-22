/*
 * FUN_007556b7 (extent 0x7556b7-0x75570d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750550(void);

__declspec(naked) void FUN_007556b7(void)
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
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x48]
        mov    esi, eax
        test    esi, esi
        jge    L_5705
        push    edi
        call    FUN_00750550
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae3d0
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_5705
        int 3    
L_5705:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x14
    }
}
