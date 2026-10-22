/*
 * FUN_0075b4d0 (extent 0x75b4d0-0x75b54e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0075b4d0(void)
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
        call    dword ptr [eax + 0x1c]
        mov    esi, eax
        test    esi, esi
        jge    L_b505
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af5e0
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_b505
        int 3    
L_b505:
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
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x24]
        mov    esi, eax
        test    esi, esi
        jge    L_b545
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af60c
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_b545
        int 3    
L_b545:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
    }
}
