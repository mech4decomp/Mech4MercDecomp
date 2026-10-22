/*
 * FUN_00417200 (29 B) — __fastcall. Increments this->[+0x10]; if the
 * result is >= this->[+4]->[+0x14], set this->[+0x10] = -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417200(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x4]
        push    esi
        mov     esi, dword ptr [edx + 0x14]
        inc     ecx
        cmp     ecx, esi
        mov     dword ptr [eax + 0x10], ecx
        pop     esi
        jc      done
        mov     dword ptr [eax + 0x10], 0xffffffff
done:
        ret
    }
}
