/*
 * FUN_007554e8 (extent 0x7554e8-0x755546) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074ddf0(void);
extern void __cdecl FUN_00752210(void);

__declspec(naked) void FUN_007554e8(void)
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
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x18]
        push    edi
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov    esi, eax
        test    esi, esi
        jge    L_553d
        push    edi
        call    FUN_00752210
        push    eax
        push    ebx
        call    FUN_0074ddf0
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae2bc
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_553d
        int 3    
L_553d:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
