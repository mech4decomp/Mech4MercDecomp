/*
 * FUN_005327E0 (51 B) — __stdcall method on ecx.
 * If arg == -1, skip. Otherwise calls FUN_00416B60(ecx+0xD8, &arg)
 * to look up an object. If found, decrements refcount at [obj+0x10].
 * If refcount <= 0, calls vtable[0](obj, 1) to release.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00416B60(void *, void *);

__declspec(naked) int __stdcall FUN_005327E0(void)
{
    __asm {
        cmp     dword ptr [esp + 4], -1
        je      label_ret
        lea     eax, [esp + 4]
        push    eax
        add     ecx, 0xD8
        call    FUN_00416B60
        test    eax, eax
        je      label_ret
        mov     edx, dword ptr [eax + 0x10]
        dec     edx
        mov     ecx, edx
        test    ecx, ecx
        mov     dword ptr [eax + 0x10], edx
        jg      label_ret
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
label_ret:
        ret     4
    }
}
