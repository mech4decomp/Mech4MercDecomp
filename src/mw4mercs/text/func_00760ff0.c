/*
 * FUN_00760FF0 (85 B) — Wrapper around two FUN_00761410 calls and a
 * FUN_00761690 query on the global object at 0x008BD2F4.
 *
 * Returns -(FUN_00761690(g) != 0x50) & 0x195.
 *
 * __cdecl, one stack param.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008bd2f4;
extern void __cdecl FUN_00761410(void);
extern int __cdecl FUN_00761690(void *a);

__declspec(naked) unsigned int __cdecl FUN_00760FF0(void *param_1)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_008bd2f4]
        push    0x50
        push    eax
        push    0x3
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00761410
        mov     eax, dword ptr [g_008bd2f4]
        add     esp, 0x10
        __emit 0x8D   /* __emit: MSVC6 drops the 00 displacement byte for lea edx,[esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    0x4
        push    edx
        push    0x2
        push    eax
        call    FUN_00761410
        mov     ecx, dword ptr [g_008bd2f4]
        add     esp, 0x10
        push    ecx
        call    FUN_00761690
        sub     eax, 0x50
        add     esp, 0x4
        neg     eax
        sbb     eax, eax
        and     eax, 0x195
        pop     ecx
        ret
    }
}
