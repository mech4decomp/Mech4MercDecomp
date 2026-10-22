/*
 * FUN_005de210 (404 B) — __thiscall (ECX = this), RET 4. Constructor that
 * initializes a large object (vtable 0x788640) and issues a long series of
 * virtual calls (offset +0x20) on param_1 to read fields into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *a);
extern void __cdecl FUN_00637ac0(void);
extern void __cdecl FUN_00412a00(void *a, void *b);

__declspec(naked) void __stdcall FUN_005de210(void *param_1)
{
    

extern int DAT_007b8c10;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [edi + 0x10], eax
        lea     esi, [edi + 0x10]
        lea     ebx, [edi + 0x14]
        mov     word ptr [ebx + 0x2], ax
        mov     word ptr [ebx], 0xFFFF
        lea     ebp, [edi + 0x18]
        mov     dword ptr [ebp], eax
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xC], eax
        mov     dword ptr [edi], 0x788640
        call    FUN_00637ac0
        push    esi
        mov     esi, dword ptr [esp + 0x1C]
        push    esi
        call    FUN_00412a00
        push    ebp
        push    esi
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0x1C]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x24]
        mov     dword ptr [edi + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x3C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x4C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x60]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x68]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x70]
        mov     dword ptr [edi + 0x6C], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }


}
