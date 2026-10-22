/*
 * FUN_006fccc9 (extent 0x6fccc9-0x6fcdc7, 254 B) - residual: alignment pad +
 * tail of prior function's jump table (36 dwords) + nops + real code.
 */
#pragma warning(disable : 4035 4793)

extern char   g_00856804;
extern int    g_00856810;
extern int    g_00856814;
extern int    g_0085682c;
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void FUN_006fccc9(void)
{
    __asm {
        __emit 0x8D  /* alignment pad lea ecx,[ecx+0] (8D 49 00) */
        __emit 0x49
        __emit 0x00
        /* jump-table dwords (patched absolute addresses) - literal bytes */
        __emit 0x63  /* -> 0x006FCB63 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x69  /* -> 0x006FCB69 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x6F  /* -> 0x006FCB6F */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x75  /* -> 0x006FCB75 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x7B  /* -> 0x006FCB7B */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x81  /* -> 0x006FCB81 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x87  /* -> 0x006FCB87 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x8D  /* -> 0x006FCB8D */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x93  /* -> 0x006FCB93 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x99  /* -> 0x006FCB99 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xC3  /* -> 0x006FCBC3 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xC9  /* -> 0x006FCBC9 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xCF  /* -> 0x006FCBCF */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xD5  /* -> 0x006FCBD5 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xDB  /* -> 0x006FCBDB */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xE1  /* -> 0x006FCBE1 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xE7  /* -> 0x006FCBE7 */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0xED  /* -> 0x006FCBED */
        __emit 0xCB
        __emit 0x6F
        __emit 0x00
        __emit 0x17  /* -> 0x006FCC17 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x1D  /* -> 0x006FCC1D */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x23  /* -> 0x006FCC23 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x29  /* -> 0x006FCC29 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x2F  /* -> 0x006FCC2F */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x35  /* -> 0x006FCC35 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x3B  /* -> 0x006FCC3B */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x41  /* -> 0x006FCC41 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x67  /* -> 0x006FCC67 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x6D  /* -> 0x006FCC6D */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x73  /* -> 0x006FCC73 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x79  /* -> 0x006FCC79 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x7F  /* -> 0x006FCC7F */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x85  /* -> 0x006FCC85 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x8B  /* -> 0x006FCC8B */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x91  /* -> 0x006FCC91 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x97  /* -> 0x006FCC97 */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        __emit 0x9D  /* -> 0x006FCC9D */
        __emit 0xCC
        __emit 0x6F
        __emit 0x00
        nop
        nop
        nop
        nop
        cmp     byte ptr [g_00856804], 1
        jne     L_cd83
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [g_00856810]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [g_00856814]
        mov     dword ptr [edx], eax
        ret     8
L_cd83:
        call    FUN_006f5ed0
        mov     eax, dword ptr [g_0085682c]
        test    eax, eax
        je      L_cdab
        mov     ecx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        call    FUN_006f5ee0
        ret     8
L_cdab:
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edx], 0xffffffff
        mov     dword ptr [eax], 0xffffffff
        call    FUN_006f5ee0
        ret     8
    }
}
