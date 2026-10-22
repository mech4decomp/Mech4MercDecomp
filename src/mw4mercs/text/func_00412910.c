/*
 * FUN_00412910 (54 B) — __thiscall refcounted-string space->underscore
 * helper. If the refcount byte at (*this)[-1] > 1, calls FUN_00412780(*this).
 * Then replaces every ' ' in the string with '_' (strlen via repne scasb).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412780(void *ptr);

__declspec(naked) void FUN_00412910(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax - 1], 1
        push    edi
        jbe     L1
        push    eax
        mov     ecx, esi
        call    FUN_00412780
    L1:
        mov     edx, dword ptr [esi]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        pop     edi
        pop     esi
        jz      L2
    L3:
        cmp     byte ptr [edx + eax], 0x20
        jnz     L4
        mov     byte ptr [edx + eax], 0x5f
    L4:
        inc     eax
        cmp     eax, ecx
        jc      L3
    L2:
        ret
    }
}
