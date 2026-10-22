/*
 * FUN_00757c30 (extent 0x757c30-0x757ca7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00757c30(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x40]
        mov    esi, eax
        test    esi, esi
        jge    L_7c65
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae68c
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_7c65
        int 3    
L_7c65:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x48]
        mov    esi, eax
        test    esi, esi
        jge    L_7c9f
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae6b4
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_7c9f
        int 3    
L_7c9f:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    4
    }
}
