/*
 * FUN_00522de0 (343 B) — Entry record helper.
 *
 * __stdcall with 8 bytes of parameters. Allocates buffers and copies strings.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00416b60(void *param1);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __fastcall FUN_00412570(int param1);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00522de0(void)
{
    

extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [DAT_007dab40]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x8]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, ecx
        mov     edx, dword ptr [edx + 0x44]
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + 0x34]
        mov     edx, dword ptr [edx + 0x58]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     edx, dword ptr [eax + 0x44]
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x34]
        add     ecx, 0x18
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [esp + 0x14], edi
        jz      l_skip_free1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
l_skip_free1:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov edx, dword ptr [DAT_007dab40]
        mov     ebx, eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edi + 0x1c]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        mov     dword ptr [esi], ebx
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x1c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      l_skip_free2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
l_skip_free2:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax + 0x20]
        test    edx, edx
        mov     dword ptr [ebp], ebx
        jz      l_skip_inc
        inc     byte ptr [edx - 1]
l_skip_inc:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      l_skip_dec1
        mov     al, byte ptr [edx - 1]
        dec     edx
        dec     al
        mov     byte ptr [edx], al
        jnz     l_skip_dec1
        push    edx
        call    FUN_004084e0
        add     esp, 4
l_skip_dec1:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_skip_dec2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_dec2
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_dec2:
        mov     eax, 0x1
        add     esp, 0x8
        ret     0x8
    }


}
