/*
 * FUN_005e845b (extent 0x5e845b-0x5e84fd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005e8500(void);
extern void __cdecl FUN_005fa070(void);
extern void __cdecl FUN_005fbc80(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005e845b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
        pop    esi
        ret    
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
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        ret    
        push    ebp
        mov    ebp, esp
        push    esi
        push    0x76d414
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_84b8
        int 3    
L_84b8:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005fbc80
        pop    esi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        fld    qword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        fsub    qword ptr [esi + 0xe4]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_005e8500
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005fa070
        pop    esi
        ret    8
    }
}
