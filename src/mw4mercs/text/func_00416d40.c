/*
 * FUN_00416d40 (15 B) — __fastcall. If the object at [this+0x10] is
 * non-null, call its vtable method at offset +4 with argument 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416d40(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x10]
        test    ecx, ecx
        jz      done
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x4]
done:
        ret
    }
}
