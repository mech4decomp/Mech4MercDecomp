/*
 * FUN_0050e020 (168 B) — Command handler.
 *
 * Reads "Command" config entry, dispatches via virtual function,
 * and returns a result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00504ac0(void);
extern void FUN_00411bf0(void);
extern int __cdecl FUN_006fabf0(const char *, ...);
extern char FUN_0050e0d0(void);

__declspec(naked) int FUN_0050e020(void)
{
    

extern int DAT_007dc844;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x08]
        push    edi
        mov     edi, dword ptr [esi]
        mov     eax, dword ptr [edi]
        push    0x30
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00504ac0
        mov     ecx, dword ptr [esi + 0x08]
        add     esp, 0x04
        push    0x00
        lea     edx, [ebp + 0x08]
        push    edx
        test    eax, eax
        push    0x00777f24
        setnz   bl
        mov     dword ptr [ebp - 0x04], 0x00
        call    FUN_00411bf0
        test    al, al
        jz      l_skip_cmd
        mov     eax, dword ptr [ebp + 0x08]
        push    eax
        call    dword ptr [esi + 0x10]
        add     esp, 0x04
        cmp     eax, -0x01
        mov     dword ptr [ebp - 0x04], eax
        jnz     l_skip_cmd
        mov     ecx, dword ptr [ebp + 0x08]
        mov     eax, dword ptr [esi + 0x08]
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    0x00777efc
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      l_cmd_fail
        int     3
    l_cmd_fail:
        xor     bl, bl

    l_skip_cmd:
        mov     edx, dword ptr [edi]
        push    0x04
        lea     eax, [ebp - 0x04]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        push    esi
        call    FUN_0050e0d0
        add     esp, 0x04
        test    al, al
        jnz     l_ret
        xor     bl, bl

    l_ret:
        mov eax, dword ptr [DAT_007dc844]
        neg     bl
        pop     edi
        pop     esi
        sbb     ebx, ebx
        and     ebx, eax
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
