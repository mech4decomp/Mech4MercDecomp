/*
 * FUN_0043070b (extent 0x43070b-0x43079f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b960c;
extern void __cdecl FUN_00491340(void);

__declspec(naked) void FUN_0043070b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
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
        xor    eax, eax
        ret    
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
        xor    eax, eax
        ret    
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
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 8]
        cmp    eax, 0x100
        jae    L_075b
        xor    al, al
        pop    esi
        ret    4
L_075b:
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [esi + 0x10]
        lea    ecx, [esi + 0xc]
        or    eax, 0xf
        mov    dword ptr [ecx + 0x10], eax
        mov    eax, dword ptr [esp + 8]
        and    edx, 0xfffffff0
        or    edx, eax
        mov    eax, dword ptr [g_007b960c]
        push    eax
        mov    dword ptr [ecx + 4], edx
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_0799
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_0799:
        mov    al, 1
        pop    esi
        ret    4
    }
}
