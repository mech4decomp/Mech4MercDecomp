/*
 * FUN_0075b280 (extent 0x75b280-0x75b336) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750300(void);
extern void __cdecl FUN_00751de0(void);

__declspec(naked) void FUN_0075b280(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x20
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
        call    dword ptr [eax + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_b2da
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x10]
        push    ebx
        push    edx
        push    eax
        lea    ecx, [ebp - 0x20]
        push    ecx
        call    FUN_00750300
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af4dc
        call    FUN_006fabf0
        add    esp, 0x20
        test    eax, eax
        je    L_b2da
        int 3    
L_b2da:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
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
        nop    
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    0
        push    ebx
        push    edi
        call    dword ptr [eax + 0x28]
        mov    esi, eax
        test    esi, esi
        jge    L_b32d
        push    ebx
        call    FUN_00751de0
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af518
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_b32d
        int 3    
L_b32d:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
    }
}
