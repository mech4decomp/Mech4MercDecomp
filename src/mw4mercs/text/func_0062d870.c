/*
 * FUN_0062d870 (113 B) — __cdecl, 6 stack params.
 *
 * Calls FUN_0041eb40(&local, 0x10), then uses a global pointer
 * (DAT_007dab44 ^ DAT_007dab40) to index into a table and store
 * the local value at an offset derived from param_6.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041eb40(void *param1, int param2);
extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __cdecl FUN_0062d870(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xC]
        push    0x10
        lea     eax, [esp + 0x4]
        push    eax
        mov     dword ptr [esp + 0x8], 0
        call    FUN_0041eb40
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0xC]
        mov     ecx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x16]
        xor     ecx, 0x85739531
        test    al, al
        jz      L_else
        mov     eax, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [ecx + 0x92C]
        lea     edx, [eax + eax*2]
        lea     eax, [eax + edx*4]
        __emit 0x8B  /* __emit: mov edx,[esp+0] — MSVC6 drops the 00 disp byte (8B 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        lea     eax, [ecx + eax*4 + 0x37D4]
        mov     dword ptr [eax + 0x28], edx
        pop     ecx
        ret
L_else:
        mov     ecx, dword ptr [ecx + 0x930]
        __emit 0x8B  /* __emit: mov eax,[esp+0] — MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     ecx, 0x18
        mov     dword ptr [ecx + 0x28], eax
        pop     ecx
        ret
    }
}
