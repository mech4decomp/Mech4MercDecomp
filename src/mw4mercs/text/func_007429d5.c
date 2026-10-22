/*
 * FUN_007429d5 (extent 0x7429d5-0x742a69) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008abd28;
extern int    g_008abd2c;
extern int    g_008abd30;
extern int    g_008abd34;
extern int    g_008abd38;
extern int    g_008abd3c;
extern int    g_008abd40;
extern int    g_008abd44;
extern int    g_008abd48;

__declspec(naked) void FUN_007429d5(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [g_008abd3c]
        xor    edx, edx
        mov    dl, ah
        push    ebx
        xor    ebx, ebx
        mov    bl, byte ptr [esp + 0xa]
        and    eax, 0xff
        shr    edx, cl
        and    edx, dword ptr [g_008abd38]
        mov    ecx, dword ptr [g_008abd34]
        shl    edx, cl
        mov    ecx, dword ptr [g_008abd48]
        shr    ebx, cl
        and    ebx, dword ptr [g_008abd44]
        mov    ecx, dword ptr [g_008abd40]
        shl    ebx, cl
        mov    ecx, dword ptr [g_008abd30]
        shr    eax, cl
        mov    ecx, dword ptr [g_008abd2c]
        or    edx, ebx
        pop    ebx
        and    eax, ecx
        mov    ecx, dword ptr [g_008abd28]
        shl    eax, cl
        or    eax, edx
        ret    4
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        push    esi
        xor    ecx, ecx
L_2a49:
        mov    esi, 1
        shl    esi, cl
        test    esi, edx
        je    L_2a55
        inc    eax
L_2a55:
        inc    ecx
        cmp    ecx, 0x20
        jl    L_2a49
        cmp    eax, 8
        pop    esi
        jbe    L_2a66
        mov    eax, 8
L_2a66:
        ret    4
    }
}
