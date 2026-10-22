/*
 * FUN_005e1dd0 (69 B) — __thiscall constructor.
 *
 * Calls FUN_005f8320 with 4 args, then sets vtable 0x788918 and a few
 * fields. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f8320(void);

__declspec(naked) void *__stdcall FUN_005e1dd0(void *this, int a, int b, int c, int d)
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
        call    FUN_005f8320
        mov     byte ptr [esi + 0x41c], 0
        mov     dword ptr [esi], 0x788918
        mov     dword ptr [esi + 0x158], 1
        mov     dword ptr [esi + 0x420], 0xffffffff
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
