/*
 * FUN_0071E010 (121 B) — __cdecl. Builds a timestamp string.
 *
 * Calls GetLocalTime (IAT 0x76b08c) into a 16-byte SYSTEMTIME local,
 * then wsprintfA (IAT 0x76b4f8) with "%02d:%02d:%02d %s %d/%d/%d"
 * and the day-name table at 0x7b70e4, into buffer 0x87d7d4.
 * Returns pointer to 0x87d7d4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b08c;   /* IAT: GetLocalTime */
extern void *g_76b4f8;   /* IAT: wsprintfA */
extern int g_7b70e4;     /* day-name string table */

__declspec(naked) void __cdecl FUN_0071e010(void)
{
    __asm {
        sub     esp, 0x10
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp] (8D 04 24 vs ref 8D 44 24 00) */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        call    dword ptr [g_76b08c]
        /* __emit: MSVC6 drops the 00 disp byte for mov ecx,[esp] (8B 0C 24 vs ref 8B 4C 24 00) */
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     edx, dword ptr [esp + 0x6]
        mov     eax, dword ptr [esp + 0x2]
        and     ecx, 0xffff
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        and     edx, 0xffff
        push    edx
        and     eax, 0xffff
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        and     ecx, 0xffff
        mov     edx, dword ptr [ecx*4 + g_7b70e4]
        mov     ecx, dword ptr [esp + 0x16]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        and     eax, 0xffff
        push    eax
        and     ecx, 0xffff
        push    ecx
        and     edx, 0xffff
        push    edx
        push    0x7a02b0
        push    0x87d7d4
        call    dword ptr [g_76b4f8]
        mov     eax, 0x87d7d4
        add     esp, 0x34
        ret
    }
}
