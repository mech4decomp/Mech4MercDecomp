/*
 * FUN_00627a60 (extent 0x627a60-0x627acc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00627ad0(void);

__declspec(naked) void FUN_00627a60(void)
{
    __asm {
        mov    dl, byte ptr [ecx + 0x16b]
        test    dl, dl
        sete    al
        test    al, al
        mov    byte ptr [ecx + 0x16b], al
        je    L_7a7a
        __emit 0xE9  /* near jmp rel32; MSVC6 collapses to short EB form */
        __emit 0x06
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_7a7a:
        jmp    FUN_00627ad0
        nop    
L_7a80:
        mov    byte ptr [ecx + 0x16b], 1
        mov    ecx, dword ptr [ecx + 0x14c]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x2c]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x2c]
        je    L_7acb
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax]
        xor    edx, 0x85739531
        xor    eax, 0x85739531
        mov    byte ptr [edx + 0x588], 0
        mov    byte ptr [eax + 0x585], 1
L_7acb:
        ret    
    }
}
