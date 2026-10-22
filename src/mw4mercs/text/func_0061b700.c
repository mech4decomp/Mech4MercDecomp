/*
 * FUN_0061b700 (174 B) — Serializes several fields of `this` through
 * a virtual method (vtable+0x24) on the object pointed to by param1,
 * then conditionally calls another virtual method (vtable+0x4).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a50(int a, int b);

__declspec(naked) void __fastcall FUN_0061b700(int this, int *param1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    4
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xaaaaaaaa
        call    dword ptr [eax + 0x24]
        lea     edx, [edi + 0x5bdc]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 8
        push    0xc
        lea     ecx, [edi + 0x5be0]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    0xc
        lea     ecx, [edi + 0x5bec]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edi, dword ptr [edi + 0x34]
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [esi]
        sub     ecx, eax
        push    4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jle     l_done
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [edi]
        push    ebx
        mov     ebx, dword ptr [esi]
        sub     ecx, eax
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 4]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebx + 0x24]
        pop     ebx
    l_done:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
