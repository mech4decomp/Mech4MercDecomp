/*
 * FUN_0053C9F0 (231 B) — Team decal/texture update.
 *
 * Updates team decal/texture state based on team index.
 *
 * __thiscall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004084e0(int ptr);
extern int __fastcall FUN_00530360(void *this, int param);
extern int __fastcall FUN_0053cae0(void *this, int param);
extern int __fastcall FUN_0053db90(void *this, int param);
extern int __fastcall FUN_0053df10(void *this);
extern int __stdcall FUN_006215d0(int param);

__declspec(naked) void __fastcall FUN_0053c9f0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
__asm {
push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]     ; param_1 (team_index)
        mov     eax, edi
        shl     eax, 7
        add     eax, edi
        shl     eax, 3
        sub     eax, edi                        ; eax = team_index * 0x80e (actually * 0x3F7)
        mov     esi, ecx                        ; this
        lea     ebp, [esi + eax*0x8]            ; ebp = this + team_index * 0x2038
        mov     byte ptr [ebp + 0x353c], 0x01
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     dword ptr [ecx + 0x14], 0x05
        jnz     check_local_team

        mov edx, dword ptr [DAT_007dab44]

        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     eax, dword ptr [eax + 0x20]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x225c]
        call    FUN_006215d0
        test    eax, eax
        jz      call_helpers
        mov     al, byte ptr [ebp + 0x353e]
        test    al, al
        jnz     call_helpers
        push    edi
        mov     ecx, esi
        call    FUN_0053db90

    call_helpers:
        push    edi
        mov     ecx, esi
        call    FUN_0053cae0
        mov     ecx, esi
        call    FUN_0053df10

        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]

        xor edx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        mov     byte ptr [eax + 0xb0], 0x01
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      done
        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      done
        push    edi
        mov     ecx, esi
        call    FUN_00530360
        pop     edi
        pop     esi
        pop     ebp
        ret     0x08

    check_local_team:
        mov edx, dword ptr [DAT_007db094]

        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     edi, ecx
        jne     done
        push    edi
        mov     ecx, esi
        call    FUN_0053cae0

        mov eax, dword ptr [DAT_007dab44]

        mov edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     byte ptr [edx + 0xb0], 0x01

    done:
        pop     edi
        pop     esi
        pop     ebp
        ret     0x08
    }


}
