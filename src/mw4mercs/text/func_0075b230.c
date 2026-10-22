/*
 * FUN_0075b230 (extent 0x75b230-0x75b2e5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750300(void);
extern void __cdecl FUN_00750450(void);

__declspec(naked) void FUN_0075b230(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x40]
        mov    esi, eax
        test    esi, esi
        jge    L_b273
        mov    edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        call    FUN_00750450
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af4ac
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_b273
        int 3    
L_b273:
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x20
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    edx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_b2da
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x10]
        push    ebx
        push    edx
        push    eax
        lea    ecx, [ebp - 0x20]
        push    ecx
        call    FUN_00750300
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af4dc
        call    FUN_006fabf0
        add    esp, 0x20
        test    eax, eax
        je    L_b2da
        int 3    
L_b2da:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x14
    }
}
