/*
 * DllUnregisterServer (103 B) — __stdcall COM export.
 * Iterates a table of GUIDs at 0x10050040 (2 entries, 0x10 stride),
 * calling FUN_10002260 to fetch a ProgID string and FUN_10001450 /
 * FUN_10001d60 to unregister it. Returns S_OK on success.
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10002260(void);
extern void __stdcall FUN_10001450(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall DllUnregisterServer(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x8], 0
        xor     edi, edi
        __emit 0x8D                     /* __emit: MSVC6 drops the +0 disp on lea ecx,[ecx+0] (gives 8D 09); ref is 8D 49 00 */
        __emit 0x49
        __emit 0x00
    loop_start:
        mov     ecx, dword ptr [edi + 0x10050040]
        lea     eax, [esp + 0x8]
        push    eax
        push    ecx
        call    FUN_10002260
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      fail
        push    eax
        call    FUN_10001450
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        mov     esi, eax
        call    FUN_10001d60
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [esp + 0x8], 0
        jl      err
        add     edi, 0x10
        cmp     edi, 0x10
        jc      loop_start
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ecx
        ret
    fail:
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        pop     ecx
        ret
    err:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
    }
}
