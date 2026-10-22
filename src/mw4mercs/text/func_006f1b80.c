/*
 * FUN_006F1B80 (49 B) — Conditional flag setter.
 *
 * Calls FUN_0041fd80 on sub-object at +0x08. If non-NULL, calls it again.
 * If the result's field_10 bit 19 (0x80000) is set and this->byte_69 is 0,
 * sets byte_69 to 1.
 *
 * __thiscall (ECX = this), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0041fd80(int param);

__declspec(naked) void __stdcall FUN_006f1b80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, dword ptr [esi + 8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_done
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 1
        jz      l_done
        mov     al, byte ptr [esi + 0x69]
        test    al, al
        jnz     l_done
        mov     byte ptr [esi + 0x69], 1
    l_done:
        pop     edi
        pop     esi
        ret
    }
}
