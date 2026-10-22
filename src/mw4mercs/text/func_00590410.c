/*
 * FUN_00590410 (43 B) — Iterates a linked list at this+0x34C and calls
 * virtual method at vtable+0xA8 on each non-null element, passing
 * this+0x408 as argument.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00590410(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx            /* this */
        mov     esi, [edi + 0x34C]  /* list head */
        test    esi, esi
        je      done
    loop_start:
        mov     ecx, [esi]          /* object pointer */
        test    ecx, ecx
        mov     esi, [esi + 4]      /* next node */
        je      next
        mov     edx, [edi + 0x408]  /* arg */
        mov     eax, [ecx]          /* vtable */
        push    edx
        call    dword ptr [eax + 0xA8]  /* virtual method */
        /* __emit: MSVC6 computes jmp offset E6 (targets test ecx,ecx) not E2 (mov ecx,[esi]) */
        __emit  0xEB
        __emit  0xE2
    next:
    done:
        pop     edi
        pop     esi
        ret
    }
}
