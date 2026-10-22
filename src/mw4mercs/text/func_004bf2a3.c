/*
 * FUN_004bf2a3 (extent 0x4bf2a3-0x4bf371) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daad8;
extern int    g_007daadc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004bede0(void);
extern void __cdecl FUN_004c6960(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004bf2a3(void)
{
    __asm {
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
        mov    eax, dword ptr [g_007daad8]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x150
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f2f7
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    1
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [g_007daadc]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004bede0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_f2f7:
        xor    esi, esi
        call    FUN_006f49a0
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    ebx, ecx
        push    edi
        call    FUN_004c6960
        mov    eax, dword ptr [ebx + 0x148]
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0x10], eax
        push    2
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        xor    esi, esi
        cmp    word ptr [esp + 0x10], si
        jbe    L_f35f
        mov    ebx, dword ptr [ebx + 0x144]
L_f346:
        mov    ecx, esi
        and    ecx, 0xffff
        mov    ecx, dword ptr [ebx + ecx*4]
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        inc    esi
        cmp    si, word ptr [esp + 0x10]
        jb    L_f346
L_f35f:
        pop    edi
        pop    esi
        pop    ebx
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
        ret    
    }
}
