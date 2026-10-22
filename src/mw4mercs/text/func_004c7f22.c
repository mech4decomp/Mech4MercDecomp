/*
 * FUN_004c7f22 (extent 0x4c7f22-0x4c80ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004c7c70(void);
extern void __cdecl FUN_004c7d10(void);
extern void __cdecl FUN_004c7e70(void);
extern void __cdecl FUN_004c7f90(void);

__declspec(naked) void FUN_004c7f22(void)
{
    __asm {
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7e70
        xor    eax, eax
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7e70
        or    eax, 0xffffffff
        ret    4
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c7e70
        push    edi
        mov    ecx, esi
        call    FUN_004c7c70
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c7e70
        push    edi
        mov    ecx, esi
        call    FUN_004c7d10
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x30
        mov    eax, dword ptr [esp + 0x34]
        mov    edx, dword ptr [eax + 0x9c]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax + 0x8c]
        mov    eax, dword ptr [eax + 0xac]
        mov    dword ptr [esp + 4], ecx
        mov    ecx, dword ptr [esi + 0x10]
        add    ecx, 0x80
        mov    dword ptr [esp + 8], edx
        push    ecx
        lea    edx, [esp + 8]
        push    edx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x14], eax
        call    FUN_0041c830
        fld    dword ptr [esi + 0x2c]
        fld    dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi + 0x3c]
        mov    edx, dword ptr [esi + 0x4c]
        fsub st(0), st(1)
        lea    ecx, [esi + 0x20]
        mov    dword ptr [esp + 0x20], eax
        fstp    dword ptr [esp + 0x28]
        push    -1
        push    1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x2c], edx
        fld    dword ptr [esp + 0x1c]
        push    2
        fsub    dword ptr [esp + 0x2c]
        lea    eax, [esp + 0x34]
        push    eax
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x40]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        and    ecx, 0xffffffee
        or    ecx, 4
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        mov    ecx, esi
        call    dword ptr [esi + 0x1c]
        or    dword ptr [esi + 0x18], 0x10
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        pop    esi
        add    esp, 0x30
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7f90
        xor    eax, eax
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7f90
        or    eax, 0xffffffff
        ret    4
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c7f90
        push    edi
        mov    ecx, esi
        call    FUN_004c7c70
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c7f90
        push    edi
        mov    ecx, esi
        call    FUN_004c7d10
        pop    edi
        pop    esi
        ret    4
    }
}
