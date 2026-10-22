/*
 * FUN_00613db0 (117 B) — Constructor initializing a sub-object.
 *
 * __thiscall (ECX = this), RET 4 (one stack param). Calls FUN_00415180,
 * zeroes several fields, sets the vtable, and calls vtable[8] on three
 * sub-objects via FUN_00412a00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;
extern void __stdcall FUN_00415180(int param);
extern void __cdecl FUN_00412a00(int a, void *b);

__declspec(naked) void * __fastcall FUN_00613db0(void *this, int param1)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edi, dword ptr [esp + 0x14]
        xor     ecx, ecx
        lea     eax, [esi + 0x1c]
        lea     ebx, [esi + 0x10]
        mov     word ptr [ebx], 0xffff
        mov     word ptr [ebx + 2], cx
        lea     ebp, [esi + 0x18]
        mov     dword ptr [ebp], ecx
        push    eax
        mov     dword ptr [eax], ecx
        push    edi
        mov     dword ptr [esi + 8], ecx
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi], 0x78c2bc
        call    FUN_00412a00
        mov     edx, dword ptr [edi]
        add     esp, 8
        push    4
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        mov     dword ptr [esi + 0x14], 0xffffffff
        call    FUN_00412a00
        mov     eax, dword ptr [edi]
        add     esp, 8
        push    4
        lea     ecx, [esi + 0x20]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
