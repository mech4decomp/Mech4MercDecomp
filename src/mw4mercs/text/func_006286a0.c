/*
 * FUN_006286a0 (69 B) - Membership lookup in a hash/table.
 *
 * __cdecl, one uint param. Reads DAT_007dab44/DAT_007dab40, walks a
 * linked structure via FUN_00623550(), scans for a matching entry.
 * Returns bool in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void *FUN_00623550(void);

__declspec(naked) unsigned char __cdecl FUN_006286a0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x225c]
        test    ecx, ecx
        jz      L_df
        call    FUN_00623550
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax + 4]
        cmp     ecx, eax
        jz      L_df
L_d4:
        mov     edx, dword ptr [esp + 4]
        cmp     dword ptr [ecx], edx
        jz      L_e2
        add     ecx, 4
        cmp     ecx, eax
        __emit 0x75   /* __emit: backward jnz L_d4; MSVC6 miscomputes rel8 (off-by-4) when a call-reloc precedes the loop */
        __emit 0xF5
L_df:
        xor     al, al
        ret
L_e2:
        mov     al, 1
        ret
    }
}
