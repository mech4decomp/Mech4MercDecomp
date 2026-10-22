/*
 * FUN_005c0be0 (58 B) — __cdecl, RET (no stack cleanup).
 *
 * Builds a temporary stack frame and calls the __thiscall helpers
 * FUN_005c0b90 (copy) and FUN_005c0c20 (list search).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c0b90(void *param);
extern void *FUN_005c0c20(void *param);

__declspec(naked) void __stdcall FUN_005c0be0(void *param1, void *param2, void *param3, void *param4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_005c0b90
        push    ecx
        lea     eax, [esp + 0x18]
        mov     ecx, esp
        push    eax
        call    FUN_005c0b90
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_005c0c20
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x14
        mov     dword ptr [eax], edx
        ret
    }
}
