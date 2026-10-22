/*
 * FUN_005217d0 (278 B) — Pilot data lookup and string copy.
 *
 * Looks up pilot data from global tables, copies matching entries into
 * an output buffer, and manages reference counting.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_004129c0(void *this);
extern void __fastcall FUN_00412950(void *this);
extern void __fastcall FUN_00412740(void *this, void *arg);

__declspec(naked) void FUN_005217d0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 8]
        mov eax, dword ptr [DAT_007dab44]
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x44]
        add     ecx, 0x44
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x34]
        push    esi
        mov     esi, dword ptr [ecx]
        add     eax, 0x10
        mov     eax, dword ptr [eax]
        xor     esi, 0x85739531
        mov     esi, dword ptr [esi + 0x34]
        push    edi
        mov     edi, dword ptr [esi + 0x58]
        mov     esi, edx
loop_top:
        test    eax, eax
        jz      loop_done
        mov     edx, dword ptr [eax]
        test    edx, edx
        mov     eax, dword ptr [eax + 4]
        jz      loop_done
        cmp     dword ptr [edx + 0x18], 0
        jz      loop_top
        cmp     dword ptr [edx + 0x3c], edi
        jnz     loop_top
        mov     edx, dword ptr [edx + 0x38]
        mov     dword ptr [esi], edx
        add     esi, 4
        jmp     loop_top
loop_done:
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x34]
        mov     eax, dword ptr [edx + 0x48]
        mov     edx, dword ptr [eax + 0x38]
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        mov     dword ptr [ebx], edx
        mov     edx, dword ptr [ecx + 0x48]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      skip_inc
        inc     byte ptr [eax - 1]
skip_inc:
        lea     ecx, [esp + 0x14]
        call    FUN_004129c0
        lea     ecx, [esp + 0x14]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        mov edx, dword ptr [DAT_007dab44]
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x40970]
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [edx]
        mov edi, dword ptr [DAT_007dab40]
        lea     ecx, [esp + 0x14]
        push    ecx
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xa8
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
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
        mov     eax, 1
        ret     8
    }


}
