/*
 * FUN_006866E0 (74 B) — Iterate a list of move points, sprintf each.
 *
 * __fastcall (ECX = this). Walks from this+0x50 to this+0x54 in steps
 * of 0x18, calling the sprintf-style function pointer at DAT_0076b420
 * with format string 0x798be8 ("Move Point %f,%f") and the two floats
 * (converted to double) from each element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *DAT_0076b420;

__declspec(naked) void __fastcall FUN_006866e0(void *this)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x64
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0x50]
        push    edi
        mov     edi, dword ptr [ecx + 0x54]
        cmp     esi, edi
        jz      l_done
        mov     ebx, dword ptr [DAT_0076b420]
    l_loop:
        fld     dword ptr [esi + 0x8]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esi]
        lea     eax, [esp + 0x1c]
        fstp    qword ptr [esp]
        push    0x798be8
        push    eax
        call    ebx
        add     esi, 0x18
        add     esp, 0x18
        cmp     esi, edi
        jnz     l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
