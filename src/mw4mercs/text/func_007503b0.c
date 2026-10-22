/*
 * FUN_007503b0 (159 B) — __stdcall, RET 0x18 (6 params).
 *
 * Formats a debug string into &DAT_008b9c94 via sprintf. If (param_5 & 0x400)
 * it uses one format, otherwise another. Calls FUN_0074fdb0 and
 * FUN_00750300 (twice in the else branch) to build sub-strings.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;  /* sprintf IAT */

extern void __cdecl FUN_0074fdb0(int a, int b);
extern void __cdecl FUN_00750300(int a, int b, int c);

__declspec(naked) void __stdcall FUN_007503b0(int param_1, int param_2, int param_3,
                                              int param_4, int param_5, int param_6)
{
    __asm {
        mov     eax, dword ptr [esp + 0x14]
        sub     esp, 0x40
        test    ah, 0x4
        jz      LFB
        mov     ecx, dword ptr [esp + 0x58]
        push    ecx
        push    eax
        call    FUN_0074fdb0
        mov     edx, dword ptr [esp + 0x48]
        push    eax
        push    edx
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_00750300
        mov     ecx, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        push    0x7acc94
        push    0x8b9c94
        call    dword ptr [g_0076b420]
        add     esp, 0x14
        mov     eax, 0x8b9c94
        add     esp, 0x40
        ret     0x18
LFB:
        mov     edx, dword ptr [esp + 0x58]
        push    edx
        push    eax
        call    FUN_0074fdb0
        push    eax
        mov     eax, dword ptr [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    FUN_00750300
        mov     edx, dword ptr [esp + 0x50]
        push    eax
        mov     eax, dword ptr [esp + 0x50]
        push    edx
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_00750300
        mov     edx, dword ptr [esp + 0x50]
        push    eax
        push    edx
        push    0x7acc68
        push    0x8b9c94
        call    dword ptr [g_0076b420]
        add     esp, 0x1c
        mov     eax, 0x8b9c94
        add     esp, 0x40
        ret     0x18
    }
}
