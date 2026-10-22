/*
 * FUN_007011a0 (62 B) — __stdcall, RET 4 (one stack param).
 *
 * Cleanup/destructor: releases two sub-objects via vtable slot +8,
 * calls FreeLibrary on the module handle at +0x10, zeroes +0x10 and
 * +0xc, returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b0b8;   /* IAT: FreeLibrary */

__declspec(naked) int __stdcall FUN_007011a0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      short loc_7011b2
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
loc_7011b2:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      short loc_7011bf
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
loc_7011bf:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      short loc_7011d4
        push    eax
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x10], 0
loc_7011d4:
        mov     byte ptr [esi + 0xc], 0
        xor     eax, eax
        pop     esi
        ret     4
    }
}
