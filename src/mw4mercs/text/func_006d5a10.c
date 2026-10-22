/*
 * FUN_006D5A10 (61 B) — Iterate array of pointers, call FUN_006E0DE0 on each.
 *
 * For each entry in the array at this+0x11C (count at this+0x118),
 * calls FUN_006E0DE0(entry->field_04) and stores the result at entry+0x18.
 * Then calls FUN_006D5240(this).
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_006e0de0(int param);
extern void __fastcall FUN_006d5240(void);

__declspec(naked) void __fastcall FUN_006d5a10(void)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        push    edi
        mov     edi, dword ptr [ebp + 0x118]   ; edi = count
        test    edi, edi
        jle     l_call_d5240
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]    ; ebx = this (for ECX)
        push    esi
        mov     esi, dword ptr [ebp + 0x11C]   ; esi = array ptr
    l_loop:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        mov     ecx, ebx
        call    FUN_006e0de0
        mov     edx, dword ptr [esi]
        add     esi, 4
        dec     edi
        mov     dword ptr [edx + 0x18], eax
        jnz     l_loop
        pop     esi
        pop     ebx
    l_call_d5240:
        mov     ecx, ebp
        call    FUN_006d5240
        pop     edi
        pop     ebp
        ret
    }
}
