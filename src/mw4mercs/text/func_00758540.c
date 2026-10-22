/*
 * FUN_00758540 (extent 0x758540-0x7585d7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750700(void);
extern void __cdecl FUN_00750720(void);

__declspec(naked) void FUN_00758540(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x44]
        mov    esi, eax
        test    esi, esi
        jge    L_856f
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aeb8c
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_856f
        int 3    
L_856f:
        pop    edi
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
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_85ce
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    ebx
        call    FUN_00750720
        push    eax
        push    ebx
        call    FUN_00750700
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aebc0
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_85ce
        int 3    
L_85ce:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
    }
}
