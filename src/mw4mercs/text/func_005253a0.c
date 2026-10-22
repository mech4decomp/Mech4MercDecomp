/*
 * FUN_005253A0 (41 B per CSV; actual function is larger) — fragment.
 *
 * __cdecl. Loads a global (0x007DD234), calls FUN_006f4950, then reads
 * several fields from the param struct and a global pointer (0x007F1FBC).
 *
 * NOTE: CSV lists 41 bytes; the real function extends past 0x5253C8.
 * Only the 41-byte CSV slice is matched here.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);

extern int DAT_007dd234; /* 0x007DD234 */
extern int DAT_007f1fbc; /* 0x007F1FBC */

__declspec(naked) void __cdecl FUN_005253a0(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [DAT_007dd234]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [DAT_007f1fbc]
        mov     ebp, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx + 0x10]
        mov     dword ptr [esp + 0x14], ecx
    }
}
