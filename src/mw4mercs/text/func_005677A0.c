/*
 * FUN_005677A0 (extent 0x5677A0-0x567813, 115 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00805918;
extern int    g_00805908;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern int    g_0080d9b4;
extern double g_0076d970;
extern void   __cdecl FUN_0064DB40(void);
extern void   __cdecl FUN_0064C950(void);
extern void   __cdecl FUN_00563060(void);

__declspec(naked) void FUN_005677A0(void)
{
    __asm {
        mov    eax, dword ptr [g_00805918]
        movsx  ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call   FUN_0064DB40
        push   eax
        call   FUN_0064C950
        mov    ecx, dword ptr [g_0080d9bc]
        add    esp, 4
        cmp    eax, ecx
        mov    ecx, dword ptr [g_0080592c]
        jne    L_d8
        fild   dword ptr [ecx]
        fstp   dword ptr [ecx]
    L_d8:
        fld    dword ptr [ecx]
        fcomp  qword ptr [g_0076d970]
        /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,1 (MSVC6 rejects test ah,imm8) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je     L_f3
        push   6
        call   FUN_00563060
        add    esp, 4
        jmp    L_f9
    L_f3:
        fld    dword ptr [ecx]
        fsqrt
        fstp   dword ptr [ecx]
    L_f9:
        mov    eax, dword ptr [g_00805918]
        movsx  edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b4]
        mov    dword ptr [g_00805908], edx
        ret
    }
}
