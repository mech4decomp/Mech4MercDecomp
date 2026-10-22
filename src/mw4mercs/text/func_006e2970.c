/*
 * FUN_006E2970 (51 B) — String buffer shift/compact.
 *
 * If the refcount at (*param_1)[-3] > 1, calls FUN_006e28e0 to
 * decrement refcount, then calls FUN_006e2890 to allocate a new
 * buffer, copies the old data (size = old_size + 1) via rep movsd/movsb.
 *
 * __fastcall (ECX = param_1), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006e28e0(int param);
extern int __fastcall FUN_006e2890(int param);

__declspec(naked) void __fastcall FUN_006e2970(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi]
        cmp     dword ptr [esi - 0x0C], 1
        jle     l_done
        call    FUN_006e28e0
        mov     eax, dword ptr [esi - 8]
        push    eax
        mov     ecx, edi
        call    FUN_006e2890
        mov     ecx, dword ptr [esi - 8]
        mov     edi, dword ptr [edi]
        inc     ecx
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    l_done:
        pop     edi
        pop     esi
        ret
    }
}
