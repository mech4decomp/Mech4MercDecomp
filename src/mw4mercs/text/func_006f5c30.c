/*
 * FUN_006F5C30 (74 B) — Destructor for a node with sub-object cleanup.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param). If this+0x3C is
 * non-zero, calls FUN_006F7770 on the parameter. Then calls
 * FUN_006F5A80 on param+4. If param+0x0C is non-null, calls its
 * vtable[0] destructor with arg 1 and clears the pointer. Then frees
 * param[0] and param itself via free (0x0076B2D0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f7770(void *);
extern void __cdecl FUN_006f5a80(void *);

__declspec(naked) void __fastcall FUN_006f5c30(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x3C]
        test    ecx, ecx
        jz      l_skip1
        push    esi
        call    FUN_006f7770
    l_skip1:
        lea     eax, [esi + 4]
        push    eax
        mov     ecx, edi
        call    FUN_006f5a80
        mov     ecx, dword ptr [esi + 0xC]
        test    ecx, ecx
        jz      l_skip2
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0xC], 0
    l_skip2:
        mov     eax, dword ptr [esi]
        _emit   0x8B
        _emit   0x3D
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        push    eax
        call    edi
        push    esi
        call    edi
        add     esp, 8
        pop     edi
        pop     esi
        ret     4
    }
}
