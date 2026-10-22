/*
 * FUN_00521a80 (628 B) — Pilot data processing (extended).
 *
 * Processes pilot data: looks up pilot info, allocates structures,
 * copies strings via multiple string operations, and manages
 * reference counting.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __fastcall FUN_00595b60(void *this, int arg);
extern int __fastcall FUN_004d1f80(void *this, int arg);
extern int __fastcall FUN_00592a70(void *this, void *arg);
extern void __stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_006f4230(void *ptr);
extern void __fastcall FUN_00412570(void *this, const char *s);
extern void *__fastcall FUN_00593620(void *this);
extern void __fastcall FUN_00412780(void *this, const char *s);
extern void *__fastcall FUN_00593660(void *this);
extern void __fastcall FUN_004d21c0(void *this);

__declspec(naked) void FUN_00521a80(void)
{
    

extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
sub     esp, 0x60
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 8], edx
        mov     edx, dword ptr [eax + 0x18]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [eax + 0x1c]
        push    ebp
        mov     ebp, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x24]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x28]
        push    esi
        mov     dword ptr [esp + 0xc], edx
        mov edx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [edx]
        push    edi
        mov     edi, dword ptr [eax + 0x20]
        mov     eax, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        xor     ecx, ebx
        mov     eax, dword ptr [ecx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        push    edx
        call    FUN_00595b60
        mov     esi, eax
        push    1
        lea     ecx, [esi + 0x34]
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      alloc_fail
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebx, eax
        jmp     alloc_done
alloc_fail:
        xor     ebx, ebx
alloc_done:
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [ebx + 0x44]
        mov     edx, dword ptr [ebx + 0x48]
        mov     dword ptr [ebx + 0x40], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx + 0x50]
        mov     dword ptr [ebp], ecx
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0x40]
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [edx], ecx
        jz      skip_free1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [edi], 0
skip_free1:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov edx, dword ptr [DAT_007dab40]
        mov     ebp, eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0x38]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        mov     dword ptr [edi], ebp
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x78]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x74]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
skip_free2:
        push    0
        push    0x200
        call    FUN_006f3c80
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [edx + 0xc]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x10]
        xor     esi, 0x85739531
        mov     edi, dword ptr [esi]
        mov     ecx, ebx
        mov     dword ptr [eax], ebp
        call    FUN_00593620
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x34]
        push    eax
        lea     ecx, [esp + 0x78]
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x74]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free3
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
skip_free3:
        push    0
        push    0x200
        call    FUN_006f3c80
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     ebp, eax
        mov     dword ptr [esi], ebp
        xor edx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [edx + 0xc]
        xor     esi, 0x85739531
        mov     edi, dword ptr [esi]
        mov     ecx, ebx
        call    FUN_00593660
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x34]
        push    eax
        lea     ecx, [esp + 0x78]
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x74]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    ebx, ebx
        rep movsb
        jz      skip_vcall
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
skip_vcall:
        mov     eax, dword ptr [esp + 0x74]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      ret_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     ret_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
ret_done:
        lea     ecx, [esp + 0x1c]
        call    FUN_004d21c0
        mov     eax, 1
        add     esp, 0x60
        ret     8
    }


}
