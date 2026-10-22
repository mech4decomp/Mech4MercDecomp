/*
 * FUN_004128b0 (33 B) — __thiscall refcounted-string upper-case helper.
 * If the refcount byte at (*this)[-1] > 1, calls FUN_00412780(*this);
 * then calls _strupr(*this) via IAT 0x0076b2fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2fc;             /* 0x0076B2FC - _strupr IAT */
extern void __cdecl FUN_00412780(void *ptr);

__declspec(naked) void FUN_004128b0(void)
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
        call    dword ptr [g_0076b2fc]
        add     esp, 4
        pop     esi
        ret
    }
}
