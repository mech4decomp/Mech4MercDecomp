/*
 * FUN_004128e0 (33 B) — __thiscall refcounted-string lower-case helper.
 * If the refcount byte at (*this)[-1] > 1, calls FUN_00412780(*this);
 * then calls _strlwr(*this) via IAT 0x0076b304.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b304;             /* 0x0076B304 - _strlwr IAT */
extern void __cdecl FUN_00412780(void *ptr);

__declspec(naked) void FUN_004128e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax - 1], 1
        jbe     L1
        push    eax
        mov     ecx, esi
        call    FUN_00412780
    L1:
        mov     eax, dword ptr [esi]
        push    eax
        call    dword ptr [g_0076b304]
        add     esp, 4
        pop     esi
        ret
    }
}
