/*
 * FUN_005bcf20 (43 B) — __thiscall (ECX = this). Frees the object at
 *   this+0x92c (if present) and clears the slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0067c430(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_005bcf20(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x92c]
        test    esi, esi
        jz      l_done
        mov     ecx, esi
        call    FUN_0067c430
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x92c], 0
    l_done:
        pop     edi
        pop     esi
        ret
    }
}
