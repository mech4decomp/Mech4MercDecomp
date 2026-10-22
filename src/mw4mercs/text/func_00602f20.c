/*
 * FUN_00602F20 (85 B) — Builds three stack objects via FUN_00602c40,
 * calls FUN_00603210, and copies the 8-byte result into param_1.
 *
 * __cdecl (one stack param), RET (C3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00602c40(void *p);
extern void *__cdecl FUN_00603210(void *p);

__declspec(naked) void *__cdecl FUN_00602f20(void *param1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 8
        push    0
        push    eax
        sub     esp, 8
        lea     edx, [esp + 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        sub     esp, 8
        lea     eax, [esp + 0x30]
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        sub     esp, 8
        lea     edx, [esp + 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00603210
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx + 4], eax
        mov     eax, ecx
        add     esp, 0x2c
        ret
    }
}
