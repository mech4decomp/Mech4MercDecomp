/*
 * FUN_00755550 (extent 0x755550-0x7555db) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750550(void);

__declspec(naked) void FUN_00755550(void)
{
    __asm {
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
        call    dword ptr [eax + 0x3c]
        mov    esi, eax
        test    esi, esi
        jge    L_55d3
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae31c
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_55d3
        int 3    
L_55d3:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
    }
}
