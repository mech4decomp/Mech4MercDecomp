/*
 * FUN_00755330 (extent 0x755330-0x7553c4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dda0(void);
extern void __cdecl FUN_00750550(void);
extern void __cdecl FUN_00750780(void);

__declspec(naked) void FUN_00755330(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    edx
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x24]
        mov    esi, eax
        test    esi, esi
        jge    L_5375
        push    edi
        call    FUN_00750780
        push    eax
        push    ebx
        call    FUN_00750550
        push    eax
        push    0x7ae1b4
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_5375
        int 3    
L_5375:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
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
    }
}
