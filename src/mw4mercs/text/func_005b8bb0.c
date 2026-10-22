/*
 * FUN_005b8bb0 (42 B) — Constructor. __thiscall (ECX = this), RET 0x10
 * (4 stack params). Calls FUN_005f0740(this, p1, p2, p3, p4), sets vtable
 * 0x786ac8, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f0740(void *p1, void *p2, void *p3, void *p4);

__declspec(naked) void *__stdcall FUN_005b8bb0(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005f0740
        mov     dword ptr [esi], 0x786ac8
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
