/*
 * FUN_005cad59 (extent 0x5cad59-0x5cae1f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005dd6e0(void);
extern void __cdecl FUN_006832a0(void);

__declspec(naked) void FUN_005cad59(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_ad7e
        mov    edx, dword ptr [esp + 4]
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x20]
        ret    4
L_ad7e:
        xor    al, al
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x5f4]
        test    eax, 0xfffffffc
        je    L_adaf
        mov    edx, dword ptr [esp + 4]
        mov    ecx, eax
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x24]
        ret    4
L_adaf:
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005dd6e0
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        lea    esi, [edi + 0x1c8]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_ae00
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [g_007f268c]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_ae00
        mov    edi, dword ptr [edi + 0x170]
        mov    ecx, esi
        call    FUN_0041fd80
        push    eax
        push    edi
        jmp    L_ae09
L_ae00:
        mov    edx, dword ptr [edi + 0x170]
        push    0
        push    edx
L_ae09:
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [eax + 0x18]
        push    ecx
        push    eax
        call    FUN_006832a0
        add    esp, 0x10
        pop    edi
        pop    esi
        ret    4
    }
}
