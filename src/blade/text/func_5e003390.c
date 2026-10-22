/*
 * FUN_5e003390 (103 B) — __stdcall, RET 0xc (3 stack params). Compares the
 * input GUID against three known GUIDs (0x5e0362a0 / 0x5e035650 /
 * 0x5e035730); on match, AddRefs param_1 (vtable slot 1) and stores it into
 * *param_2; else returns E_FAIL and zeroes *param_3.
 *
 * Match: target 100%
 */

extern int g_5e0362a0;   /* GUID 1 */
extern int g_5e035650;   /* GUID 2 */
extern int g_5e035730;   /* GUID 3 */

__declspec(naked) void __stdcall FUN_5e003390(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     ecx, 0x4
        mov     edi, eax
        mov     esi, OFFSET g_5e0362a0
        xor     edx, edx
        repe cmpsd
        jnz     L_33bf
L_33a8:
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x4]
        pop     edi
        xor     eax, eax
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], esi
        pop     esi
        ret     0xc
L_33bf:
        mov     ecx, 0x4
        mov     edi, eax
        mov     esi, OFFSET g_5e035650
        xor     edx, edx
        repe cmpsd
        jz      L_33a8
        mov     ecx, 0x4
        mov     edi, eax
        mov     esi, OFFSET g_5e035730
        xor     edx, edx
        repe cmpsd
        jz      L_33a8
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        mov     dword ptr [edx], 0x0
        ret     0xc
    }
}
