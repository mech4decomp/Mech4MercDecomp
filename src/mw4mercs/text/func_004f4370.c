/*
 * FUN_004F4370 (99 B) — MLR/Adept render-state chain update. __thiscall
 * (ECX = this), RET 4 (1 stack param). Calls FUN_004daa20, dispatches a
 * virtual [+0x18] on a magic object, calls FUN_004daa20 again, virtual
 * [+0x48](1), then FUN_004e2690.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004daa20(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern void __cdecl FUN_004e2690(void);

__declspec(naked) void __fastcall FUN_004f4370(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004daa20
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_7dab40]
        mov     esi, dword ptr [esi + 0x170]
        xor     ecx, eax
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x18]
        push    edi
        mov     ecx, esi
        call    FUN_004daa20
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004e2690
        pop     edi
        pop     esi
        ret     4
    }
}
