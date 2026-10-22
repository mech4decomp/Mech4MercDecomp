/*
 * FUN_005ef900 (41 B) — __thiscall (ECX = this), no stack params, RET.
 *
 * Calls FUN_005F09F0(this), then FUN_0041FD80(this+0x1A4). If
 * non-null, calls FUN_0041FD80 again and sets [ret+0x48] = 2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f09f0(void);
extern void *__cdecl FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_005ef900(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f09f0
        add     esi, 0x1A4
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_927
        mov     ecx, esi
        call    FUN_0041fd80
        mov     dword ptr [eax + 0x48], 0x2
    l_927:
        pop     esi
        ret
    }
}
