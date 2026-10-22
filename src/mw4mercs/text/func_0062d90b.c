/*
 * FUN_0062d90b (extent 0x62d90b-0x62d985) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041ec50(void);

__declspec(naked) void FUN_0062d90b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x10
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        xor    ecx, 0x85739531
        test    al, al
        je    L_d96c
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [ecx + 0x92c]
        lea    edx, [eax + eax*2]
        lea    eax, [eax + edx*4]
        lea    ecx, [ecx + eax*4 + 0x37d4]
        add    ecx, 0x14
        push    0x10
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        call    FUN_0041ec50
        ret    
L_d96c:
        mov    ecx, dword ptr [ecx + 0x930]
        add    ecx, 0x18
        add    ecx, 0x14
        push    0x10
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        call    FUN_0041ec50
        ret    
    }
}
