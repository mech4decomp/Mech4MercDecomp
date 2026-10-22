/*
 * FUN_0064FC80 (75 B) — Allocate/init an object, fallback path.
 *
 * __cdecl, one stack param (out ptr). Calls FUN_00650080(&DAT_007f3254);
 * if it returns null, calls FUN_00562f40(0xd) and FUN_00650120 to
 * allocate a fallback object and initializes its fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_008058c0;
extern void __cdecl FUN_00650080(void *param);
extern void __cdecl FUN_00562f40(int param);
extern void __cdecl FUN_00650120(void *a, void *b);

__declspec(naked) void __cdecl FUN_0064fc80(void *param)
{
    __asm {
        push    esi
        push    0x7f3254
        call    FUN_00650080
        mov     esi, dword ptr [esp + 0xc]
        add     esp, 4
        test    eax, eax
        mov     dword ptr [esi], eax
        jnz     l_done
        push    0xd
        call    FUN_00562f40
        mov     eax, dword ptr [DAT_008058c0]
        lea     ecx, [eax * 4 + 0x80da24]
        push    ecx
        push    0x7f3254
        call    FUN_00650120
        mov     dword ptr [eax + 0x18], 0
        add     esp, 0xc
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 0x3c], 0x80da38
    l_done:
        pop     esi
        ret
    }
}
