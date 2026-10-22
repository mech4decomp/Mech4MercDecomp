/*
 * FUN_00521d00 (261 B) — Pilot data update.
 *
 * Updates pilot data: looks up pilot info, copies strings, and
 * manages reference counting.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern int __fastcall FUN_00595b60(void *this, int arg);
extern void __fastcall FUN_004129c0(void *this);
extern void __fastcall FUN_00412950(void *this);
extern void __fastcall FUN_00412740(void *this, void *arg);
extern void __fastcall FUN_005948a0(void *this, void *arg);

__declspec(naked) void FUN_00521d00(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [edx]
        push    esi
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0x44]
        push    edi
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x34]
        call    FUN_00595b60
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        mov     dword ptr [edx + 0x48], eax
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      skip_inc
        inc     byte ptr [eax - 1]
skip_inc:
        lea     ecx, [esp + 0x10]
        call    FUN_004129c0
        lea     ecx, [esp + 0x10]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx + 0x40970]
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x10]
        push    ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xa8
        call    FUN_00412740
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x10]
        mov esi, dword ptr [DAT_007dab40]
        push    ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        mov     ecx, dword ptr [edx + 0x50]
        call    FUN_005948a0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
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
        mov     eax, 1
        ret     8
    }


}
