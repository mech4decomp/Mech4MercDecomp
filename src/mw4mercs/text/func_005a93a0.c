/*
 * FUN_005a93a0 (308 B) — __thiscall constructor; stores many fields and
 * copies a string into the object at offset 0x64.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a93a0(void)
{
    

extern void __cdecl FUN_10053461d(void);
extern void __cdecl FUN_1004ea0c2(void);
extern void __cdecl FUN_100428815(void);
__asm {
mov     eax, [esp + 0xc]
        mov     edx, [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        mov     ecx, [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        push    0x2
        mov     ecx, ebx
        call FUN_10053461d
        mov     ecx, [esp + 0x20]
        mov     eax, [esp + 0x1c]
        mov     [ebx + 0x14], ecx
        push    0x7dc694
        lea     ecx, [ebx + 0x18]
        mov     [ebx + 0x10], eax
        call FUN_1004ea0c2
        mov     edx, [esp + 0x28]
        push    edx
        lea     ecx, [ebx + 0x1c]
        call FUN_100428815
        mov     eax, [esp + 0x30]
        mov     ecx, [esp + 0x2c]
        mov     [ebx + 0x4c], eax
        mov     eax, [esp + 0x24]
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        mov     [ebx + 0x50], ecx
        mov     ecx, [esp + 0x38]
        mov     edi, [esp + 0x40]
        mov     [ebx + 0x58], ecx
        mov     cx, word ptr [esp + 0x3e]
        mov     word ptr [ebx + 0x54], dx
        mov     edx, [esp + 0x34]
        mov     word ptr [ebx + 0x56], ax
        mov     al, byte ptr [esp + 0x3c]
        mov     word ptr [ebx + 0x62], cx
        mov     ecx, [esp + 0x4c]
        mov     byte ptr [ebx + 0x60], al
        mov     eax, [esp + 0x48]
        mov     [ebx + 0xec], ecx
        mov     ecx, [esp + 0x54]
        mov     [ebx + 0x5c], edx
        mov     edx, [esp + 0x44]
        mov     [ebx + 0xe4], edx
        mov     dl, byte ptr [esp + 0x50]
        mov     [ebx + 0xe8], eax
        mov     ax, word ptr [esp + 0x52]
        mov     byte ptr [ebx + 0xf0], dl
        mov     edx, [esp + 0x58]
        mov     word ptr [ebx + 0xf2], ax
        mov     eax, [esp + 0x5c]
        mov     [ebx + 0xf4], ecx
        mov     ecx, [esp + 0x60]
        mov     [ebx + 0x100], ecx
        mov     ecx, [esp + 0x6c]
        mov     [ebx + 0x10c], ecx
        mov     [ebx + 0xfc], eax
        mov     eax, [esp + 0x64]
        or      ecx, 0xffffffff
        mov     [ebx + 0x108], eax
        xor     eax, eax
        repne   scasb
        mov     [ebx + 0xf8], edx
        mov     dl, byte ptr [esp + 0x68]
        not     ecx
        sub     edi, ecx
        mov     byte ptr [ebx + 0x104], dl
        mov     edx, [esp + 0x70]
        mov     eax, ecx
        mov     [ebx + 0x110], edx
        lea     edx, [ebx + 0x64]
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x64
    }


}
