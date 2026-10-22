/*
 * FUN_00615be0 (41 B) — __thiscall refcount decrement. Calls
 * FUN_00412740(&arg) with this+0x14; if arg != 0, decrements the
 * refcount byte at arg-1 and frees via FUN_004084e0 when it hits 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412740(void *ptr);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00615be0(void)
{
    __asm {
        lea     eax, [esp + 0x4]
        push    eax
        add     ecx, 0x14
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_done
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_done
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_done:
        ret     0x4
    }
}
