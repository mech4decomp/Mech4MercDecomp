/*
 * FUN_005dba90 (extent 0x5dba90-0x5dbaf1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f24d4;
extern void __cdecl FUN_004f46a0(void);

__declspec(naked) void FUN_005dba90(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004f46a0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x17fc]
        test    cl, cl
        jne    L_bacc
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]
L_bacc:
        pop    esi
        ret    4
        mov    al, byte ptr [ecx + 0x300]
        test    al, al
        mov    al, byte ptr [esp + 4]
        jne    L_bae8
        test    al, al
        je    L_bae8
        inc    dword ptr [g_007f24d4]
L_bae8:
        mov    byte ptr [ecx + 0x300], al
        ret    4
    }
}
