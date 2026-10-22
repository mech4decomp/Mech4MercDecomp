/*
 * FUN_004308f7 (extent 0x4308f7-0x4309ae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87ec;
extern int    g_007b97fc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00430c60(void);
extern void __cdecl FUN_004824f0(void);

__declspec(naked) void FUN_004308f7(void)
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
        mov    eax, dword ptr [g_007b97fc]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004824f0
        mov    edx, 1
        mov    dword ptr [esi + 0x9c], edx
        mov    dword ptr [esi + 0xa0], edx
        mov    edx, 0x449d8000
        mov    dword ptr [esi + 0x8c], edx
        mov    dword ptr [esi + 0x90], edx
        xor    eax, eax
        mov    edx, 0x3a500d01
        mov    dword ptr [esi + 0x94], edx
        mov    dword ptr [esi + 0x98], edx
        mov    edx, dword ptr [g_007b87ec]
        lea    ecx, [esi + 0xa4]
        mov    dword ptr [ecx], eax
        push    edx
        mov    dword ptr [esi], 0x76e254
        mov    dword ptr [esi + 0x80], eax
        mov    dword ptr [esi + 0x84], eax
        mov    dword ptr [esi + 0x88], eax
        mov    dword ptr [esi + 0xa8], 0x3f000000
        mov    dword ptr [esi + 0xac], eax
        call    FUN_00412740
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
        push    esi
        mov    esi, ecx
        call    FUN_00430c60
        test    byte ptr [esp + 8], 1
        je    L_09a8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_09a8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
