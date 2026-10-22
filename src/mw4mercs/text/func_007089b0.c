/*
 * FUN_007089b0 (90 B) — gosScript registry write helper (__stdcall):
 * creates a key and sets a value (type 4 or 3 depending on size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858e2c;
extern void *g_0076b020;   /* IAT: RegCreateKeyA */
extern void *g_0076b008;   /* IAT: RegSetValueExA */
extern void *g_0076b00c;   /* IAT: RegCloseKey */

__declspec(naked) void FUN_007089b0(void)
{
    __asm {
        push    ecx
        mov     al, byte ptr [g_00858e2c]
        test    al, al
        jz      L_8a06
        __emit 0x8D   /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        push    offset g_00858e2c
        push    0x80000001
        call    dword ptr [g_0076b020]
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, 4
        jnz     L_89e1
        mov     ecx, dword ptr [esp+0xc]
        push    eax
        push    ecx
        push    eax
        jmp     L_89e9
    L_89e1:
        mov     ecx, dword ptr [esp+0xc]
        push    eax
        push    ecx
        push    3
    L_89e9:
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0xc]
        push    0
        push    edx
        push    eax
        call    dword ptr [g_0076b008]
        __emit 0x8B   /* __emit: MSVC6 drops the 00 disp byte for mov ecx,[esp+0] */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    ecx
        call    dword ptr [g_0076b00c]
    L_8a06:
        pop     ecx
        ret     0xc
    }
}
