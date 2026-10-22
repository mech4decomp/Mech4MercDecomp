/*
 * FUN_00755460 (extent 0x755460-0x7554e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074c6c0(void);

__declspec(naked) void FUN_00755460(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x1c]
        mov    esi, eax
        test    esi, esi
        jge    L_548d
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae26c
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_548d
        int 3    
L_548d:
        mov    eax, esi
        pop    esi
        pop    ebp
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
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x24]
        mov    esi, eax
        test    esi, esi
        jge    L_54df
        push    ebx
        call    FUN_0074c6c0
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae28c
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_54df
        int 3    
L_54df:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
