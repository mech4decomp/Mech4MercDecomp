/*
 * FUN_005e2ec0 (42 B) — __thiscall constructor.
 *
 * Calls FUN_005e3390(this, p1, p2, p3, p4), sets vtable 0x788d10 at
 * *this, returns this.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005e3390(void *this);

__declspec(naked) void *__stdcall FUN_005e2ec0(void *this, void *p1, void *p2, void *p3, void *p4)
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
        call    FUN_005e3390
        mov     dword ptr [esi], 0x788d10
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
