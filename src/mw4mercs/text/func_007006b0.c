/*
 * FUN_007006b0 (121 B) — Global-object teardown / re-init helper.
 *
 * __stdcall, RET 4 (one stack param). Always returns 1.
 * Calls FUN_006f8e80 + FUN_007006a0 on the param, tears down the
 * global object at 0x00856860 (virtual calls + FUN_006fd1b0 +
 * FUN_004084e0), zeroes the global, then re-inits via FUN_006f89f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f8e80(void);
extern void FUN_007006a0(void);
extern void __stdcall FUN_006fd1b0(void);
extern void __cdecl FUN_004084e0(void);
extern void FUN_006f89f0(void);
extern void FUN_006f6760(void);
extern int g_856860;

__declspec(naked) void __stdcall FUN_007006b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006f8e80
        mov     ecx, esi
        call    FUN_007006a0
        mov     eax, dword ptr [g_856860]
        test    eax, eax
        jz      loc_707
        mov     eax, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 0x8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     edx, dword ptr [g_856860]
        push    edx
        call    FUN_006fd1b0
        mov     eax, dword ptr [g_856860]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_856860], 0
loc_707:
        call    FUN_006f89f0
        test    eax, eax
        jz      loc_71A
        call    FUN_006f89f0
        call    FUN_006f6760
loc_71A:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     al, 0x1
        pop     esi
        ret     4
    }
}
