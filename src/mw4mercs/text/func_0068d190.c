/*
 * FUN_0068d190 (128 B) — __thiscall. Writes data through a virtual method
 * (vtable+0x24) on `this`, either from a parsed buffer or a zero value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006f4230(void *ptr);

__declspec(naked) void FUN_0068d190(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0xc
        test    eax, eax
        jz      L_else
        push    esi
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        call    FUN_006faca0
        mov     eax, dword ptr [esp + 0x8]
        mov     esi, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        mov     edi, eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
        push    0x4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jz      L_skip
        mov     edx, dword ptr [esi]
        push    eax
        add     edi, 0x4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    L_skip:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    FUN_006f4230
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    L_else:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     dword ptr [esp + 0x10], 0x0
        call    dword ptr [edx + 0x24]
        add     esp, 0xc
        ret
    }
}
