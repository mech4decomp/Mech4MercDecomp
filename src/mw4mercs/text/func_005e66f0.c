/*
 * FUN_005e66f0 (42 B) — __thiscall constructor (ECX=this, RET 0x10, 4 stack
 * params). Calls FUN_005e7a30(this, p1, p2, p3, p4), stores vtable
 * 0x7890c8 at [this], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e7a30(void);

__declspec(naked) void *__stdcall FUN_005e66f0(void)
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
        call    FUN_005e7a30
        mov     dword ptr [esi], 0x7890c8
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
