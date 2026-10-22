/*
 * 84 bytes — __thiscall ref-counted destructor.
 * Decrements refcounts on two buffers (at this+0x14 and this+0x24),
 * frees them if refcount reaches 0, then calls cleanup and optionally
 * frees this based on a flag parameter.
 * ret 4 (one stack param: deleting-destructor flag).
 */

void FUN_004084E0(void *ptr);
void FUN_00415380(void);

__declspec(naked) void FUN_00595A60(void)
{
    __asm {
        push    esi
        mov     esi, ecx

        /* field_24: refcounted buffer */
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        je      check_field_14
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     check_field_14
        push    eax
        call    FUN_004084E0
        add     esp, 4

    check_field_14:
        /* field_14: refcounted buffer */
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        je      call_cleanup
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     call_cleanup
        push    eax
        call    FUN_004084E0
        add     esp, 4

    call_cleanup:
        mov     ecx, esi
        call    FUN_00415380

        /* check deleting-destructor flag */
        test    byte ptr [esp + 8], 1
        je      done
        push    esi
        call    FUN_004084E0
        add     esp, 4

    done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
