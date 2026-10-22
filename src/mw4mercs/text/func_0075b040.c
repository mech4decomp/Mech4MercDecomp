/*
 * FUN_0075b040 (extent 0x75b040-0x75b0cb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0075b040(void)
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
        call    dword ptr [eax + 0x1c]
        mov    esi, eax
        test    esi, esi
        jge    L_b083
        test    ebx, ebx
        mov    eax, 0x7af3b0
        jne    L_b067
        mov    eax, 0x794cf8
L_b067:
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af388
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_b083
        int 3    
L_b083:
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
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0x18]
        mov    esi, eax
        test    esi, esi
        jge    L_b0c3
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af3b4
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_b0c3
        int 3    
L_b0c3:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
    }
}
