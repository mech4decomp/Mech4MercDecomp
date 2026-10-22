/*
 * FUN_0063DB10 (76 B, +4 NOP pad) — __thiscall (1 stack arg, RET 4). Calls
 * FUN_005619A0, then looks up a sub-object at [this+0xC] via FUN_0041FD80;
 * if found, calls a virtual method and stores [ret+0x634] into [this+0x110],
 * else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005619A0(void);
extern void *__cdecl FUN_0041FD80(void);

__declspec(naked) void FUN_0063DB10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_005619A0
        lea     edi, [esi + 0xc]
        mov     ecx, edi
        call    FUN_0041FD80
        test    eax, eax
        je      loc_63db4d
        mov     ecx, edi
        call    FUN_0041FD80
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [eax + 0x634]
        pop     edi
        mov     dword ptr [esi + 0x110], eax
        pop     esi
        ret     4
loc_63db4d:
        pop     edi
        mov     dword ptr [esi + 0x110], 0
        pop     esi
        ret     4
    }
}
