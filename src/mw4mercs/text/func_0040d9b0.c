/*
 * FUN_0040d9b0 (24 B) — __fastcall refcount decrement helper:
 *   if (*p) { if (--*(char*)(*p-1) == 0) FUN_004084e0(*p-1); }
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040d9b0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      done
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret
    }
}
