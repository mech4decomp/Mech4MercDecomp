/*
 * FUN_004f11fb (extent 0x4f11fb-0x4f126b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007b220c;
extern void __cdecl FUN_004f14c0(void);

__declspec(naked) void FUN_004f11fb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        lea    eax, [ecx + 0x30]
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
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x34]
        mov    dword ptr [esi + 0x30], eax
        sub    eax, ecx
        mov    dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_1255
        mov    eax, dword ptr [esi + 0x38]
        cmp    eax, -1
        je    L_1267
        mov    ecx, esi
        mov    dword ptr [esi + 0x2c], eax
        call    FUN_004f14c0
        pop    esi
        ret    4
L_1255:
        mov    eax, dword ptr [esi + 0x3c]
        cmp    eax, -1
        je    L_1267
        mov    ecx, esi
        mov    dword ptr [esi + 0x2c], eax
        call    FUN_004f14c0
L_1267:
        pop    esi
        ret    4
    }
}
