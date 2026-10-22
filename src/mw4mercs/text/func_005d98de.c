/*
 * FUN_005d98de (extent 0x5d98de-0x5d993f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6b8;
extern void __cdecl FUN_004dfd70(void);
extern void __cdecl FUN_0068f420(void);

__declspec(naked) void FUN_005d98de(void)
{
    __asm {
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        test    ecx, ecx
        jne    L_98ee
        xor    al, al
        ret    0x10
L_98ee:
        mov    dl, byte ptr [eax + 0xc]
        test    dl, dl
        je    L_98fa
        xor    al, al
        ret    0x10
L_98fa:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    edx
        call    FUN_0068f420
        mov    al, 1
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc6b8]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004dfd70
        mov    dword ptr [esi], 0x7882a4
        mov    dword ptr [esi + 0x10], 0
        mov    eax, esi
        pop    esi
        ret    
    }
}
