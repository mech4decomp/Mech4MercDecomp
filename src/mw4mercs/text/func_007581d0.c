/*
 * FUN_007581d0 (extent 0x7581d0-0x7582ac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00752860(void);

__declspec(naked) void FUN_007581d0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
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
        call    dword ptr [eax + 0x38]
        mov    esi, eax
        test    esi, esi
        jge    L_8233
        push    ebx
        call    FUN_00752860
        fld    dword ptr [ebp + 0x14]
        push    eax
        sub    esp, 8
        fstp    qword ptr [esp]
        sub    esp, 8
        fld    dword ptr [ebp + 0x10]
        sub    esp, 8
        fstp    qword ptr [esp + 8]
        fld    dword ptr [ebp + 0xc]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae990
        call    FUN_006fabf0
        add    esp, 0x2c
        test    eax, eax
        je    L_8233
        int 3    
L_8233:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
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
        call    dword ptr [eax + 0x50]
        mov    esi, eax
        test    esi, esi
        jge    L_82a3
        push    ebx
        call    FUN_00752860
        fld    dword ptr [ebp + 0x14]
        push    eax
        sub    esp, 8
        fstp    qword ptr [esp]
        sub    esp, 8
        fld    dword ptr [ebp + 0x10]
        sub    esp, 8
        fstp    qword ptr [esp + 8]
        fld    dword ptr [ebp + 0xc]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae9cc
        call    FUN_006fabf0
        add    esp, 0x2c
        test    eax, eax
        je    L_82a3
        int 3    
L_82a3:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
