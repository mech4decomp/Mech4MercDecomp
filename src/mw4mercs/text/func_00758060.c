/*
 * FUN_00758060 (extent 0x758060-0x758156) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00752860(void);

__declspec(naked) void FUN_00758060(void)
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
        call    dword ptr [eax + 0x3c]
        mov    esi, eax
        test    esi, esi
        jge    L_80a8
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
        push    0x7ae8d4
        call    FUN_006fabf0
        add    esp, 0x1c
        test    eax, eax
        je    L_80a8
        int 3    
L_80a8:
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
        mov    ecx, dword ptr [ebp + 0x20]
        mov    edx, dword ptr [ebp + 0x1c]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x24]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_814d
        push    ebx
        call    FUN_00752860
        fld    dword ptr [ebp + 0x20]
        push    eax
        sub    esp, 8
        fstp    qword ptr [esp]
        sub    esp, 8
        fld    dword ptr [ebp + 0x1c]
        sub    esp, 8
        fstp    qword ptr [esp + 8]
        sub    esp, 8
        fld    dword ptr [ebp + 0x18]
        sub    esp, 8
        fstp    qword ptr [esp + 0x10]
        sub    esp, 8
        fld    dword ptr [ebp + 0x14]
        fstp    qword ptr [esp + 0x10]
        fld    dword ptr [ebp + 0x10]
        fstp    qword ptr [esp + 8]
        fld    dword ptr [ebp + 0xc]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae908
        call    FUN_006fabf0
        add    esp, 0x44
        test    eax, eax
        je    L_814d
        int 3    
L_814d:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x20
    }
}
