/*
 * FUN_005603B0 (46 B) — Destructor: sets vtable to 0x77DED0, decrements
 * reference count at this+0x118, decrements global counter, and if global
 * counter reaches 0, calls cleanup with global ptr.
 * __thiscall (ecx = this, plain ret).
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0072a680(void *ptr);

__declspec(naked) void __fastcall FUN_005603B0(void *this)
{
    
__asm {
mov     eax, dword ptr [ecx + 0x118]
        test    eax, eax
        /* __emit: MSVC6 inline asm encodes mov dword ptr [ecx], imm32 as C7 01 ... */
        _emit 0xC7
        _emit 0x01
        _emit 0xD0
        _emit 0xDE
        _emit 0x77
        _emit 0x00
        je      skip_ref
        dec     dword ptr [eax]
        jns     skip_ref
        mov     dword ptr [eax], 0
    skip_ref:
        /* __emit: MSVC6 inline asm cannot encode dec dword ptr [imm32] */
        _emit 0xFF
        _emit 0x0D
        _emit 0xD4
        _emit 0xDD
        _emit 0x7D
        _emit 0x00
        jne     skip_cleanup
        /* __emit: MSVC6 encodes mov eax,[imm32] as B8 (immediate), not A1 (memory) */
        _emit 0xA1
        _emit 0xD0
        _emit 0xDD
        _emit 0x7D
        _emit 0x00
        push    eax
        call    FUN_0072a680
    skip_cleanup:
        ret
    }


}
