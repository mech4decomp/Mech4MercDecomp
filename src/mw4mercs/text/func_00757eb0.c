/*
 * FUN_00757eb0 (extent 0x757eb0-0x757f55) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dd10(void);

__declspec(naked) void FUN_00757eb0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x80
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x38]
        mov    esi, eax
        test    esi, esi
        jge    L_7ef5
        push    ebx
        lea    ecx, [ebp - 0x80]
        push    ecx
        call    FUN_0074dd10
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae804
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_7ef5
        int 3    
L_7ef5:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x30]
        mov    esi, eax
        test    esi, esi
        jge    L_7f4c
        test    bl, 1
        mov    eax, 0x7ae860
        jne    L_7f30
        mov    eax, 0x7ae854
L_7f30:
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae830
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_7f4c
        int 3    
L_7f4c:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
    }
}
