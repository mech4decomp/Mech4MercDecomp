/*
 * FUN_1000cd70 (80 B) - __stdcall. Calls FUN_1000f180 (thiscall) to set up
 * the string, then if param_3 != 0 dispatches through the object's vtable
 * (+0x1c) with the string and its length; returns the vtable result, else 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;   /* wcslen IAT @ 0x100210f4 */
extern void __cdecl FUN_1000f180(void);

__declspec(naked) unsigned int __cdecl FUN_1000cd70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x48]
        push    edi
        call    FUN_1000f180
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      LDB6
        mov     eax, dword ptr [esi + 0x3c]
        push    ebx
        lea     ecx, [esp + 0x14]
        push    0x0
        mov     ebx, dword ptr [eax]
        push    ecx
        push    edi
        call    dword ptr [g_100210f4]
        mov     edx, dword ptr [esi + 0x44]
        mov     ecx, dword ptr [esi + 0x3c]
        add     esp, 0x4
        shl     eax, 0x1
        push    eax
        push    edi
        push    edx
        call    dword ptr [ebx + 0x1c]
        pop     ebx
        pop     edi
        pop     esi
        ret     0xc
LDB6:
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0xc
    }
}
