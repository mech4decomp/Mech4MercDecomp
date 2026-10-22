/*
 * FUN_005449F0 (363 B) — __thiscall, RET 4.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_00544b60(void);
extern void __fastcall FUN_005446c0(int param1, int param2);
extern int __fastcall FUN_0040ecc0(const char *str);
extern int __fastcall FUN_0040edc0(const char *str);
extern void __fastcall FUN_0040dca0(const char *str, int a, int b);
extern void __fastcall FUN_00411c80(const char *str, const char *str2);
extern void __fastcall FUN_0040e4a0(void);
extern void __fastcall FUN_0040de20(void);

extern int DAT_007db090;

__declspec(naked) void __fastcall FUN_005449f0(void *this, int param_1)
{
    

extern int DAT_0076b420;
__asm {
mov     eax, dword ptr [esp + 4]
        sub     esp, 0x350
        push    ebx
        mov     ebx, ecx
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        push    ebp
        lea     ebp, [ebx + ecx*8]
        or      ecx, 0xffffffff
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x3588]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x60]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edx, dword ptr [ebx]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp + ecx + 0x60], 0x20
        mov     byte ptr [esp + ecx + 0x61], al
        push    0x2f1
        mov     ecx, ebx
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x60]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        mov     eax, dword ptr [ebx]
        dec     edi
        rep     movsd
        mov     ecx, edx
        mov     edx, dword ptr [DAT_007db090]
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0x60]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        push    0
        push    0
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x30]
        push    0
        push    0
        push    0x77b7c0
        lea     ecx, [esp + 0x1c]
        call    FUN_0040dca0
        push    0x77b7c8
        lea     ecx, [esp + 0x14]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jnz     l_skip_ispban
        push    0x77b7c8
        lea     ecx, [esp + 0x14]
        call    FUN_0040edc0
        mov     esi, eax
    l_skip_ispban:
        xor     edx, edx
        mov     dl, byte ptr [ebp + 0x35ef]
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x35ee]
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x35ed]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [ebp + 0x35ec]
        push    eax
        push    ecx
        lea     eax, [esp + 0x26c]
        push    edx
        push    0x77b744
        push    eax
        call dword ptr [DAT_0076b420]
        add     esp, 0x18
        lea     ecx, [esp + 0x260]
        push    ecx
        push    0x77b7c8
        mov     ecx, esi
        call    FUN_00411c80
        lea     ecx, [esp + 0x10]
        call    FUN_0040e4a0
        mov     ecx, ebx
        call    FUN_00544b60
        mov     edx, dword ptr [esp + 0x364]
        push    0
        push    edx
        mov     ecx, ebx
        call    FUN_005446c0
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x350
        ret     4
    }


}
