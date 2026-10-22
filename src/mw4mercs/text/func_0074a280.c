/*
 * FUN_0074a280 (extent 0x74a280-0x74a2f4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0074a280(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_a2b5
        cmp    esi, 0x887601c2
        je    L_a2b5
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa6ac
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a2b5
        int 3    
L_a2b5:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x18]
        mov    esi, eax
        test    esi, esi
        jge    L_a2ed
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa6d0
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a2ed
        int 3    
L_a2ed:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    4
    }
}
