/*
 * FUN_006CA0E0 (34 B) — __thiscall (ECX = this) destructor-like helper.
 *
 * If this->m4 != NULL, calls virtual method (vtable[0])(1).
 * Sets this->m4 = 0, then calls FUN_006f4230(this->m8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void *param);

__declspec(naked) void __fastcall FUN_006ca0e0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        jz      L1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L1:
        mov     ecx, dword ptr [esi + 8]
        push    ecx
        mov     dword ptr [esi + 4], 0
        call    FUN_006f4230
        pop     esi
        ret
    }
}
