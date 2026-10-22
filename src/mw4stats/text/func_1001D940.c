/*
 * FUN_1001d940 (45 B) - __fastcall. Releases a handle stored at [this+0]:
 * if a release-callback object exists at [this+4], calls its vtable method
 * at +0x24; otherwise calls CloseHandle (IAT 0x1002102c). Clears [this+0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1001d940 (45 B, __fastcall, ECX = this) - Releases a handle stored at
 * method at +0x24 (a __thiscall virtual method taking only the handle);
 * CFLAGS: /O2
 */

extern void *g_1002102c;   /* IAT: CloseHandle */

__declspec(naked) int __cdecl FUN_1001d940(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_d96b
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jz      L_d95e
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
L_d95e:
        push    eax
        call    dword ptr [g_1002102c]
        mov     dword ptr [esi], 0x0
L_d96b:
        pop     esi
        ret
    }
}
