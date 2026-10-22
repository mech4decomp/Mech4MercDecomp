/*
 * FUN_00735310 (extent 0x735310-0x73538e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00735310(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0x44]
        mov    esi, eax
        test    esi, esi
        jge    L_5343
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a63f0
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_5343
        int 3    
L_5343:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
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
        call    dword ptr [eax + 0x68]
        mov    esi, eax
        test    esi, esi
        jge    L_5385
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6414
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_5385
        int 3    
L_5385:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
    }
}
