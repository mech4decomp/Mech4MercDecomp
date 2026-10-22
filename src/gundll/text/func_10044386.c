/* src/modules/gundll/crt/func_10044386.c
 * FUN_10044386 (46 B) - __cdecl. 128-bit shift-left by 1 (multiply by 2).
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10044386(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     esi, dword ptr [eax]
        mov     edi, dword ptr [eax + 4]
        mov     ecx, esi
        add     esi, esi
        mov     dword ptr [eax], esi
        lea     esi, [edi + edi*1]
        shr     ecx, 0x1f
        or      esi, ecx
        mov     ecx, dword ptr [eax + 8]
        mov     edx, edi
        mov     dword ptr [eax + 4], esi
        shr     edx, 0x1f
        shl     ecx, 1
        or      ecx, edx
        pop     edi
        mov     dword ptr [eax + 8], ecx
        pop     esi
        ret
    }
}
