/*
 * FUN_00755380 (extent 0x755380-0x75541c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dda0(void);
extern void __cdecl FUN_007522d0(void);

__declspec(naked) void FUN_00755380(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x2c]
        mov    esi, eax
        test    esi, esi
        jge    L_53bb
        push    ebx
        call    FUN_0074dda0
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae1dc
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_53bb
        int 3    
L_53bb:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
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
        call    dword ptr [eax + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_5413
        push    ebx
        call    FUN_007522d0
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae20c
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_5413
        int 3    
L_5413:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
