/*
 * FUN_00708a10 (76 B) — gosScript registry write helper (__stdcall):
 * creates a key and sets a value of type 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858e2c;
extern void *g_0076b020;   /* IAT: RegCreateKeyA */
extern void *g_0076b008;   /* IAT: RegSetValueExA */
extern void *g_0076b00c;   /* IAT: RegCloseKey */

__declspec(naked) void FUN_00708a10(void)
{
    __asm {
        push    ecx
        mov     al, byte ptr [g_00858e2c]
        test    al, al
        jz      L_8a58
        __emit 0x8D   /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        push    offset g_00858e2c
        push    0x80000001
        call    dword ptr [g_0076b020]
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0xc]
        mov     eax, dword ptr [esp+0x8]
        push    ecx
        mov     ecx, dword ptr [esp+0x4]
        push    edx
        push    1
        push    0
        push    eax
        push    ecx
        call    dword ptr [g_0076b008]
        __emit 0x8B   /* __emit: MSVC6 drops the 00 disp byte for mov edx,[esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        call    dword ptr [g_0076b00c]
    L_8a58:
        pop     ecx
        ret     0xc
    }
}
