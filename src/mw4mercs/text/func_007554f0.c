/*
 * FUN_007554f0 (extent 0x7554f0-0x75559c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074ddf0(void);
extern void __cdecl FUN_00750550(void);
extern void __cdecl FUN_00752210(void);

__declspec(naked) void FUN_007554f0(void)
{
    __asm {
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
        call    dword ptr [eax + 0x18]
        mov    esi, eax
        test    esi, esi
        jge    L_5593
        mov    edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        call    FUN_00750550
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae2e8
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_5593
        int 3    
L_5593:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
