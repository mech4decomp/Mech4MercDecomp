/*
 * FUN_005e3390 (52 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params).
 * Calls FUN_005e6cf0(this, p1, p2, p3, p4), sets vtable ptr
 * [this] = 0x788df8, then calls FUN_005e33f0(this, p2).
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e6cf0(void);
extern void FUN_005e33f0(void);

__declspec(naked) void * __stdcall FUN_005e3390(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005e6cf0
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi], 0x788df8
        call    FUN_005e33f0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
