/*
 * FUN_00624880 (45 B) — __thiscall (ECX = this, RET 0xc). Calls
 * FUN_006247c0(&param_2), then FUN_00624b90(&param_3) and stores
 * *result into *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006247c0(void *a);
extern void *__cdecl FUN_00624b90(void *a);

__declspec(naked) void FUN_00624880(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_006247c0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_00624b90
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0xc
    }
}
