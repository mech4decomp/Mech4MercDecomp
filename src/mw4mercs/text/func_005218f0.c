/*
 * FUN_005218f0 (392 B) — Pilot data processing.
 *
 * Processes pilot data: looks up pilot info, allocates structures,
 * copies strings, and manages reference counting.
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
extern void *__fastcall FUN_005936a0(void *this, void *arg);
extern void __fastcall FUN_004d21c0(void *this);

__declspec(naked) void FUN_005218f0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x4c
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x50], ecx
        mov ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        push    ebp
        xor     ecx, ebx
        mov     ecx, dword ptr [ecx + 0x44]
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [edx]
        push    edi
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x34]
        push    eax
        call    FUN_00595b60
        mov     edi, eax
        push    1
        lea     edx, [edi + 0x34]
        push    edx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      alloc_fail
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebp, eax
        jmp     alloc_done
alloc_fail:
        xor     ebp, ebp
alloc_done:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     edx, dword ptr [edi + 0x50]
        mov     dword ptr [ebp + 0x40], edx
        jz      skip_free1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
skip_free1:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [ebp + 0x8c]
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esi], ebx
        jz      skip_inc1
        inc     byte ptr [edx - 1]
skip_inc1:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        jz      skip_dec1
        mov     al, byte ptr [edx - 1]
        dec     edx
        dec     al
        mov     byte ptr [edx], al
        jnz     skip_dec1
        push    edx
        call    FUN_004084e0
        add     esp, 4
skip_dec1:
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
skip_free2:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x60]
        mov     ebx, eax
        lea     edx, [esp + 0x60]
        mov     dword ptr [ecx], ebx
        push    edx
        mov     ecx, ebp
        call    FUN_005936a0
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        jz      skip_dec2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec2
        push    eax
        call    FUN_004084e0
        add     esp, 4
skip_dec2:
        test    ebp, ebp
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x4c]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax], edx
        jz      skip_vcall
        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]
skip_vcall:
        lea     ecx, [esp + 0x18]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x4c
        ret     8
    }


}
