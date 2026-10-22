/* FUN_00536eb0 - 245 bytes */
#include <windows.h>

extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00535b50(void);
extern void __cdecl FUN_004ce190(void);

__declspec(naked) void FUN_00536eb0(void)
{
    __asm {
        sub     esp, 0x08
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, [esp + 0x18]
        mov     esi, [edi + 0x54]
        mov     eax, [esi]
        mov     ebx, [edi + 0x50]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, [esi + 0xcf8]
        cmp     edx, [edi + 0x3070]
        jnz     label_not_equal
        mov     eax, [esi + 0xcfc]
        cmp     eax, [edi + 0x3074]
        jz      label_copy_fields
label_not_equal:
        mov     ecx, [esi + 0xcfc]
        push    ebp
        mov     ebp, [esi + 0xcf8]
        lea     edx, [esi + 0x378]
        mov     [esp + 0x14], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00535b50
        cmp     ebp, eax
        jnz     label_call_log
        cmp     dword ptr [esp + 0x14], edx
        jz      label_set_true
label_call_log:
        mov     ecx, dword ptr [DAT_007db094]
        mov     edx, dword ptr [DAT_007dab44]
        xor     eax, eax
        mov     al, [ecx + 0x28]
        mov     ecx, dword ptr [DAT_007dab40]
        push    1
        push    0
        push    0x21
        mov     byte ptr [edi + 0x3078], 0
        push    eax
        mov     eax, [edx]
        xor     eax, ecx
        mov     ecx, [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        jmp     label_store
label_set_true:
        mov     byte ptr [edi + 0x3078], 1
label_store:
        mov     ecx, [esp + 0x14]
        mov     [edi + 0x3070], ebp
        mov     [edi + 0x3074], ecx
        pop     ebp
label_copy_fields:
        mov     edx, [esi + 0x44]
        mov     eax, [esi + 0x50]
        mov     ecx, [esi + 0x58]
        mov     [ebx + 0x44], edx
        mov     edx, [esi + 0x5c]
        mov     [ebx + 0x50], eax
        mov     eax, [esi + 0x60]
        mov     [ebx + 0x58], ecx
        mov     ecx, [esi + 0x64]
        mov     [ebx + 0x5c], edx
        mov     edx, [esi + 0x1c]
        mov     [ebx + 0x60], eax
        mov     eax, [esi + 0x70]
        mov     [ebx + 0x64], ecx
        mov     ecx, [esi + 0x80]
        pop     edi
        pop     esi
        mov     [ebx + 0x1c], edx
        mov     [ebx + 0x70], eax
        mov     [ebx + 0x80], ecx
        pop     ebx
        add     esp, 0x08
        ret     4
    }
}
