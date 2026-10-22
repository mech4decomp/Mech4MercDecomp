/*
 * FUN_004165ee (extent 0x4165ee-0x416649) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416840(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004165ee(void)
{
    __asm {
        nop    
        nop    
        push    esi
        push    0x76d4f8
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6605
        int 3    
L_6605:
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x14]
        test    esi, esi
        je    L_6644
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        je    L_662d
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
L_662d:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jne    L_6644
        mov    ecx, dword ptr [edi + 0x10]
        inc    ecx
        push    ecx
        mov    ecx, edi
        call    FUN_00416840
L_6644:
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
    }
}
