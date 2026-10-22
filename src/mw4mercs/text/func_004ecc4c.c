/*
 * FUN_004ecc4c (extent 0x4ecc4c-0x4ecd24) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00774824;
extern void __cdecl FUN_00728fd0(void);

__declspec(naked) void FUN_004ecc4c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        cmp    eax, 4
        ja    L_cd20
        jmp    dword ptr [eax*4 + 0x4ecd24]
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ecx + 0x14]
        push    edx
        push    eax
        push    0x774858
        call    FUN_00728fd0
        add    esp, 0xc
        ret    
        mov    edx, dword ptr [ecx + 0x10]
        fld    dword ptr [edx]
        mov    eax, dword ptr [ecx + 0x14]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    eax
        push    0x77484c
        call    FUN_00728fd0
        add    esp, 0x10
        ret    
        mov    edx, dword ptr [ecx + 0x10]
        mov    eax, dword ptr [ecx + 0x14]
        push    edx
        push    eax
        push    0x774840
        call    FUN_00728fd0
        add    esp, 0xc
        ret    
        mov    eax, dword ptr [ecx + 0x10]
        fld    dword ptr [eax + 8]
        mov    ecx, dword ptr [ecx + 0x14]
        sub    esp, 8
        fstp    qword ptr [esp]
        sub    esp, 8
        fld    dword ptr [eax + 4]
        sub    esp, 8
        fstp    qword ptr [esp + 8]
        fld    dword ptr [eax]
        fstp    qword ptr [esp]
        push    ecx
        push    0x77482c
        call    FUN_00728fd0
        add    esp, 0x20
        ret    
        mov    eax, dword ptr [ecx + 0x10]
        fld    dword ptr [eax + 8]
        mov    edx, dword ptr [ecx + 0x14]
        sub    esp, 8
        fmul    dword ptr [g_00774824]
        sub    esp, 8
        sub    esp, 8
        fstp    qword ptr [esp + 0x10]
        fld    dword ptr [eax + 4]
        fmul    dword ptr [g_00774824]
        fstp    qword ptr [esp + 8]
        fld    dword ptr [eax]
        fmul    dword ptr [g_00774824]
        fstp    qword ptr [esp]
        push    edx
        push    0x77482c
        call    FUN_00728fd0
        add    esp, 0x20
L_cd20:
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x004ECD24 (7 relocated pointers)
        __emit 0x63
        __emit 0xCC
        __emit 0x4E
        __emit 0x00
        __emit 0x7B
        __emit 0xCC
        __emit 0x4E
        __emit 0x00
        __emit 0x98
        __emit 0xCC
        __emit 0x4E
        __emit 0x00
        __emit 0xAE
        __emit 0xCC
        __emit 0x4E
        __emit 0x00
        __emit 0xDE
        __emit 0xCC
        __emit 0x4E
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
