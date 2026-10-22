/*
 * FUN_00767a60 (43 B) — Destructor (thiscall, ECX = this). Installs vtable
 * 0x7AFD28, then walks a singly-linked list at this->field_0x4, freeing each
 * node via operator delete FUN_004084e0 (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_00767a60(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        mov     dword ptr [esi], 0x7afd28
        jz      done
        push    edi
again:
        mov     eax, dword ptr [esi + 4]
        mov     edi, dword ptr [eax]
        mov     ecx, eax
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        test    edi, edi
        mov     dword ptr [esi + 4], edi
        jnz     again
        pop     edi
done:
        pop     esi
        ret
    }
}
