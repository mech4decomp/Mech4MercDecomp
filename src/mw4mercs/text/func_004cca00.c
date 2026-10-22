/*
 * FUN_004cca00 (149 B) — __thiscall network stats update. Iterates over
 * 0x12 sub-objects, comparing a timer (FUN_00707e70) against a stored
 * double; when the elapsed time exceeds a threshold (0x76d968), it
 * refreshes the stored timestamp and rolls the per-slot counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_007dab44;
extern int    g_007dab40;
extern double g_0076d968;
extern double __cdecl FUN_00707e70(int);

__declspec(naked) void FUN_004cca00(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        push    edi
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0xc]
        xor     eax, 0x85739531
        cmp     dword ptr [eax+0x5c], 0x1
        jz      L93
        mov     edi, dword ptr [ecx+0x1814]
        push    ebx
        push    ebp
        push    esi
        lea     esi, [edi+0xbfc]
        mov     ebp, 0x12
        xor     ebx, ebx
    L32:
        push    ebx
        call    FUN_00707e70
        fsub    qword ptr [esi+0x8]
        fcomp   qword ptr [g_0076d968]
        __emit 0xDF /* __emit: fnstsw ax needs no-WAIT DF E0 form; MSVC6 inserts 9B WAIT */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit 0xC4
        __emit 0x41
        jnz     L81
        push    ebx
        mov     byte ptr [edi], 0x1
        call    FUN_00707e70
        fstp    qword ptr [esi+0x8]
        mov     dword ptr [esi], ebx
        lea     eax, [esi+0xfffff808]
        mov     ecx, 0xff
    L61:
        mov     edx, dword ptr [eax+0xfffffc04]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0xfffffc04], ebx
        mov     edx, dword ptr [eax]
        add     dword ptr [esi], edx
        mov     edx, dword ptr [eax]
        add     dword ptr [eax+0x3fc], edx
        add     eax, 0x4
        dec     ecx
        jnz     L61
    L81:
        add     edi, 0xc0c
        add     esi, 0xc0c
        dec     ebp
        jnz     L32
        pop     esi
        pop     ebp
        pop     ebx
    L93:
        pop     edi
        ret
    }
}
