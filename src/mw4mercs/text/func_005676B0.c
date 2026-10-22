/*
 * FUN_005676B0 (extent 0x5676B0-0x567723, 115 B) - .text data block.
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

__declspec(naked) void FUN_005676B0(void)
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
        mov    edx, dword ptr [g_0080d9bc]
        mov    ecx, dword ptr [g_0080592c]
        add    esp, 4
        cmp    eax, edx
        jne    L_f2
        mov    eax, dword ptr [ecx]
        test   eax, eax
        jge    L_ee
        neg    eax
        mov    dword ptr [ecx], eax
    L_ee:
        mov    eax, edx
        jmp    L_0c
    L_f2:
        fld    dword ptr [ecx]
        fcomp  qword ptr [g_0076d970]
        /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,1 (MSVC6 rejects test ah,imm8) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je     L_07
        fld    dword ptr [ecx]
        fchs
        fstp   dword ptr [ecx]
    L_07:
        mov    eax, dword ptr [g_0080d9b4]
    L_0c:
        mov    ecx, dword ptr [g_00805918]
        movsx  edx, byte ptr [ecx]
        inc    ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], ecx
        ret
    }
}
