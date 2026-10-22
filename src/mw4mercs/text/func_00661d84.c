/*
 * FUN_00661d84 (extent 0x661d84-0x661e0c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00794e48;
extern float  g_00794e4c;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00661d84(void)
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
        push    ecx
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fst    dword ptr [esp + 4]
        mov    dword ptr [esi + 0x14], 0
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 8], 0xbf800000
        mov    dword ptr [esi + 0x10], 0x3f800000
        mov    dword ptr [esi + 0x18], 0
        mov    dword ptr [esi + 0x20], 0
        mov    dword ptr [esi], 0x795410
        call    FUN_00415020
        fld    dword ptr [g_00794e4c]
        fsub    dword ptr [g_00794e48]
        fmulp st(1), st(0)
        fadd    dword ptr [esp + 4]
        fadd    dword ptr [g_00794e48]
        fstp    dword ptr [esi + 0x1c]
        call    FUN_00415020
        fadd    dword ptr [esp + 4]
        mov    eax, esi
        fstp    dword ptr [esi + 4]
        pop    esi
        pop    ecx
        ret    
    }
}
