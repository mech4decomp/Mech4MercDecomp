/*
 * FUN_004f4f7d (extent 0x4f4f7d-0x4f505a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004dabf0(void);

__declspec(naked) void FUN_004f4f7d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        lea    eax, [ecx + 0xc]
        xor    edx, 0x85739531
        mov    cl, byte ptr [edx + 0x16]
        test    cl, cl
        je    L_4fdd
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x50]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je    L_4fdd
        mov    edx, dword ptr [esi + 0x10]
        and    edx, 0xfffffeff
        or    edx, 0x80
        mov    byte ptr [esi + 0x250], 0
        mov    dword ptr [esi + 0x254], 0
        mov    dword ptr [esi + 0x10], edx
        pop    esi
        ret    4
L_4fdd:
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    cl, byte ptr [eax + 0x50]
        test    cl, cl
        mov    ecx, dword ptr [esi + 0xe0]
        je    L_500c
        mov    edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, esi
        call    FUN_004dabf0
        pop    esi
        ret    4
L_500c:
        mov    eax, dword ptr [ecx]
        push    0
        push    4
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, esi
        call    FUN_004dabf0
        pop    esi
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
        mov    edx, dword ptr [ecx + 0x10]
        push    esi
        or    edx, 0x1000000
        lea    esi, [ecx + 0x210]
        mov    dword ptr [ecx + 0x10], edx
        mov    ecx, esi
        call    FUN_0041fcb0
        mov    eax, dword ptr [esp + 8]
        push    eax
        mov    ecx, esi
        call    FUN_0041fcd0
        pop    esi
        ret    4
    }
}
