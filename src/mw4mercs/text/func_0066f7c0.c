/*
 * FUN_0066f7c0 (56 B) — __thiscall (ECX = this) destructor, RET 0.
 * Sets vtable to 0x7971C8, frees this+0x68 if non-null, calls
 * FUN_0041fc90 on this+0x58 and this+0x50, then FUN_00561730(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_0041fc90(void *this);
extern void __fastcall FUN_00561730(void *this);

__declspec(naked) void __fastcall FUN_0066f7c0(void *this)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7971c8
        mov     eax, dword ptr [esi + 0x68]
        test    eax, eax
        mov     dword ptr [esp + 4], eax
        jz      L_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_skip_free:
        lea     ecx, [esi + 0x58]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x50]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        pop     ecx
        ret
    }
}
