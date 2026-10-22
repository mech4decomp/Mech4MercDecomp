/*
 * FUN_0052DB70 (53 B) — __thiscall destructor-like method.
 * Calls FUN_0052DDD0(this), then frees [this+0xC4],
 * [this+0x98], [this+0x78] via FUN_004084E0 (free).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0052DDD0(void *);
extern void __cdecl FUN_004084E0(void *);

__declspec(naked) void __fastcall FUN_0052DB70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0052DDD0
        mov     eax, dword ptr [esi + 0xC4]
        test    eax, eax
        je      label_1
        push    eax
        call    FUN_004084E0
        add     esp, 4
label_1:
        mov     eax, dword ptr [esi + 0x98]
        push    eax
        call    FUN_004084E0
        mov     ecx, dword ptr [esi + 0x78]
        push    ecx
        call    FUN_004084E0
        add     esp, 8
        pop     esi
        ret
    }
}
