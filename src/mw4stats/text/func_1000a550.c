/*
 * FUN_1000a550 (68 B) - calls FindNextFileA into a local
 * WIN32_FIND_DATA, and if a file is found copies it into the output
 * struct via FUN_1000a130. Returns the BOOL result.
 *
 * __stdcall, 2 params (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000a130(void *, void *);
extern void *g_10021070;   /* FindNextFileA IAT @ 0x10021070 */

__declspec(naked) int __cdecl FUN_1000a550(void)
{
    __asm {
        sub     esp, 0x140
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp on lea eax,[esp+0] (encodes 8D 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     ecx, dword ptr [esp + 0x150]
        push    ecx
        call    dword ptr [g_10021070]
        mov     esi, eax
        test    esi, esi
        jz      L_done
        mov     edx, dword ptr [esp + 0x150]
        lea     eax, [esp + 0x8]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_1000a130
L_done:
        mov     eax, esi
        pop     edi
        pop     esi
        add     esp, 0x140
        ret     8
    }
}
