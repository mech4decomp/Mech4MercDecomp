/*
 * FUN_00757e60 (extent 0x757e60-0x757f00) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dd10(void);
extern void __cdecl FUN_0074de50(void);

__declspec(naked) void FUN_00757e60(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        push    ebx
        push    ecx
        push    esi
        call    dword ptr [eax + 0x18]
        mov    edi, eax
        test    edi, edi
        jge    L_7e9b
        push    ebx
        call    FUN_0074de50
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    esi
        push    0x7ae7c8
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_7e9b
        int 3    
L_7e9b:
        mov    eax, edi
        pop    edi
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
        nop    
        nop    
        nop    
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
    }
}
