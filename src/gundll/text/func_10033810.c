/*
 * FUN_10033810 (66 B) — __thiscall, RET 0xC (ECX = this, 3 stack params).
 * Calls timeGetTime() (IAT 0x10049204); computes (this+4 - param_3) + t.
 * If *param_2 == 0 -> FUN_100308f0(param_2[1]); if == 2 ->
 * FUN_100362d0(param_2[1], computed, param_1).
 *
 * CFLAGS: /O1
 */

extern void *g_10049204;                 /* IAT: timeGetTime */
extern void __cdecl FUN_100362d0(void);
extern void __cdecl FUN_100308f0(void);

__declspec(naked) void FUN_10033810(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    dword ptr [g_10049204]
        mov     ecx, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        sub     ecx, esi
        add     ecx, eax
        mov     eax, dword ptr [edx]
        sub     eax, 0x0
        pop     esi
        jz      L46
        sub     eax, 0x2
        jnz     L4f
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edx + 0x4]
        call    FUN_100362d0
        ret     0xC
    L46:
        push    ecx
        mov     ecx, dword ptr [edx + 0x4]
        call    FUN_100308f0
    L4f:
        ret     0xC
    }
}
