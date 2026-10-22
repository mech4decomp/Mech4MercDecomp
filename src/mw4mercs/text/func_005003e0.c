/*
 * FUN_005003E0 (77 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* External function */
extern void *__cdecl FUN_0050dc20(int a, int b, void *c, void *d, void *e);

/* IAT entries (indirect call through import thunk) */
extern void *g_iat_76b294;   /* malloc */
extern void *g_iat_76b320;   /* strncpy */

__declspec(naked) void func_005003e0(void)
{
    __asm {
        push esi
        push 0x1C
        call dword ptr [g_iat_76b294]
        mov esi, eax
        mov eax, [esp+0x0C]
        push 0x10
        push eax
        push esi
        call dword ptr [g_iat_76b320]
        mov ecx, [esp+0x1C]
        push 0x00500870
        push 0x00500830
        push 0x005007B0
        push 0x10
        push 0x08
        mov byte ptr [esi+0x0F], 0x00
        mov [esi+0x10], ecx
        mov dword ptr [esi+0x14], 0x0000270F
        call FUN_0050dc20
        mov [esi+0x18], eax
        add esp, 0x24
        mov eax, esi
        pop esi
        ret
    }
}
