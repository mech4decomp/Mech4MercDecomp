/*
 * FUN_00701210 (22 B) - __fastcall (ECX = this). If [this+4] is non-null
 * and [this+0xc] is non-zero, dispatches a virtual call at vtable+0x20
 * with (obj, this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00701210(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L1225
        mov     dl, byte ptr [ecx + 0xc]
        test    dl, dl
        jz      L1225
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x20]
L1225:
        ret
    }
}
