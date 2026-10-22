/*
 * FUN_0066bba0 (54 B) — __thiscall (ECX = this), RET 4.
 * Looks up "AnimType" via FUN_00411a80, calls FUN_00417a40,
 * and if the lookup succeeded calls FUN_00417980 + FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00796e48[];
extern void *__cdecl FUN_00411a80(char *name);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004084e0(void *obj);

__declspec(naked) void __stdcall FUN_0066bba0(void *param)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        push    offset g_00796e48
        call    FUN_00411a80
        mov     esi, eax
        mov     ecx, esi
        call    FUN_00417a40
        test    esi, esi
        mov     edi, eax
        jz      L_done
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_done:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
