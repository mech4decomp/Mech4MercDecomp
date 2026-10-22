/*
 * FUN_00741930 (extent 0x741930-0x7419ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074c710(void);
extern void __cdecl FUN_0074d4d0(void);
extern void __cdecl FUN_0074d9b0(void);

__declspec(naked) void FUN_00741930(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x98]
        mov    esi, eax
        test    esi, esi
        jge    L_1970
        push    edi
        call    FUN_0074c710
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9530
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_1970
        int 3    
L_1970:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
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
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x60]
        mov    esi, eax
        test    esi, esi
        jge    L_19c5
        push    ebx
        call    FUN_0074d4d0
        push    eax
        push    edi
        call    FUN_0074d9b0
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9560
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_19c5
        int 3    
L_19c5:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
