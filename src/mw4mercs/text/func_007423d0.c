/*
 * FUN_007423D0 (91 B) — __stdcall helper: compares a 16-byte key against a
 * fixed GUID (0x7a2f90); if equal, frees a cached buffer, reallocates it
 * via FUN_006f3c80, and copies param_3 into it (dword + byte tail).
 *
 * __stdcall, 4 stack params, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aaab8;                 /* 0x008aaab8 cached buffer ptr */
extern int g_849308;                 /* 0x00849308 */
extern void __stdcall FUN_006f4230(int);
extern void * __stdcall FUN_006f3c80(int, int);

__declspec(naked) int __stdcall FUN_007423D0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     ecx, 0x4
        mov     edi, 0x7a2f90
        xor     eax, eax
        repe    cmpsd
        jnz     loc_742421
        mov     eax, dword ptr [g_8aaab8]
        test    eax, eax
        jz      loc_7423f5
        push    eax
        call    FUN_006f4230
loc_7423f5:
        mov     ecx, dword ptr [g_849308]
        mov     esi, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        call    FUN_006f3c80
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        mov     dword ptr [g_8aaab8], eax
        rep     movsb
loc_742421:
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0x10
    }
}
