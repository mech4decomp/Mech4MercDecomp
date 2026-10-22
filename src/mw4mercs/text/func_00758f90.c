/*
 * FUN_00758F90 (65 B) — Allocates and links a node into this+0x20 list.
 *
 * Calls FUN_00717A10(2, 0x7AEE6C, param_1, 0x41, 0, 0), allocates a node via
 * FUN_006F3C80(0xC, g_008492FC), fills it, and prepends it to this+0x20.
 * Returns the FUN_00717A10 result.
 *
 * __thiscall (ECX = this), RET 0x4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008492fc;
extern void *__stdcall FUN_00717a10(int a, void *b, void *c, int d, int e, int f);
extern void *__stdcall FUN_006f3c80(int size, void *g);

__declspec(naked) void *__fastcall FUN_00758f90(void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        push    0
        push    0
        push    0x41
        push    ebx
        push    0x7aee6c
        push    2
        mov     esi, ecx
        call    FUN_00717a10
        mov     edi, eax
        mov     eax, dword ptr [g_008492fc]
        push    eax
        push    0xc
        call    FUN_006f3c80
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [eax + 8], ebx
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [eax], ecx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
