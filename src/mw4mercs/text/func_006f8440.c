/*
 * FUN_006F8440 (59 B) — Sorted array append.
 *
 * If this->field_14 >= this->field_18, calls FUN_006f84e0 to grow.
 * Stores param at array[count]*8 with next dword = 0, increments count,
 * then calls FUN_006f7850(1) to re-sort.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: value to append).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006f84e0(void);
extern int __stdcall FUN_006f7850(int param);

__declspec(naked) void __stdcall FUN_006f8440(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x18]
        xor     ebx, ebx
        cmp     eax, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        jl      l_skip_grow
        mov     ecx, esi
        call    FUN_006f84e0
    l_skip_grow:
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [edx + ecx * 8], edi
        mov     dword ptr [edx + ecx * 8 + 4], ebx
        inc     dword ptr [esi + 0x14]
        push    1
        mov     ecx, esi
        call    FUN_006f7850
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
