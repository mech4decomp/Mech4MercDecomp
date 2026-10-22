/*
 * FUN_006580e0 (221 B) — __cdecl, 2 params. If param_2 != 0, calls
 * FUN_006faca0 to parse it, then writes several fields through a virtual
 * method (vtable+0x24) on param_1, and finally FUN_006f4230. Otherwise
 * writes three zero fields through the same virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006faca0(void);
extern void __stdcall FUN_006f4230(void);

__declspec(naked) void FUN_006580e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x10
        test    eax, eax
        push    esi
        jz      L_172
        push    edi
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        call    FUN_006faca0
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0xc], ecx
        mov     edx, dword ptr [eax + 0x4]
        lea     edi, [eax + 0x4]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        sub     ecx, 0xc
        push    0x4
        lea     eax, [esp + 0x24]
        mov     dword ptr [esp + 0x24], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_162
        mov     edx, dword ptr [esi]
        push    eax
        add     edi, 0x8
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    L_162:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    FUN_006f4230
        pop     edi
        pop     esi
        add     esp, 0x10
        ret
    L_172:
        mov     esi, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x0
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x0
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x0
        call    dword ptr [edx + 0x24]
        pop     esi
        add     esp, 0x10
        ret
    }
}
