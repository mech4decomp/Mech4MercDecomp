/*
 * FUN_00757fa0 (extent 0x757fa0-0x758051) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00752860(void);

__declspec(naked) void FUN_00757fa0(void)
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
        call    dword ptr [eax + 0x2c]
        mov    esi, eax
        test    esi, esi
        jge    L_7fe8
        push    ebx
        call    FUN_00752860
        fld    dword ptr [ebp + 0xc]
        push    eax
        sub    esp, 8
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae868
        call    FUN_006fabf0
        add    esp, 0x1c
        test    eax, eax
        je    L_7fe8
        int 3    
L_7fe8:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        call    dword ptr [eax + 0x30]
        mov    esi, eax
        test    esi, esi
        jge    L_8048
        push    ebx
        call    FUN_00752860
        fld    dword ptr [ebp + 0xc]
        push    eax
        sub    esp, 8
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae8a0
        call    FUN_006fabf0
        add    esp, 0x1c
        test    eax, eax
        je    L_8048
        int 3    
L_8048:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
