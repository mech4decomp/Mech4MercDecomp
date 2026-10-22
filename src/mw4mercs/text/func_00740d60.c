/*
 * FUN_00740d60 (extent 0x740d60-0x740dbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750780(void);

__declspec(naked) void FUN_00740d60(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax]
        mov    esi, eax
        test    esi, esi
        jge    L_0d9e
        push    edi
        push    ebx
        call    FUN_00750780
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a8e04
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_0d9e
        int 3    
L_0d9e:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        ret    4
    }
}
