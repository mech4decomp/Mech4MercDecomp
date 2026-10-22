/*
 * FUN_00710090 (146 B of a 149 B block) — __cdecl (no args, RET 0).
 * Same shape as FUN_0070FEC0: calls FUN_0070B130/FUN_00723BD0; if the
 * result is a space, copies the string at 0x7A1D60 (or 0x7A1D44 if
 * [0x85B608]==0) into 0x859BAC and sets flags 0x85A270/0x85B608.
 *
 * NOTE: the 149 B block is the head of a larger function; the complete
 * instructions in the slice end at 0x00710122 (146 B).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85b608;
extern int g_85a270;
extern void __cdecl FUN_0070B130(void);
extern void __cdecl FUN_00723BD0(void);

__declspec(naked) void FUN_00710090(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        call    FUN_0070B130
        call    FUN_00723BD0
        cmp     al, 0x20
        jne     loc_710119
        mov     eax, dword ptr [g_85b608]
        test    eax, eax
        je      loc_7100e5
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a1d60
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x859bac
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     dword ptr [g_85a270], 1
        mov     dword ptr [g_85b608], 0
        jmp     loc_710119
loc_7100e5:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a1d44
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x859bac
        rep     movsd
        mov     ecx, edx
        mov     eax, 1
        and     ecx, 3
        rep     movsb
        mov     dword ptr [g_85a270], eax
        mov     dword ptr [g_85b608], eax
loc_710119:
        push    0
        push    0
        push    0x3f800000
    }
}
